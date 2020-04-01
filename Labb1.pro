TEMPLATE = app
CONFIG += c++11
QT     += core gui widgets
INCLUDEPATH += C:\Users\didan\Desktop\shape-lib-complete\complete\headers
LIBS += C:\Users\didan\Desktop\shape-lib-complete\complete\shape-lib_mingw-32_qt-5-14-1_debug.a
SOURCES += main.cpp

HEADERS += \
    ../../shape-lib-complete/complete/headers/Header.h \
    ../../shape-lib-complete/complete/headers/circle.h \
    ../../shape-lib-complete/complete/headers/point.h \
    ../../shape-lib-complete/complete/headers/square.h \
    ../../shape-lib-complete/complete/headers/textwindow.h
