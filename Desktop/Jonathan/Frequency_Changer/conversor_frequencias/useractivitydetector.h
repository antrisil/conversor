#ifndef USERACTIVITYDETECTOR_H
#define USERACTIVITYDETECTOR_H
#include "qobject.h"
#include "timer.h"
#include "includes.h"


class UserActivityDetector : public QObject
{
    Q_OBJECT
public:
    UserActivityDetector(QObject *parent = nullptr);

signals:
    void userActivityDetected();

protected:
    bool eventFilter(QObject *obj, QEvent *event) override;

private:
    QTimer m_timer;
};

#endif // USERACTIVITYDETECTOR_H
