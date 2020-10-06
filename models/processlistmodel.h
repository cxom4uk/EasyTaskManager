#ifndef PROCESSLISTMODEL_H
#define PROCESSLISTMODEL_H

#include <QObject>

class ProcessListModel : public QObject
{
    Q_OBJECT
public:
    explicit ProcessListModel(QObject *parent = nullptr);

signals:

};

#endif // PROCESSLISTMODEL_H
