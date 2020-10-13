#ifndef SYSTEMSTATE_H
#define SYSTEMSTATE_H

#include <QObject>

class SystemState : public QObject
{
    Q_OBJECT
public:
    explicit SystemState(QObject *parent = nullptr);

signals:

};

#endif // SYSTEMSTATE_H
