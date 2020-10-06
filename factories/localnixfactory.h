#ifndef LOCALNIXFACTORY_H
#define LOCALNIXFACTORY_H

#include <QObject>

class LocalNixFactory : public QObject
{
    Q_OBJECT
public:
    explicit LocalNixFactory(QObject *parent = nullptr);

signals:

};

#endif // LOCALNIXFACTORY_H
