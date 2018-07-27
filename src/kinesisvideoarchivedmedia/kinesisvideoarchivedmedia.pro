include(../../common.pri)

TARGET = QtAwsKinesisVideoArchivedMedia
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    gethlsstreamingsessionurlrequest.h \
    gethlsstreamingsessionurlrequest_p.h \
    gethlsstreamingsessionurlresponse.h \
    gethlsstreamingsessionurlresponse_p.h \
    getmediaforfragmentlistrequest.h \
    getmediaforfragmentlistrequest_p.h \
    getmediaforfragmentlistresponse.h \
    getmediaforfragmentlistresponse_p.h \
    kinesisvideoarchivedmediaclient.h \
    kinesisvideoarchivedmediaclient_p.h \
    kinesisvideoarchivedmediarequest.h \
    kinesisvideoarchivedmediarequest_p.h \
    kinesisvideoarchivedmediaresponse.h \
    kinesisvideoarchivedmediaresponse_p.h \
    listfragmentsrequest.h \
    listfragmentsrequest_p.h \
    listfragmentsresponse.h \
    listfragmentsresponse_p.h \

SOURCES += \
    gethlsstreamingsessionurlrequest.cpp \
    gethlsstreamingsessionurlresponse.cpp \
    getmediaforfragmentlistrequest.cpp \
    getmediaforfragmentlistresponse.cpp \
    kinesisvideoarchivedmediaclient.cpp \
    kinesisvideoarchivedmediarequest.cpp \
    kinesisvideoarchivedmediaresponse.cpp \
    listfragmentsrequest.cpp \
    listfragmentsresponse.cpp \

win32:CONFIG += skip_target_version_ext
