include(../../common.pri)

TARGET = firehose
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    createdeliverystreamrequest.h \
    createdeliverystreamrequest_p.h \
    createdeliverystreamresponse.h \
    createdeliverystreamresponse_p.h \
    deletedeliverystreamrequest.h \
    deletedeliverystreamrequest_p.h \
    deletedeliverystreamresponse.h \
    deletedeliverystreamresponse_p.h \
    describedeliverystreamrequest.h \
    describedeliverystreamrequest_p.h \
    describedeliverystreamresponse.h \
    describedeliverystreamresponse_p.h \
    firehoseclient.h \
    firehoseclient_p.h \
    firehoserequest.h \
    firehoserequest_p.h \
    firehoseresponse.h \
    firehoseresponse_p.h \
    listdeliverystreamsrequest.h \
    listdeliverystreamsrequest_p.h \
    listdeliverystreamsresponse.h \
    listdeliverystreamsresponse_p.h \
    putrecordbatchrequest.h \
    putrecordbatchrequest_p.h \
    putrecordbatchresponse.h \
    putrecordbatchresponse_p.h \
    putrecordrequest.h \
    putrecordrequest_p.h \
    putrecordresponse.h \
    putrecordresponse_p.h \
    updatedestinationrequest.h \
    updatedestinationrequest_p.h \
    updatedestinationresponse.h \
    updatedestinationresponse_p.h \

SOURCES += \
    createdeliverystreamrequest.cpp \
    createdeliverystreamresponse.cpp \
    deletedeliverystreamrequest.cpp \
    deletedeliverystreamresponse.cpp \
    describedeliverystreamrequest.cpp \
    describedeliverystreamresponse.cpp \
    firehoseclient.cpp \
    firehoserequest.cpp \
    firehoseresponse.cpp \
    listdeliverystreamsrequest.cpp \
    listdeliverystreamsresponse.cpp \
    putrecordbatchrequest.cpp \
    putrecordbatchresponse.cpp \
    putrecordrequest.cpp \
    putrecordresponse.cpp \
    updatedestinationrequest.cpp \
    updatedestinationresponse.cpp \

win32:CONFIG += skip_target_version_ext
