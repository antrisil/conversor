#include "useractivitydetector.h"
#include "qcoreevent.h"

UserActivityDetector::UserActivityDetector(QObject *parent)
    : QObject(parent)
{
    m_timer.setInterval(5000);
    m_timer.setSingleShot(true);
    connect(&m_timer, &QTimer::timeout, this, &UserActivityDetector::userActivityDetected);
}

bool UserActivityDetector::eventFilter(QObject *obj, QEvent *event)
{
    switch (event->type()) {
//    case QEvent::KeyPress:
//    case QEvent::KeyRelease:
    case QEvent::MouseButtonPress:
    case QEvent::MouseButtonRelease:
    case QEvent::MouseMove:
    case QEvent::Wheel:
        m_timer.start();
        break;
    default:
        break;
    }
    return QObject::eventFilter(obj, event);
}
