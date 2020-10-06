#ifndef BASEFACTORY_H
#define BASEFACTORY_H

#include <QObject>

class BaseFactory : public QObject
{
    Q_OBJECT
public:
    explicit BaseFactory(QObject *parent = nullptr);

signals:

};

#endif // BASEFACTORY_H
