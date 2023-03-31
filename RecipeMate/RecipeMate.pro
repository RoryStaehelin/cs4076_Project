QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Recipe.cpp \
    createnewrecipe.cpp \
    customexception.cpp \
    importrecipe.cpp \
    main.cpp \
    mainwindow.cpp \
    openrecipe.cpp \
    showmultirecipe.cpp \
    showsinglerecipe.cpp

HEADERS += \
    Recipe.h \
    comparetemplate.h \
    createnewrecipe.h \
    customexception.h \
    importrecipe.h \
    mainwindow.h \
    openrecipe.h \
    showmultirecipe.h \
    showsinglerecipe.h

FORMS += \
    createnewrecipe.ui \
    importrecipe.ui \
    mainwindow.ui \
    openrecipe.ui \
    showmultirecipe.ui \
    showsinglerecipe.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    ../build-RecipeMate-Desktop_Qt_6_4_2_MinGW_64_bit-Debug/recipes.txt
