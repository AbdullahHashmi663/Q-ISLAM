QT  += core gui multimedia multimediawidgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    ali.cpp \
    ashr.cpp \
    audio.cpp \
    form.cpp \
    main.cpp \
    mainwindow.cpp \
    name.cpp \
    news.cpp \
    option.cpp \
    pdfveiw.cpp \
    quran.cpp \
    rehman.cpp \
    saad.cpp \
    seratopt.cpp \
    talha.cpp \
    ubaidah.cpp \
    umer.cpp \
    usman.cpp \
    waqas.cpp \
    zubair.cpp

HEADERS += \
    ali.h \
    ashr.h \
    audio.h \
    form.h \
    mainwindow.h \
    name.h \
    news.h \
    option.h \
    pdfveiw.h \
    quran.h \
    rehman.h \
    saad.h \
    seratopt.h \
    talha.h \
    ubaidah.h \
    umer.h \
    usman.h \
    waqas.h \
    zubair.h

FORMS += \
    ali.ui \
    ashr.ui \
    audio.ui \
    form.ui \
    mainwindow.ui \
    name.ui \
    news.ui \
    option.ui \
    pdfveiw.ui \
    quran.ui \
    rehman.ui \
    saad.ui \
    seratopt.ui \
    talha.ui \
    ubaidah.ui \
    umer.ui \
    usman.ui \
    waqas.ui \
    zubair.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    as.qrc \
    asam.qrc \
    ase.qrc \
    bg.qrc \
    bk.qrc \
    bki.qrc \
    er.qrc \
    img.qrc \
    img12.qrc \
    img22.qrc \
    resss.qrc \
    sah.qrc
