#ifndef LOCALNIXFACTORY_H
#define LOCALNIXFACTORY_H

#include <QObject>

#include <QDir>

#include <QString>

#include "basefactory.h"

namespace easy {

class LocalNixFactory : public BaseFactory
{
    Q_OBJECT
public:
    explicit LocalNixFactory(QObject *parent = nullptr);

    ProcessList getProcessList() const override;

};

}

#endif // LOCALNIXFACTORY_H
