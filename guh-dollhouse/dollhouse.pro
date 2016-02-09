include(plugins.pri)

TARGET = $$qtLibraryTarget(guh_deviceplugindollhouse)

message(============================================)
message(Qt version: $$[QT_VERSION])
message("Building $$deviceplugin$${TARGET}.so")

SOURCES += \
    deviceplugindollhouse.cpp \
    dollhouselight.cpp

HEADERS += \
    deviceplugindollhouse.h \
    dollhouselight.h
