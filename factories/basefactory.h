#ifndef BASEFACTORY_H
#define BASEFACTORY_H

#include <QObject>

#include <QStringList>

namespace easy  {

typedef QStringList ProcessList;

class BaseFactory : public QObject
{
    Q_OBJECT
public:
    explicit BaseFactory(QObject *parent = nullptr);

    virtual ProcessList getProcessList() const = 0;

};

}

#endif // BASEFACTORY_H
