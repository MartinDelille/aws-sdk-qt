include(../../common.pri)

TARGET = QtAwsServerlessApplicationRepository
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    createapplicationrequest.h \
    createapplicationrequest_p.h \
    createapplicationresponse.h \
    createapplicationresponse_p.h \
    createapplicationversionrequest.h \
    createapplicationversionrequest_p.h \
    createapplicationversionresponse.h \
    createapplicationversionresponse_p.h \
    createcloudformationchangesetrequest.h \
    createcloudformationchangesetrequest_p.h \
    createcloudformationchangesetresponse.h \
    createcloudformationchangesetresponse_p.h \
    createcloudformationtemplaterequest.h \
    createcloudformationtemplaterequest_p.h \
    createcloudformationtemplateresponse.h \
    createcloudformationtemplateresponse_p.h \
    deleteapplicationrequest.h \
    deleteapplicationrequest_p.h \
    deleteapplicationresponse.h \
    deleteapplicationresponse_p.h \
    getapplicationpolicyrequest.h \
    getapplicationpolicyrequest_p.h \
    getapplicationpolicyresponse.h \
    getapplicationpolicyresponse_p.h \
    getapplicationrequest.h \
    getapplicationrequest_p.h \
    getapplicationresponse.h \
    getapplicationresponse_p.h \
    getcloudformationtemplaterequest.h \
    getcloudformationtemplaterequest_p.h \
    getcloudformationtemplateresponse.h \
    getcloudformationtemplateresponse_p.h \
    listapplicationdependenciesrequest.h \
    listapplicationdependenciesrequest_p.h \
    listapplicationdependenciesresponse.h \
    listapplicationdependenciesresponse_p.h \
    listapplicationsrequest.h \
    listapplicationsrequest_p.h \
    listapplicationsresponse.h \
    listapplicationsresponse_p.h \
    listapplicationversionsrequest.h \
    listapplicationversionsrequest_p.h \
    listapplicationversionsresponse.h \
    listapplicationversionsresponse_p.h \
    putapplicationpolicyrequest.h \
    putapplicationpolicyrequest_p.h \
    putapplicationpolicyresponse.h \
    putapplicationpolicyresponse_p.h \
    serverlessapplicationrepositoryclient.h \
    serverlessapplicationrepositoryclient_p.h \
    serverlessapplicationrepositoryrequest.h \
    serverlessapplicationrepositoryrequest_p.h \
    serverlessapplicationrepositoryresponse.h \
    serverlessapplicationrepositoryresponse_p.h \
    updateapplicationrequest.h \
    updateapplicationrequest_p.h \
    updateapplicationresponse.h \
    updateapplicationresponse_p.h \

SOURCES += \
    createapplicationrequest.cpp \
    createapplicationresponse.cpp \
    createapplicationversionrequest.cpp \
    createapplicationversionresponse.cpp \
    createcloudformationchangesetrequest.cpp \
    createcloudformationchangesetresponse.cpp \
    createcloudformationtemplaterequest.cpp \
    createcloudformationtemplateresponse.cpp \
    deleteapplicationrequest.cpp \
    deleteapplicationresponse.cpp \
    getapplicationpolicyrequest.cpp \
    getapplicationpolicyresponse.cpp \
    getapplicationrequest.cpp \
    getapplicationresponse.cpp \
    getcloudformationtemplaterequest.cpp \
    getcloudformationtemplateresponse.cpp \
    listapplicationdependenciesrequest.cpp \
    listapplicationdependenciesresponse.cpp \
    listapplicationsrequest.cpp \
    listapplicationsresponse.cpp \
    listapplicationversionsrequest.cpp \
    listapplicationversionsresponse.cpp \
    putapplicationpolicyrequest.cpp \
    putapplicationpolicyresponse.cpp \
    serverlessapplicationrepositoryclient.cpp \
    serverlessapplicationrepositoryrequest.cpp \
    serverlessapplicationrepositoryresponse.cpp \
    updateapplicationrequest.cpp \
    updateapplicationresponse.cpp \

win32:CONFIG += skip_target_version_ext
