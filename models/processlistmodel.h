#ifndef PROCESSLISTMODEL_H
#define PROCESSLISTMODEL_H

#include <QObject>

#include <QAbstractTableModel>

namespace easy {

class ProcessListModel : public QAbstractTableModel
{
    Q_OBJECT
public:
    explicit ProcessListModel(QObject *parent = nullptr);

};

}

#endif // PROCESSLISTMODEL_H
