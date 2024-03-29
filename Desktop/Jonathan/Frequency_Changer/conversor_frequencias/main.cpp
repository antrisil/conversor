#include "dbmanager.h"
#include "pcan.h"
#include "useractivitydetector.h"
#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <stdlib.h>
#include <unistd.h>
#include <timer.h>

//constructors
DbManager * db = new DbManager();
pcan * pcan_ = new pcan();
timer idleTimer;

//methods to main
void remaining() {
    idleTimer.remainingTimer();
}

void _pcan() {
    QString errorString;
    can_do_stop("can0");
    can_set_bitrate("can0", 250000);
    can_do_start("can0");
    QCanBusDevice * device = QCanBus::instance() -> createDevice(QStringLiteral("socketcan"), QStringLiteral("can0"), & errorString);
    if (!device) {
        qDebug() << errorString;
        qDebug() << "error";
    } else {
        qDebug() << "all good";
        device -> setConfigurationParameter(QCanBusDevice::BitRateKey, QVariant::fromValue(250000));
        device -> connectDevice();
        pcan_ -> write(device);
        pcan_ -> receive(device);
    }
}

void dbmanager() {
    db -> newSession();
    db -> insertSession();
    db -> createTable();
    db -> dropOlderTable();
    db -> keep100rows();
    db -> selectSerialNumber();
    db -> selectBypass();
    db -> selectStandby();
    db -> selectOutput();
    idleTimer.setSeconds(db -> getSeconds());
    idleTimer.setMinutes(db -> getMinutes());
    idleTimer.setHours(db -> getHours());
    db -> insertIntoTable();
}

void _db_() {
    //    db->lastOne();

    db -> selectLoad();
}

int main(int argc, char * argv[]) {

    //  Threads
    QtConcurrent::run(_pcan);
    QtConcurrent::run(dbmanager);
    QtConcurrent::run(_db_);
    QtConcurrent::run(remaining);



    QApplication app(argc, argv);
    QQuickView viewer;
    UserActivityDetector activityDetector;
    QTranslator *translator = new QTranslator();
    QQmlEngine *_engine;
    translator->load("PT_pt", "/home/jonathan/Desktop/Jonathan/Frequency_Changer/conversor_frequencias/translations");
    app.installTranslator(translator);
    _engine->retranslate();

    app.installEventFilter( & activityDetector);

    QObject::connect( & activityDetector, & UserActivityDetector::userActivityDetected, &
                                                                                     idleTimer, & timer::resetTimer);
    QObject::connect( & idleTimer, & timer::userActivity, & idleTimer, & timer::standby);
    viewer.engine() -> rootContext() -> setContextProperty("pcan", pcan_);
    viewer.engine() -> rootContext() -> setContextProperty("db", db);
    viewer.engine() -> rootContext() -> setContextProperty("idleTimer", & idleTimer);
    viewer.setSource(QUrl::fromLocalFile("/home/jonathan/Desktop/Jonathan/Frequency_Changer/conversor_frequencias/main.qml"));

    // The following are needed to make examples run without having to install the module
    // in desktop environments.
#ifdef Q_OS_WIN
    QString extraImportPath(QStringLiteral("%1/../../../../%2"));
#else
    QString extraImportPath(QStringLiteral("%1/../../../%2"));
#endif
    viewer.engine() -> addImportPath(extraImportPath.arg(QGuiApplication::applicationDirPath(),
                                                       QString::fromLatin1("qml")));
    QObject::connect(viewer.engine(), & QQmlEngine::quit, & viewer, & QWindow::close);

    viewer.setTitle(QStringLiteral("Test"));
    viewer.setSource(QUrl("/home/jonathan/Desktop/Jonathan/Frequency_Changer/conversor_frequencias/main.qml"));
    viewer.setProperty("width", 640);
    viewer.setProperty("height", 480);
    viewer.setResizeMode(QQuickView::SizeRootObjectToView);
    viewer.show();

    return app.exec();
}
