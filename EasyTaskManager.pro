QT += quick

CONFIG += c++11

INCLUDEPATH += \
    factories/ \
    models/ \
    state-objects/

DEPENDPATH += \
    factories/ \
    models/ \
    state-objects/

HEADERS += \
    factories/basefactory.h \
    factories/localnixfactory.h \
    models/processlistmodel.h \
    state-objects/processstate.h \
    state-objects/systemstate.h

SOURCES += \
        factories/basefactory.cpp \
        factories/localnixfactory.cpp \
        main.cpp \
        models/processlistmodel.cpp \
        state-objects/processstate.cpp \
        state-objects/systemstate.cpp

RESOURCES += \
        qml.qrc

TRANSLATIONS += \
    EasyTaskManager_ru_RU.ts
