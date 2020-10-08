#include "localnixfactory.h"

#include <iostream>

easy::LocalNixFactory::LocalNixFactory(QObject *parent) : BaseFactory(parent)
{

}

easy::ProcessList easy::LocalNixFactory::getProcessList() const
{
    QDir directory(
                "/proc",
                "",
                QDir::NoSort,
                QDir::Dirs | QDir::NoSymLinks | QDir::NoDotAndDotDot
                );

    QStringList entry = directory.entryList();

    QRegularExpression regex("^[1-9][0-9]*$");

    ProcessList result;

    for (QStringList::iterator iterator = entry.begin(); iterator != entry.end(); iterator++)
    {
        QRegularExpressionMatch match = regex.match(*iterator);

        if (match.hasMatch())
        {
            result.push_back(*iterator);
        }
    }

    return result;
}
