include(../../common.pri)

TARGET = appsync
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    appsyncclient.h \
    appsyncclient_p.h \
    appsyncrequest.h \
    appsyncrequest_p.h \
    appsyncresponse.h \
    appsyncresponse_p.h \
    createapikeyrequest.h \
    createapikeyrequest_p.h \
    createapikeyresponse.h \
    createapikeyresponse_p.h \
    createdatasourcerequest.h \
    createdatasourcerequest_p.h \
    createdatasourceresponse.h \
    createdatasourceresponse_p.h \
    creategraphqlapirequest.h \
    creategraphqlapirequest_p.h \
    creategraphqlapiresponse.h \
    creategraphqlapiresponse_p.h \
    createresolverrequest.h \
    createresolverrequest_p.h \
    createresolverresponse.h \
    createresolverresponse_p.h \
    createtyperequest.h \
    createtyperequest_p.h \
    createtyperesponse.h \
    createtyperesponse_p.h \
    deleteapikeyrequest.h \
    deleteapikeyrequest_p.h \
    deleteapikeyresponse.h \
    deleteapikeyresponse_p.h \
    deletedatasourcerequest.h \
    deletedatasourcerequest_p.h \
    deletedatasourceresponse.h \
    deletedatasourceresponse_p.h \
    deletegraphqlapirequest.h \
    deletegraphqlapirequest_p.h \
    deletegraphqlapiresponse.h \
    deletegraphqlapiresponse_p.h \
    deleteresolverrequest.h \
    deleteresolverrequest_p.h \
    deleteresolverresponse.h \
    deleteresolverresponse_p.h \
    deletetyperequest.h \
    deletetyperequest_p.h \
    deletetyperesponse.h \
    deletetyperesponse_p.h \
    getdatasourcerequest.h \
    getdatasourcerequest_p.h \
    getdatasourceresponse.h \
    getdatasourceresponse_p.h \
    getgraphqlapirequest.h \
    getgraphqlapirequest_p.h \
    getgraphqlapiresponse.h \
    getgraphqlapiresponse_p.h \
    getintrospectionschemarequest.h \
    getintrospectionschemarequest_p.h \
    getintrospectionschemaresponse.h \
    getintrospectionschemaresponse_p.h \
    getresolverrequest.h \
    getresolverrequest_p.h \
    getresolverresponse.h \
    getresolverresponse_p.h \
    getschemacreationstatusrequest.h \
    getschemacreationstatusrequest_p.h \
    getschemacreationstatusresponse.h \
    getschemacreationstatusresponse_p.h \
    gettyperequest.h \
    gettyperequest_p.h \
    gettyperesponse.h \
    gettyperesponse_p.h \
    listapikeysrequest.h \
    listapikeysrequest_p.h \
    listapikeysresponse.h \
    listapikeysresponse_p.h \
    listdatasourcesrequest.h \
    listdatasourcesrequest_p.h \
    listdatasourcesresponse.h \
    listdatasourcesresponse_p.h \
    listgraphqlapisrequest.h \
    listgraphqlapisrequest_p.h \
    listgraphqlapisresponse.h \
    listgraphqlapisresponse_p.h \
    listresolversrequest.h \
    listresolversrequest_p.h \
    listresolversresponse.h \
    listresolversresponse_p.h \
    listtypesrequest.h \
    listtypesrequest_p.h \
    listtypesresponse.h \
    listtypesresponse_p.h \
    startschemacreationrequest.h \
    startschemacreationrequest_p.h \
    startschemacreationresponse.h \
    startschemacreationresponse_p.h \
    updateapikeyrequest.h \
    updateapikeyrequest_p.h \
    updateapikeyresponse.h \
    updateapikeyresponse_p.h \
    updatedatasourcerequest.h \
    updatedatasourcerequest_p.h \
    updatedatasourceresponse.h \
    updatedatasourceresponse_p.h \
    updategraphqlapirequest.h \
    updategraphqlapirequest_p.h \
    updategraphqlapiresponse.h \
    updategraphqlapiresponse_p.h \
    updateresolverrequest.h \
    updateresolverrequest_p.h \
    updateresolverresponse.h \
    updateresolverresponse_p.h \
    updatetyperequest.h \
    updatetyperequest_p.h \
    updatetyperesponse.h \
    updatetyperesponse_p.h \

SOURCES += \
    appsyncclient.cpp \
    appsyncrequest.cpp \
    appsyncresponse.cpp \
    createapikeyrequest.cpp \
    createapikeyresponse.cpp \
    createdatasourcerequest.cpp \
    createdatasourceresponse.cpp \
    creategraphqlapirequest.cpp \
    creategraphqlapiresponse.cpp \
    createresolverrequest.cpp \
    createresolverresponse.cpp \
    createtyperequest.cpp \
    createtyperesponse.cpp \
    deleteapikeyrequest.cpp \
    deleteapikeyresponse.cpp \
    deletedatasourcerequest.cpp \
    deletedatasourceresponse.cpp \
    deletegraphqlapirequest.cpp \
    deletegraphqlapiresponse.cpp \
    deleteresolverrequest.cpp \
    deleteresolverresponse.cpp \
    deletetyperequest.cpp \
    deletetyperesponse.cpp \
    getdatasourcerequest.cpp \
    getdatasourceresponse.cpp \
    getgraphqlapirequest.cpp \
    getgraphqlapiresponse.cpp \
    getintrospectionschemarequest.cpp \
    getintrospectionschemaresponse.cpp \
    getresolverrequest.cpp \
    getresolverresponse.cpp \
    getschemacreationstatusrequest.cpp \
    getschemacreationstatusresponse.cpp \
    gettyperequest.cpp \
    gettyperesponse.cpp \
    listapikeysrequest.cpp \
    listapikeysresponse.cpp \
    listdatasourcesrequest.cpp \
    listdatasourcesresponse.cpp \
    listgraphqlapisrequest.cpp \
    listgraphqlapisresponse.cpp \
    listresolversrequest.cpp \
    listresolversresponse.cpp \
    listtypesrequest.cpp \
    listtypesresponse.cpp \
    startschemacreationrequest.cpp \
    startschemacreationresponse.cpp \
    updateapikeyrequest.cpp \
    updateapikeyresponse.cpp \
    updatedatasourcerequest.cpp \
    updatedatasourceresponse.cpp \
    updategraphqlapirequest.cpp \
    updategraphqlapiresponse.cpp \
    updateresolverrequest.cpp \
    updateresolverresponse.cpp \
    updatetyperequest.cpp \
    updatetyperesponse.cpp \

win32:CONFIG += skip_target_version_ext
