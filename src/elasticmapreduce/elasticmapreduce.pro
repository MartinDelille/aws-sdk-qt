include(../../common.pri)

TARGET = elasticmapreduce
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    addinstancefleetrequest.h \
    addinstancefleetrequest_p.h \
    addinstancefleetresponse.h \
    addinstancefleetresponse_p.h \
    addinstancegroupsrequest.h \
    addinstancegroupsrequest_p.h \
    addinstancegroupsresponse.h \
    addinstancegroupsresponse_p.h \
    addjobflowstepsrequest.h \
    addjobflowstepsrequest_p.h \
    addjobflowstepsresponse.h \
    addjobflowstepsresponse_p.h \
    addtagsrequest.h \
    addtagsrequest_p.h \
    addtagsresponse.h \
    addtagsresponse_p.h \
    cancelstepsrequest.h \
    cancelstepsrequest_p.h \
    cancelstepsresponse.h \
    cancelstepsresponse_p.h \
    createsecurityconfigurationrequest.h \
    createsecurityconfigurationrequest_p.h \
    createsecurityconfigurationresponse.h \
    createsecurityconfigurationresponse_p.h \
    deletesecurityconfigurationrequest.h \
    deletesecurityconfigurationrequest_p.h \
    deletesecurityconfigurationresponse.h \
    deletesecurityconfigurationresponse_p.h \
    describeclusterrequest.h \
    describeclusterrequest_p.h \
    describeclusterresponse.h \
    describeclusterresponse_p.h \
    describejobflowsrequest.h \
    describejobflowsrequest_p.h \
    describejobflowsresponse.h \
    describejobflowsresponse_p.h \
    describesecurityconfigurationrequest.h \
    describesecurityconfigurationrequest_p.h \
    describesecurityconfigurationresponse.h \
    describesecurityconfigurationresponse_p.h \
    describesteprequest.h \
    describesteprequest_p.h \
    describestepresponse.h \
    describestepresponse_p.h \
    emrclient.h \
    emrclient_p.h \
    emrrequest.h \
    emrrequest_p.h \
    emrresponse.h \
    emrresponse_p.h \
    listbootstrapactionsrequest.h \
    listbootstrapactionsrequest_p.h \
    listbootstrapactionsresponse.h \
    listbootstrapactionsresponse_p.h \
    listclustersrequest.h \
    listclustersrequest_p.h \
    listclustersresponse.h \
    listclustersresponse_p.h \
    listinstancefleetsrequest.h \
    listinstancefleetsrequest_p.h \
    listinstancefleetsresponse.h \
    listinstancefleetsresponse_p.h \
    listinstancegroupsrequest.h \
    listinstancegroupsrequest_p.h \
    listinstancegroupsresponse.h \
    listinstancegroupsresponse_p.h \
    listinstancesrequest.h \
    listinstancesrequest_p.h \
    listinstancesresponse.h \
    listinstancesresponse_p.h \
    listsecurityconfigurationsrequest.h \
    listsecurityconfigurationsrequest_p.h \
    listsecurityconfigurationsresponse.h \
    listsecurityconfigurationsresponse_p.h \
    liststepsrequest.h \
    liststepsrequest_p.h \
    liststepsresponse.h \
    liststepsresponse_p.h \
    modifyinstancefleetrequest.h \
    modifyinstancefleetrequest_p.h \
    modifyinstancefleetresponse.h \
    modifyinstancefleetresponse_p.h \
    modifyinstancegroupsrequest.h \
    modifyinstancegroupsrequest_p.h \
    modifyinstancegroupsresponse.h \
    modifyinstancegroupsresponse_p.h \
    putautoscalingpolicyrequest.h \
    putautoscalingpolicyrequest_p.h \
    putautoscalingpolicyresponse.h \
    putautoscalingpolicyresponse_p.h \
    removeautoscalingpolicyrequest.h \
    removeautoscalingpolicyrequest_p.h \
    removeautoscalingpolicyresponse.h \
    removeautoscalingpolicyresponse_p.h \
    removetagsrequest.h \
    removetagsrequest_p.h \
    removetagsresponse.h \
    removetagsresponse_p.h \
    runjobflowrequest.h \
    runjobflowrequest_p.h \
    runjobflowresponse.h \
    runjobflowresponse_p.h \
    setterminationprotectionrequest.h \
    setterminationprotectionrequest_p.h \
    setterminationprotectionresponse.h \
    setterminationprotectionresponse_p.h \
    setvisibletoallusersrequest.h \
    setvisibletoallusersrequest_p.h \
    setvisibletoallusersresponse.h \
    setvisibletoallusersresponse_p.h \
    terminatejobflowsrequest.h \
    terminatejobflowsrequest_p.h \
    terminatejobflowsresponse.h \
    terminatejobflowsresponse_p.h \

SOURCES += \
    addinstancefleetrequest.cpp \
    addinstancefleetresponse.cpp \
    addinstancegroupsrequest.cpp \
    addinstancegroupsresponse.cpp \
    addjobflowstepsrequest.cpp \
    addjobflowstepsresponse.cpp \
    addtagsrequest.cpp \
    addtagsresponse.cpp \
    cancelstepsrequest.cpp \
    cancelstepsresponse.cpp \
    createsecurityconfigurationrequest.cpp \
    createsecurityconfigurationresponse.cpp \
    deletesecurityconfigurationrequest.cpp \
    deletesecurityconfigurationresponse.cpp \
    describeclusterrequest.cpp \
    describeclusterresponse.cpp \
    describejobflowsrequest.cpp \
    describejobflowsresponse.cpp \
    describesecurityconfigurationrequest.cpp \
    describesecurityconfigurationresponse.cpp \
    describesteprequest.cpp \
    describestepresponse.cpp \
    emrclient.cpp \
    emrrequest.cpp \
    emrresponse.cpp \
    listbootstrapactionsrequest.cpp \
    listbootstrapactionsresponse.cpp \
    listclustersrequest.cpp \
    listclustersresponse.cpp \
    listinstancefleetsrequest.cpp \
    listinstancefleetsresponse.cpp \
    listinstancegroupsrequest.cpp \
    listinstancegroupsresponse.cpp \
    listinstancesrequest.cpp \
    listinstancesresponse.cpp \
    listsecurityconfigurationsrequest.cpp \
    listsecurityconfigurationsresponse.cpp \
    liststepsrequest.cpp \
    liststepsresponse.cpp \
    modifyinstancefleetrequest.cpp \
    modifyinstancefleetresponse.cpp \
    modifyinstancegroupsrequest.cpp \
    modifyinstancegroupsresponse.cpp \
    putautoscalingpolicyrequest.cpp \
    putautoscalingpolicyresponse.cpp \
    removeautoscalingpolicyrequest.cpp \
    removeautoscalingpolicyresponse.cpp \
    removetagsrequest.cpp \
    removetagsresponse.cpp \
    runjobflowrequest.cpp \
    runjobflowresponse.cpp \
    setterminationprotectionrequest.cpp \
    setterminationprotectionresponse.cpp \
    setvisibletoallusersrequest.cpp \
    setvisibletoallusersresponse.cpp \
    terminatejobflowsrequest.cpp \
    terminatejobflowsresponse.cpp \

win32:CONFIG += skip_target_version_ext
