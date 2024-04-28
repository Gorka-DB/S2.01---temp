TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        diaporama.cpp \
        image.cpp \
        lecteur.cpp \
        lecteurvue.cpp \
        main.cpp

HEADERS += \
    diaporama.h \
    image.h \
    lecteur.h \
    lecteurvue.h

FORMS += \
    lecteurvue.ui
