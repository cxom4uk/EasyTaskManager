#ifndef SYSTEMSTATE_H
#define SYSTEMSTATE_H

#include <QObject>

namespace easy {

class SystemState : public QObject
{
    Q_OBJECT
public:
    explicit SystemState(QObject *parent = nullptr);

};

}

#endif // SYSTEMSTATE_H
