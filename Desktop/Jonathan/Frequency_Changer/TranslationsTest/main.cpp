#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QtQml>
#include <QDebug>

#include "mytranslator.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;

    MyTranslator translator(&engine);

    const QUrl url("/home/jonathan/Desktop/Jonathan/Frequency_Changer/TranslationsTest/main.qml");
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                     &app, [url](QObject *obj, const QUrl &objUrl) {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);
    engine.rootContext()->setContextProperty("translator", &translator);
    engine.load(url);

    return app.exec();
}
