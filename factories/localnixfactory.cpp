#include "localnixfactory.h"

easy::LocalNixFactory::LocalNixFactory(QObject *parent) : BaseFactory(parent)
{

}

easy::ProcessList easy::LocalNixFactory::getProcessList() const
{
    QDir directory(
                "/proc",
                "[1-9][0-9]*",
                QDir::NoSort,
                QDir::Dirs | QDir::NoSymLinks
                );

    ProcessList result = directory.entryList();

    return result;
}
