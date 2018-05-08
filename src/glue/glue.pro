include(../../common.pri)

TARGET = QtAwsGlue
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    batchcreatepartitionrequest.h \
    batchcreatepartitionrequest_p.h \
    batchcreatepartitionresponse.h \
    batchcreatepartitionresponse_p.h \
    batchdeleteconnectionrequest.h \
    batchdeleteconnectionrequest_p.h \
    batchdeleteconnectionresponse.h \
    batchdeleteconnectionresponse_p.h \
    batchdeletepartitionrequest.h \
    batchdeletepartitionrequest_p.h \
    batchdeletepartitionresponse.h \
    batchdeletepartitionresponse_p.h \
    batchdeletetablerequest.h \
    batchdeletetablerequest_p.h \
    batchdeletetableresponse.h \
    batchdeletetableresponse_p.h \
    batchdeletetableversionrequest.h \
    batchdeletetableversionrequest_p.h \
    batchdeletetableversionresponse.h \
    batchdeletetableversionresponse_p.h \
    batchgetpartitionrequest.h \
    batchgetpartitionrequest_p.h \
    batchgetpartitionresponse.h \
    batchgetpartitionresponse_p.h \
    batchstopjobrunrequest.h \
    batchstopjobrunrequest_p.h \
    batchstopjobrunresponse.h \
    batchstopjobrunresponse_p.h \
    createclassifierrequest.h \
    createclassifierrequest_p.h \
    createclassifierresponse.h \
    createclassifierresponse_p.h \
    createconnectionrequest.h \
    createconnectionrequest_p.h \
    createconnectionresponse.h \
    createconnectionresponse_p.h \
    createcrawlerrequest.h \
    createcrawlerrequest_p.h \
    createcrawlerresponse.h \
    createcrawlerresponse_p.h \
    createdatabaserequest.h \
    createdatabaserequest_p.h \
    createdatabaseresponse.h \
    createdatabaseresponse_p.h \
    createdevendpointrequest.h \
    createdevendpointrequest_p.h \
    createdevendpointresponse.h \
    createdevendpointresponse_p.h \
    createjobrequest.h \
    createjobrequest_p.h \
    createjobresponse.h \
    createjobresponse_p.h \
    createpartitionrequest.h \
    createpartitionrequest_p.h \
    createpartitionresponse.h \
    createpartitionresponse_p.h \
    createscriptrequest.h \
    createscriptrequest_p.h \
    createscriptresponse.h \
    createscriptresponse_p.h \
    createtablerequest.h \
    createtablerequest_p.h \
    createtableresponse.h \
    createtableresponse_p.h \
    createtriggerrequest.h \
    createtriggerrequest_p.h \
    createtriggerresponse.h \
    createtriggerresponse_p.h \
    createuserdefinedfunctionrequest.h \
    createuserdefinedfunctionrequest_p.h \
    createuserdefinedfunctionresponse.h \
    createuserdefinedfunctionresponse_p.h \
    deleteclassifierrequest.h \
    deleteclassifierrequest_p.h \
    deleteclassifierresponse.h \
    deleteclassifierresponse_p.h \
    deleteconnectionrequest.h \
    deleteconnectionrequest_p.h \
    deleteconnectionresponse.h \
    deleteconnectionresponse_p.h \
    deletecrawlerrequest.h \
    deletecrawlerrequest_p.h \
    deletecrawlerresponse.h \
    deletecrawlerresponse_p.h \
    deletedatabaserequest.h \
    deletedatabaserequest_p.h \
    deletedatabaseresponse.h \
    deletedatabaseresponse_p.h \
    deletedevendpointrequest.h \
    deletedevendpointrequest_p.h \
    deletedevendpointresponse.h \
    deletedevendpointresponse_p.h \
    deletejobrequest.h \
    deletejobrequest_p.h \
    deletejobresponse.h \
    deletejobresponse_p.h \
    deletepartitionrequest.h \
    deletepartitionrequest_p.h \
    deletepartitionresponse.h \
    deletepartitionresponse_p.h \
    deletetablerequest.h \
    deletetablerequest_p.h \
    deletetableresponse.h \
    deletetableresponse_p.h \
    deletetableversionrequest.h \
    deletetableversionrequest_p.h \
    deletetableversionresponse.h \
    deletetableversionresponse_p.h \
    deletetriggerrequest.h \
    deletetriggerrequest_p.h \
    deletetriggerresponse.h \
    deletetriggerresponse_p.h \
    deleteuserdefinedfunctionrequest.h \
    deleteuserdefinedfunctionrequest_p.h \
    deleteuserdefinedfunctionresponse.h \
    deleteuserdefinedfunctionresponse_p.h \
    getcatalogimportstatusrequest.h \
    getcatalogimportstatusrequest_p.h \
    getcatalogimportstatusresponse.h \
    getcatalogimportstatusresponse_p.h \
    getclassifierrequest.h \
    getclassifierrequest_p.h \
    getclassifierresponse.h \
    getclassifierresponse_p.h \
    getclassifiersrequest.h \
    getclassifiersrequest_p.h \
    getclassifiersresponse.h \
    getclassifiersresponse_p.h \
    getconnectionrequest.h \
    getconnectionrequest_p.h \
    getconnectionresponse.h \
    getconnectionresponse_p.h \
    getconnectionsrequest.h \
    getconnectionsrequest_p.h \
    getconnectionsresponse.h \
    getconnectionsresponse_p.h \
    getcrawlermetricsrequest.h \
    getcrawlermetricsrequest_p.h \
    getcrawlermetricsresponse.h \
    getcrawlermetricsresponse_p.h \
    getcrawlerrequest.h \
    getcrawlerrequest_p.h \
    getcrawlerresponse.h \
    getcrawlerresponse_p.h \
    getcrawlersrequest.h \
    getcrawlersrequest_p.h \
    getcrawlersresponse.h \
    getcrawlersresponse_p.h \
    getdatabaserequest.h \
    getdatabaserequest_p.h \
    getdatabaseresponse.h \
    getdatabaseresponse_p.h \
    getdatabasesrequest.h \
    getdatabasesrequest_p.h \
    getdatabasesresponse.h \
    getdatabasesresponse_p.h \
    getdataflowgraphrequest.h \
    getdataflowgraphrequest_p.h \
    getdataflowgraphresponse.h \
    getdataflowgraphresponse_p.h \
    getdevendpointrequest.h \
    getdevendpointrequest_p.h \
    getdevendpointresponse.h \
    getdevendpointresponse_p.h \
    getdevendpointsrequest.h \
    getdevendpointsrequest_p.h \
    getdevendpointsresponse.h \
    getdevendpointsresponse_p.h \
    getjobrequest.h \
    getjobrequest_p.h \
    getjobresponse.h \
    getjobresponse_p.h \
    getjobrunrequest.h \
    getjobrunrequest_p.h \
    getjobrunresponse.h \
    getjobrunresponse_p.h \
    getjobrunsrequest.h \
    getjobrunsrequest_p.h \
    getjobrunsresponse.h \
    getjobrunsresponse_p.h \
    getjobsrequest.h \
    getjobsrequest_p.h \
    getjobsresponse.h \
    getjobsresponse_p.h \
    getmappingrequest.h \
    getmappingrequest_p.h \
    getmappingresponse.h \
    getmappingresponse_p.h \
    getpartitionrequest.h \
    getpartitionrequest_p.h \
    getpartitionresponse.h \
    getpartitionresponse_p.h \
    getpartitionsrequest.h \
    getpartitionsrequest_p.h \
    getpartitionsresponse.h \
    getpartitionsresponse_p.h \
    getplanrequest.h \
    getplanrequest_p.h \
    getplanresponse.h \
    getplanresponse_p.h \
    gettablerequest.h \
    gettablerequest_p.h \
    gettableresponse.h \
    gettableresponse_p.h \
    gettablesrequest.h \
    gettablesrequest_p.h \
    gettablesresponse.h \
    gettablesresponse_p.h \
    gettableversionrequest.h \
    gettableversionrequest_p.h \
    gettableversionresponse.h \
    gettableversionresponse_p.h \
    gettableversionsrequest.h \
    gettableversionsrequest_p.h \
    gettableversionsresponse.h \
    gettableversionsresponse_p.h \
    gettriggerrequest.h \
    gettriggerrequest_p.h \
    gettriggerresponse.h \
    gettriggerresponse_p.h \
    gettriggersrequest.h \
    gettriggersrequest_p.h \
    gettriggersresponse.h \
    gettriggersresponse_p.h \
    getuserdefinedfunctionrequest.h \
    getuserdefinedfunctionrequest_p.h \
    getuserdefinedfunctionresponse.h \
    getuserdefinedfunctionresponse_p.h \
    getuserdefinedfunctionsrequest.h \
    getuserdefinedfunctionsrequest_p.h \
    getuserdefinedfunctionsresponse.h \
    getuserdefinedfunctionsresponse_p.h \
    glueclient.h \
    glueclient_p.h \
    gluerequest.h \
    gluerequest_p.h \
    glueresponse.h \
    glueresponse_p.h \
    importcatalogtogluerequest.h \
    importcatalogtogluerequest_p.h \
    importcatalogtoglueresponse.h \
    importcatalogtoglueresponse_p.h \
    resetjobbookmarkrequest.h \
    resetjobbookmarkrequest_p.h \
    resetjobbookmarkresponse.h \
    resetjobbookmarkresponse_p.h \
    startcrawlerrequest.h \
    startcrawlerrequest_p.h \
    startcrawlerresponse.h \
    startcrawlerresponse_p.h \
    startcrawlerschedulerequest.h \
    startcrawlerschedulerequest_p.h \
    startcrawlerscheduleresponse.h \
    startcrawlerscheduleresponse_p.h \
    startjobrunrequest.h \
    startjobrunrequest_p.h \
    startjobrunresponse.h \
    startjobrunresponse_p.h \
    starttriggerrequest.h \
    starttriggerrequest_p.h \
    starttriggerresponse.h \
    starttriggerresponse_p.h \
    stopcrawlerrequest.h \
    stopcrawlerrequest_p.h \
    stopcrawlerresponse.h \
    stopcrawlerresponse_p.h \
    stopcrawlerschedulerequest.h \
    stopcrawlerschedulerequest_p.h \
    stopcrawlerscheduleresponse.h \
    stopcrawlerscheduleresponse_p.h \
    stoptriggerrequest.h \
    stoptriggerrequest_p.h \
    stoptriggerresponse.h \
    stoptriggerresponse_p.h \
    updateclassifierrequest.h \
    updateclassifierrequest_p.h \
    updateclassifierresponse.h \
    updateclassifierresponse_p.h \
    updateconnectionrequest.h \
    updateconnectionrequest_p.h \
    updateconnectionresponse.h \
    updateconnectionresponse_p.h \
    updatecrawlerrequest.h \
    updatecrawlerrequest_p.h \
    updatecrawlerresponse.h \
    updatecrawlerresponse_p.h \
    updatecrawlerschedulerequest.h \
    updatecrawlerschedulerequest_p.h \
    updatecrawlerscheduleresponse.h \
    updatecrawlerscheduleresponse_p.h \
    updatedatabaserequest.h \
    updatedatabaserequest_p.h \
    updatedatabaseresponse.h \
    updatedatabaseresponse_p.h \
    updatedevendpointrequest.h \
    updatedevendpointrequest_p.h \
    updatedevendpointresponse.h \
    updatedevendpointresponse_p.h \
    updatejobrequest.h \
    updatejobrequest_p.h \
    updatejobresponse.h \
    updatejobresponse_p.h \
    updatepartitionrequest.h \
    updatepartitionrequest_p.h \
    updatepartitionresponse.h \
    updatepartitionresponse_p.h \
    updatetablerequest.h \
    updatetablerequest_p.h \
    updatetableresponse.h \
    updatetableresponse_p.h \
    updatetriggerrequest.h \
    updatetriggerrequest_p.h \
    updatetriggerresponse.h \
    updatetriggerresponse_p.h \
    updateuserdefinedfunctionrequest.h \
    updateuserdefinedfunctionrequest_p.h \
    updateuserdefinedfunctionresponse.h \
    updateuserdefinedfunctionresponse_p.h \

SOURCES += \
    batchcreatepartitionrequest.cpp \
    batchcreatepartitionresponse.cpp \
    batchdeleteconnectionrequest.cpp \
    batchdeleteconnectionresponse.cpp \
    batchdeletepartitionrequest.cpp \
    batchdeletepartitionresponse.cpp \
    batchdeletetablerequest.cpp \
    batchdeletetableresponse.cpp \
    batchdeletetableversionrequest.cpp \
    batchdeletetableversionresponse.cpp \
    batchgetpartitionrequest.cpp \
    batchgetpartitionresponse.cpp \
    batchstopjobrunrequest.cpp \
    batchstopjobrunresponse.cpp \
    createclassifierrequest.cpp \
    createclassifierresponse.cpp \
    createconnectionrequest.cpp \
    createconnectionresponse.cpp \
    createcrawlerrequest.cpp \
    createcrawlerresponse.cpp \
    createdatabaserequest.cpp \
    createdatabaseresponse.cpp \
    createdevendpointrequest.cpp \
    createdevendpointresponse.cpp \
    createjobrequest.cpp \
    createjobresponse.cpp \
    createpartitionrequest.cpp \
    createpartitionresponse.cpp \
    createscriptrequest.cpp \
    createscriptresponse.cpp \
    createtablerequest.cpp \
    createtableresponse.cpp \
    createtriggerrequest.cpp \
    createtriggerresponse.cpp \
    createuserdefinedfunctionrequest.cpp \
    createuserdefinedfunctionresponse.cpp \
    deleteclassifierrequest.cpp \
    deleteclassifierresponse.cpp \
    deleteconnectionrequest.cpp \
    deleteconnectionresponse.cpp \
    deletecrawlerrequest.cpp \
    deletecrawlerresponse.cpp \
    deletedatabaserequest.cpp \
    deletedatabaseresponse.cpp \
    deletedevendpointrequest.cpp \
    deletedevendpointresponse.cpp \
    deletejobrequest.cpp \
    deletejobresponse.cpp \
    deletepartitionrequest.cpp \
    deletepartitionresponse.cpp \
    deletetablerequest.cpp \
    deletetableresponse.cpp \
    deletetableversionrequest.cpp \
    deletetableversionresponse.cpp \
    deletetriggerrequest.cpp \
    deletetriggerresponse.cpp \
    deleteuserdefinedfunctionrequest.cpp \
    deleteuserdefinedfunctionresponse.cpp \
    getcatalogimportstatusrequest.cpp \
    getcatalogimportstatusresponse.cpp \
    getclassifierrequest.cpp \
    getclassifierresponse.cpp \
    getclassifiersrequest.cpp \
    getclassifiersresponse.cpp \
    getconnectionrequest.cpp \
    getconnectionresponse.cpp \
    getconnectionsrequest.cpp \
    getconnectionsresponse.cpp \
    getcrawlermetricsrequest.cpp \
    getcrawlermetricsresponse.cpp \
    getcrawlerrequest.cpp \
    getcrawlerresponse.cpp \
    getcrawlersrequest.cpp \
    getcrawlersresponse.cpp \
    getdatabaserequest.cpp \
    getdatabaseresponse.cpp \
    getdatabasesrequest.cpp \
    getdatabasesresponse.cpp \
    getdataflowgraphrequest.cpp \
    getdataflowgraphresponse.cpp \
    getdevendpointrequest.cpp \
    getdevendpointresponse.cpp \
    getdevendpointsrequest.cpp \
    getdevendpointsresponse.cpp \
    getjobrequest.cpp \
    getjobresponse.cpp \
    getjobrunrequest.cpp \
    getjobrunresponse.cpp \
    getjobrunsrequest.cpp \
    getjobrunsresponse.cpp \
    getjobsrequest.cpp \
    getjobsresponse.cpp \
    getmappingrequest.cpp \
    getmappingresponse.cpp \
    getpartitionrequest.cpp \
    getpartitionresponse.cpp \
    getpartitionsrequest.cpp \
    getpartitionsresponse.cpp \
    getplanrequest.cpp \
    getplanresponse.cpp \
    gettablerequest.cpp \
    gettableresponse.cpp \
    gettablesrequest.cpp \
    gettablesresponse.cpp \
    gettableversionrequest.cpp \
    gettableversionresponse.cpp \
    gettableversionsrequest.cpp \
    gettableversionsresponse.cpp \
    gettriggerrequest.cpp \
    gettriggerresponse.cpp \
    gettriggersrequest.cpp \
    gettriggersresponse.cpp \
    getuserdefinedfunctionrequest.cpp \
    getuserdefinedfunctionresponse.cpp \
    getuserdefinedfunctionsrequest.cpp \
    getuserdefinedfunctionsresponse.cpp \
    glueclient.cpp \
    gluerequest.cpp \
    glueresponse.cpp \
    importcatalogtogluerequest.cpp \
    importcatalogtoglueresponse.cpp \
    resetjobbookmarkrequest.cpp \
    resetjobbookmarkresponse.cpp \
    startcrawlerrequest.cpp \
    startcrawlerresponse.cpp \
    startcrawlerschedulerequest.cpp \
    startcrawlerscheduleresponse.cpp \
    startjobrunrequest.cpp \
    startjobrunresponse.cpp \
    starttriggerrequest.cpp \
    starttriggerresponse.cpp \
    stopcrawlerrequest.cpp \
    stopcrawlerresponse.cpp \
    stopcrawlerschedulerequest.cpp \
    stopcrawlerscheduleresponse.cpp \
    stoptriggerrequest.cpp \
    stoptriggerresponse.cpp \
    updateclassifierrequest.cpp \
    updateclassifierresponse.cpp \
    updateconnectionrequest.cpp \
    updateconnectionresponse.cpp \
    updatecrawlerrequest.cpp \
    updatecrawlerresponse.cpp \
    updatecrawlerschedulerequest.cpp \
    updatecrawlerscheduleresponse.cpp \
    updatedatabaserequest.cpp \
    updatedatabaseresponse.cpp \
    updatedevendpointrequest.cpp \
    updatedevendpointresponse.cpp \
    updatejobrequest.cpp \
    updatejobresponse.cpp \
    updatepartitionrequest.cpp \
    updatepartitionresponse.cpp \
    updatetablerequest.cpp \
    updatetableresponse.cpp \
    updatetriggerrequest.cpp \
    updatetriggerresponse.cpp \
    updateuserdefinedfunctionrequest.cpp \
    updateuserdefinedfunctionresponse.cpp \

win32:CONFIG += skip_target_version_ext