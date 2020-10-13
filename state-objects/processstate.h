#ifndef PROCESSSTATE_H
#define PROCESSSTATE_H

#include <QObject>

namespace easy {

class ProcessState : public QObject
{
    Q_OBJECT
public:
    explicit ProcessState(QObject *parent = nullptr);
};

}

#endif // PROCESSSTATE_H
