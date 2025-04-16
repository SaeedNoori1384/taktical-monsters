QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    main_project_page_1.cpp \
    main_project_page_2.cpp \
    main_project_page_3_1.cpp \
    main_project_page_3_2.cpp \
    main_project_page_3_3.cpp

HEADERS += \
    main_project_page_1.h \
    main_project_page_2.h \
    main_project_page_3_1.h \
    main_project_page_3_2.h \
    main_project_page_3_3.h

FORMS += \
    main_project_page_1.ui \
    main_project_page_2.ui \
    main_project_page_3_1.ui \
    main_project_page_3_2.ui \
    main_project_page_3_3.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    iii.qrc \
    image.qrc \
    imagebazi.qrc\
    qiq.qrc
