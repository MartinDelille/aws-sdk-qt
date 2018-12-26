include(../../common.pri)

TARGET = QtAwsMarketplaceMetering
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    batchmeterusagerequest.h \
    batchmeterusagerequest_p.h \
    batchmeterusageresponse.h \
    batchmeterusageresponse_p.h \
    marketplacemeteringclient.h \
    marketplacemeteringclient_p.h \
    marketplacemeteringrequest.h \
    marketplacemeteringrequest_p.h \
    marketplacemeteringresponse.h \
    marketplacemeteringresponse_p.h \
    meterusagerequest.h \
    meterusagerequest_p.h \
    meterusageresponse.h \
    meterusageresponse_p.h \
    registerusagerequest.h \
    registerusagerequest_p.h \
    registerusageresponse.h \
    registerusageresponse_p.h \
    resolvecustomerrequest.h \
    resolvecustomerrequest_p.h \
    resolvecustomerresponse.h \
    resolvecustomerresponse_p.h \

SOURCES += \
    batchmeterusagerequest.cpp \
    batchmeterusageresponse.cpp \
    marketplacemeteringclient.cpp \
    marketplacemeteringrequest.cpp \
    marketplacemeteringresponse.cpp \
    meterusagerequest.cpp \
    meterusageresponse.cpp \
    registerusagerequest.cpp \
    registerusageresponse.cpp \
    resolvecustomerrequest.cpp \
    resolvecustomerresponse.cpp \

win32:CONFIG += skip_target_version_ext
