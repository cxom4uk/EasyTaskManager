QT += quick

CONFIG += c++11

INCLUDEPATH += \
    factories/ \
    models/

DEPENDPATH += \
    factories/ \
    models/

HEADERS += \
    factories/basefactory.h \
    factories/localnixfactory.h \
    models/processlistmodel.h

SOURCES += \
        factories/basefactory.cpp \
        factories/localnixfactory.cpp \
        main.cpp \
        models/processlistmodel.cpp

RESOURCES += \
        qml.qrc

TRANSLATIONS += \
    EasyTaskManager_ru_RU.ts
