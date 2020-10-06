QT += quick

CONFIG += c++11

SOURCES += \
        factories/basefactory.cpp \
        factories/localnixfactory.cpp \
        main.cpp \
        models/processlistmodel.cpp

RESOURCES += \
        qml.qrc

TRANSLATIONS += \
    EasyTaskManager_ru_RU.ts

#qnx: target.path = /tmp/$${TARGET}/bin
#else: unix:!android: target.path = /opt/$${TARGET}/bin
#!isEmpty(target.path): INSTALLS += target

HEADERS += \
    factories/basefactory.h \
    factories/localnixfactory.h \
    models/processlistmodel.h
