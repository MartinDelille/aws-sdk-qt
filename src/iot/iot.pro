include(../../common.pri)

TARGET = QtAwsIoT
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    acceptcertificatetransferrequest.h \
    acceptcertificatetransferrequest_p.h \
    acceptcertificatetransferresponse.h \
    acceptcertificatetransferresponse_p.h \
    addthingtothinggrouprequest.h \
    addthingtothinggrouprequest_p.h \
    addthingtothinggroupresponse.h \
    addthingtothinggroupresponse_p.h \
    associatetargetswithjobrequest.h \
    associatetargetswithjobrequest_p.h \
    associatetargetswithjobresponse.h \
    associatetargetswithjobresponse_p.h \
    attachpolicyrequest.h \
    attachpolicyrequest_p.h \
    attachpolicyresponse.h \
    attachpolicyresponse_p.h \
    attachprincipalpolicyrequest.h \
    attachprincipalpolicyrequest_p.h \
    attachprincipalpolicyresponse.h \
    attachprincipalpolicyresponse_p.h \
    attachthingprincipalrequest.h \
    attachthingprincipalrequest_p.h \
    attachthingprincipalresponse.h \
    attachthingprincipalresponse_p.h \
    cancelcertificatetransferrequest.h \
    cancelcertificatetransferrequest_p.h \
    cancelcertificatetransferresponse.h \
    cancelcertificatetransferresponse_p.h \
    canceljobexecutionrequest.h \
    canceljobexecutionrequest_p.h \
    canceljobexecutionresponse.h \
    canceljobexecutionresponse_p.h \
    canceljobrequest.h \
    canceljobrequest_p.h \
    canceljobresponse.h \
    canceljobresponse_p.h \
    cleardefaultauthorizerrequest.h \
    cleardefaultauthorizerrequest_p.h \
    cleardefaultauthorizerresponse.h \
    cleardefaultauthorizerresponse_p.h \
    createauthorizerrequest.h \
    createauthorizerrequest_p.h \
    createauthorizerresponse.h \
    createauthorizerresponse_p.h \
    createcertificatefromcsrrequest.h \
    createcertificatefromcsrrequest_p.h \
    createcertificatefromcsrresponse.h \
    createcertificatefromcsrresponse_p.h \
    createjobrequest.h \
    createjobrequest_p.h \
    createjobresponse.h \
    createjobresponse_p.h \
    createkeysandcertificaterequest.h \
    createkeysandcertificaterequest_p.h \
    createkeysandcertificateresponse.h \
    createkeysandcertificateresponse_p.h \
    createotaupdaterequest.h \
    createotaupdaterequest_p.h \
    createotaupdateresponse.h \
    createotaupdateresponse_p.h \
    createpolicyrequest.h \
    createpolicyrequest_p.h \
    createpolicyresponse.h \
    createpolicyresponse_p.h \
    createpolicyversionrequest.h \
    createpolicyversionrequest_p.h \
    createpolicyversionresponse.h \
    createpolicyversionresponse_p.h \
    createrolealiasrequest.h \
    createrolealiasrequest_p.h \
    createrolealiasresponse.h \
    createrolealiasresponse_p.h \
    createstreamrequest.h \
    createstreamrequest_p.h \
    createstreamresponse.h \
    createstreamresponse_p.h \
    createthinggrouprequest.h \
    createthinggrouprequest_p.h \
    createthinggroupresponse.h \
    createthinggroupresponse_p.h \
    createthingrequest.h \
    createthingrequest_p.h \
    createthingresponse.h \
    createthingresponse_p.h \
    createthingtyperequest.h \
    createthingtyperequest_p.h \
    createthingtyperesponse.h \
    createthingtyperesponse_p.h \
    createtopicrulerequest.h \
    createtopicrulerequest_p.h \
    createtopicruleresponse.h \
    createtopicruleresponse_p.h \
    deleteauthorizerrequest.h \
    deleteauthorizerrequest_p.h \
    deleteauthorizerresponse.h \
    deleteauthorizerresponse_p.h \
    deletecacertificaterequest.h \
    deletecacertificaterequest_p.h \
    deletecacertificateresponse.h \
    deletecacertificateresponse_p.h \
    deletecertificaterequest.h \
    deletecertificaterequest_p.h \
    deletecertificateresponse.h \
    deletecertificateresponse_p.h \
    deletejobexecutionrequest.h \
    deletejobexecutionrequest_p.h \
    deletejobexecutionresponse.h \
    deletejobexecutionresponse_p.h \
    deletejobrequest.h \
    deletejobrequest_p.h \
    deletejobresponse.h \
    deletejobresponse_p.h \
    deleteotaupdaterequest.h \
    deleteotaupdaterequest_p.h \
    deleteotaupdateresponse.h \
    deleteotaupdateresponse_p.h \
    deletepolicyrequest.h \
    deletepolicyrequest_p.h \
    deletepolicyresponse.h \
    deletepolicyresponse_p.h \
    deletepolicyversionrequest.h \
    deletepolicyversionrequest_p.h \
    deletepolicyversionresponse.h \
    deletepolicyversionresponse_p.h \
    deleteregistrationcoderequest.h \
    deleteregistrationcoderequest_p.h \
    deleteregistrationcoderesponse.h \
    deleteregistrationcoderesponse_p.h \
    deleterolealiasrequest.h \
    deleterolealiasrequest_p.h \
    deleterolealiasresponse.h \
    deleterolealiasresponse_p.h \
    deletestreamrequest.h \
    deletestreamrequest_p.h \
    deletestreamresponse.h \
    deletestreamresponse_p.h \
    deletethinggrouprequest.h \
    deletethinggrouprequest_p.h \
    deletethinggroupresponse.h \
    deletethinggroupresponse_p.h \
    deletethingrequest.h \
    deletethingrequest_p.h \
    deletethingresponse.h \
    deletethingresponse_p.h \
    deletethingtyperequest.h \
    deletethingtyperequest_p.h \
    deletethingtyperesponse.h \
    deletethingtyperesponse_p.h \
    deletetopicrulerequest.h \
    deletetopicrulerequest_p.h \
    deletetopicruleresponse.h \
    deletetopicruleresponse_p.h \
    deletev2logginglevelrequest.h \
    deletev2logginglevelrequest_p.h \
    deletev2logginglevelresponse.h \
    deletev2logginglevelresponse_p.h \
    deprecatethingtyperequest.h \
    deprecatethingtyperequest_p.h \
    deprecatethingtyperesponse.h \
    deprecatethingtyperesponse_p.h \
    describeauthorizerrequest.h \
    describeauthorizerrequest_p.h \
    describeauthorizerresponse.h \
    describeauthorizerresponse_p.h \
    describecacertificaterequest.h \
    describecacertificaterequest_p.h \
    describecacertificateresponse.h \
    describecacertificateresponse_p.h \
    describecertificaterequest.h \
    describecertificaterequest_p.h \
    describecertificateresponse.h \
    describecertificateresponse_p.h \
    describedefaultauthorizerrequest.h \
    describedefaultauthorizerrequest_p.h \
    describedefaultauthorizerresponse.h \
    describedefaultauthorizerresponse_p.h \
    describeendpointrequest.h \
    describeendpointrequest_p.h \
    describeendpointresponse.h \
    describeendpointresponse_p.h \
    describeeventconfigurationsrequest.h \
    describeeventconfigurationsrequest_p.h \
    describeeventconfigurationsresponse.h \
    describeeventconfigurationsresponse_p.h \
    describeindexrequest.h \
    describeindexrequest_p.h \
    describeindexresponse.h \
    describeindexresponse_p.h \
    describejobexecutionrequest.h \
    describejobexecutionrequest_p.h \
    describejobexecutionresponse.h \
    describejobexecutionresponse_p.h \
    describejobrequest.h \
    describejobrequest_p.h \
    describejobresponse.h \
    describejobresponse_p.h \
    describerolealiasrequest.h \
    describerolealiasrequest_p.h \
    describerolealiasresponse.h \
    describerolealiasresponse_p.h \
    describestreamrequest.h \
    describestreamrequest_p.h \
    describestreamresponse.h \
    describestreamresponse_p.h \
    describethinggrouprequest.h \
    describethinggrouprequest_p.h \
    describethinggroupresponse.h \
    describethinggroupresponse_p.h \
    describethingregistrationtaskrequest.h \
    describethingregistrationtaskrequest_p.h \
    describethingregistrationtaskresponse.h \
    describethingregistrationtaskresponse_p.h \
    describethingrequest.h \
    describethingrequest_p.h \
    describethingresponse.h \
    describethingresponse_p.h \
    describethingtyperequest.h \
    describethingtyperequest_p.h \
    describethingtyperesponse.h \
    describethingtyperesponse_p.h \
    detachpolicyrequest.h \
    detachpolicyrequest_p.h \
    detachpolicyresponse.h \
    detachpolicyresponse_p.h \
    detachprincipalpolicyrequest.h \
    detachprincipalpolicyrequest_p.h \
    detachprincipalpolicyresponse.h \
    detachprincipalpolicyresponse_p.h \
    detachthingprincipalrequest.h \
    detachthingprincipalrequest_p.h \
    detachthingprincipalresponse.h \
    detachthingprincipalresponse_p.h \
    disabletopicrulerequest.h \
    disabletopicrulerequest_p.h \
    disabletopicruleresponse.h \
    disabletopicruleresponse_p.h \
    enabletopicrulerequest.h \
    enabletopicrulerequest_p.h \
    enabletopicruleresponse.h \
    enabletopicruleresponse_p.h \
    geteffectivepoliciesrequest.h \
    geteffectivepoliciesrequest_p.h \
    geteffectivepoliciesresponse.h \
    geteffectivepoliciesresponse_p.h \
    getindexingconfigurationrequest.h \
    getindexingconfigurationrequest_p.h \
    getindexingconfigurationresponse.h \
    getindexingconfigurationresponse_p.h \
    getjobdocumentrequest.h \
    getjobdocumentrequest_p.h \
    getjobdocumentresponse.h \
    getjobdocumentresponse_p.h \
    getloggingoptionsrequest.h \
    getloggingoptionsrequest_p.h \
    getloggingoptionsresponse.h \
    getloggingoptionsresponse_p.h \
    getotaupdaterequest.h \
    getotaupdaterequest_p.h \
    getotaupdateresponse.h \
    getotaupdateresponse_p.h \
    getpolicyrequest.h \
    getpolicyrequest_p.h \
    getpolicyresponse.h \
    getpolicyresponse_p.h \
    getpolicyversionrequest.h \
    getpolicyversionrequest_p.h \
    getpolicyversionresponse.h \
    getpolicyversionresponse_p.h \
    getregistrationcoderequest.h \
    getregistrationcoderequest_p.h \
    getregistrationcoderesponse.h \
    getregistrationcoderesponse_p.h \
    gettopicrulerequest.h \
    gettopicrulerequest_p.h \
    gettopicruleresponse.h \
    gettopicruleresponse_p.h \
    getv2loggingoptionsrequest.h \
    getv2loggingoptionsrequest_p.h \
    getv2loggingoptionsresponse.h \
    getv2loggingoptionsresponse_p.h \
    iotclient.h \
    iotclient_p.h \
    iotrequest.h \
    iotrequest_p.h \
    iotresponse.h \
    iotresponse_p.h \
    listattachedpoliciesrequest.h \
    listattachedpoliciesrequest_p.h \
    listattachedpoliciesresponse.h \
    listattachedpoliciesresponse_p.h \
    listauthorizersrequest.h \
    listauthorizersrequest_p.h \
    listauthorizersresponse.h \
    listauthorizersresponse_p.h \
    listcacertificatesrequest.h \
    listcacertificatesrequest_p.h \
    listcacertificatesresponse.h \
    listcacertificatesresponse_p.h \
    listcertificatesbycarequest.h \
    listcertificatesbycarequest_p.h \
    listcertificatesbycaresponse.h \
    listcertificatesbycaresponse_p.h \
    listcertificatesrequest.h \
    listcertificatesrequest_p.h \
    listcertificatesresponse.h \
    listcertificatesresponse_p.h \
    listindicesrequest.h \
    listindicesrequest_p.h \
    listindicesresponse.h \
    listindicesresponse_p.h \
    listjobexecutionsforjobrequest.h \
    listjobexecutionsforjobrequest_p.h \
    listjobexecutionsforjobresponse.h \
    listjobexecutionsforjobresponse_p.h \
    listjobexecutionsforthingrequest.h \
    listjobexecutionsforthingrequest_p.h \
    listjobexecutionsforthingresponse.h \
    listjobexecutionsforthingresponse_p.h \
    listjobsrequest.h \
    listjobsrequest_p.h \
    listjobsresponse.h \
    listjobsresponse_p.h \
    listotaupdatesrequest.h \
    listotaupdatesrequest_p.h \
    listotaupdatesresponse.h \
    listotaupdatesresponse_p.h \
    listoutgoingcertificatesrequest.h \
    listoutgoingcertificatesrequest_p.h \
    listoutgoingcertificatesresponse.h \
    listoutgoingcertificatesresponse_p.h \
    listpoliciesrequest.h \
    listpoliciesrequest_p.h \
    listpoliciesresponse.h \
    listpoliciesresponse_p.h \
    listpolicyprincipalsrequest.h \
    listpolicyprincipalsrequest_p.h \
    listpolicyprincipalsresponse.h \
    listpolicyprincipalsresponse_p.h \
    listpolicyversionsrequest.h \
    listpolicyversionsrequest_p.h \
    listpolicyversionsresponse.h \
    listpolicyversionsresponse_p.h \
    listprincipalpoliciesrequest.h \
    listprincipalpoliciesrequest_p.h \
    listprincipalpoliciesresponse.h \
    listprincipalpoliciesresponse_p.h \
    listprincipalthingsrequest.h \
    listprincipalthingsrequest_p.h \
    listprincipalthingsresponse.h \
    listprincipalthingsresponse_p.h \
    listrolealiasesrequest.h \
    listrolealiasesrequest_p.h \
    listrolealiasesresponse.h \
    listrolealiasesresponse_p.h \
    liststreamsrequest.h \
    liststreamsrequest_p.h \
    liststreamsresponse.h \
    liststreamsresponse_p.h \
    listtargetsforpolicyrequest.h \
    listtargetsforpolicyrequest_p.h \
    listtargetsforpolicyresponse.h \
    listtargetsforpolicyresponse_p.h \
    listthinggroupsforthingrequest.h \
    listthinggroupsforthingrequest_p.h \
    listthinggroupsforthingresponse.h \
    listthinggroupsforthingresponse_p.h \
    listthinggroupsrequest.h \
    listthinggroupsrequest_p.h \
    listthinggroupsresponse.h \
    listthinggroupsresponse_p.h \
    listthingprincipalsrequest.h \
    listthingprincipalsrequest_p.h \
    listthingprincipalsresponse.h \
    listthingprincipalsresponse_p.h \
    listthingregistrationtaskreportsrequest.h \
    listthingregistrationtaskreportsrequest_p.h \
    listthingregistrationtaskreportsresponse.h \
    listthingregistrationtaskreportsresponse_p.h \
    listthingregistrationtasksrequest.h \
    listthingregistrationtasksrequest_p.h \
    listthingregistrationtasksresponse.h \
    listthingregistrationtasksresponse_p.h \
    listthingsinthinggrouprequest.h \
    listthingsinthinggrouprequest_p.h \
    listthingsinthinggroupresponse.h \
    listthingsinthinggroupresponse_p.h \
    listthingsrequest.h \
    listthingsrequest_p.h \
    listthingsresponse.h \
    listthingsresponse_p.h \
    listthingtypesrequest.h \
    listthingtypesrequest_p.h \
    listthingtypesresponse.h \
    listthingtypesresponse_p.h \
    listtopicrulesrequest.h \
    listtopicrulesrequest_p.h \
    listtopicrulesresponse.h \
    listtopicrulesresponse_p.h \
    listv2logginglevelsrequest.h \
    listv2logginglevelsrequest_p.h \
    listv2logginglevelsresponse.h \
    listv2logginglevelsresponse_p.h \
    registercacertificaterequest.h \
    registercacertificaterequest_p.h \
    registercacertificateresponse.h \
    registercacertificateresponse_p.h \
    registercertificaterequest.h \
    registercertificaterequest_p.h \
    registercertificateresponse.h \
    registercertificateresponse_p.h \
    registerthingrequest.h \
    registerthingrequest_p.h \
    registerthingresponse.h \
    registerthingresponse_p.h \
    rejectcertificatetransferrequest.h \
    rejectcertificatetransferrequest_p.h \
    rejectcertificatetransferresponse.h \
    rejectcertificatetransferresponse_p.h \
    removethingfromthinggrouprequest.h \
    removethingfromthinggrouprequest_p.h \
    removethingfromthinggroupresponse.h \
    removethingfromthinggroupresponse_p.h \
    replacetopicrulerequest.h \
    replacetopicrulerequest_p.h \
    replacetopicruleresponse.h \
    replacetopicruleresponse_p.h \
    searchindexrequest.h \
    searchindexrequest_p.h \
    searchindexresponse.h \
    searchindexresponse_p.h \
    setdefaultauthorizerrequest.h \
    setdefaultauthorizerrequest_p.h \
    setdefaultauthorizerresponse.h \
    setdefaultauthorizerresponse_p.h \
    setdefaultpolicyversionrequest.h \
    setdefaultpolicyversionrequest_p.h \
    setdefaultpolicyversionresponse.h \
    setdefaultpolicyversionresponse_p.h \
    setloggingoptionsrequest.h \
    setloggingoptionsrequest_p.h \
    setloggingoptionsresponse.h \
    setloggingoptionsresponse_p.h \
    setv2logginglevelrequest.h \
    setv2logginglevelrequest_p.h \
    setv2logginglevelresponse.h \
    setv2logginglevelresponse_p.h \
    setv2loggingoptionsrequest.h \
    setv2loggingoptionsrequest_p.h \
    setv2loggingoptionsresponse.h \
    setv2loggingoptionsresponse_p.h \
    startthingregistrationtaskrequest.h \
    startthingregistrationtaskrequest_p.h \
    startthingregistrationtaskresponse.h \
    startthingregistrationtaskresponse_p.h \
    stopthingregistrationtaskrequest.h \
    stopthingregistrationtaskrequest_p.h \
    stopthingregistrationtaskresponse.h \
    stopthingregistrationtaskresponse_p.h \
    testauthorizationrequest.h \
    testauthorizationrequest_p.h \
    testauthorizationresponse.h \
    testauthorizationresponse_p.h \
    testinvokeauthorizerrequest.h \
    testinvokeauthorizerrequest_p.h \
    testinvokeauthorizerresponse.h \
    testinvokeauthorizerresponse_p.h \
    transfercertificaterequest.h \
    transfercertificaterequest_p.h \
    transfercertificateresponse.h \
    transfercertificateresponse_p.h \
    updateauthorizerrequest.h \
    updateauthorizerrequest_p.h \
    updateauthorizerresponse.h \
    updateauthorizerresponse_p.h \
    updatecacertificaterequest.h \
    updatecacertificaterequest_p.h \
    updatecacertificateresponse.h \
    updatecacertificateresponse_p.h \
    updatecertificaterequest.h \
    updatecertificaterequest_p.h \
    updatecertificateresponse.h \
    updatecertificateresponse_p.h \
    updateeventconfigurationsrequest.h \
    updateeventconfigurationsrequest_p.h \
    updateeventconfigurationsresponse.h \
    updateeventconfigurationsresponse_p.h \
    updateindexingconfigurationrequest.h \
    updateindexingconfigurationrequest_p.h \
    updateindexingconfigurationresponse.h \
    updateindexingconfigurationresponse_p.h \
    updaterolealiasrequest.h \
    updaterolealiasrequest_p.h \
    updaterolealiasresponse.h \
    updaterolealiasresponse_p.h \
    updatestreamrequest.h \
    updatestreamrequest_p.h \
    updatestreamresponse.h \
    updatestreamresponse_p.h \
    updatethinggrouprequest.h \
    updatethinggrouprequest_p.h \
    updatethinggroupresponse.h \
    updatethinggroupresponse_p.h \
    updatethinggroupsforthingrequest.h \
    updatethinggroupsforthingrequest_p.h \
    updatethinggroupsforthingresponse.h \
    updatethinggroupsforthingresponse_p.h \
    updatethingrequest.h \
    updatethingrequest_p.h \
    updatethingresponse.h \
    updatethingresponse_p.h \

SOURCES += \
    acceptcertificatetransferrequest.cpp \
    acceptcertificatetransferresponse.cpp \
    addthingtothinggrouprequest.cpp \
    addthingtothinggroupresponse.cpp \
    associatetargetswithjobrequest.cpp \
    associatetargetswithjobresponse.cpp \
    attachpolicyrequest.cpp \
    attachpolicyresponse.cpp \
    attachprincipalpolicyrequest.cpp \
    attachprincipalpolicyresponse.cpp \
    attachthingprincipalrequest.cpp \
    attachthingprincipalresponse.cpp \
    cancelcertificatetransferrequest.cpp \
    cancelcertificatetransferresponse.cpp \
    canceljobexecutionrequest.cpp \
    canceljobexecutionresponse.cpp \
    canceljobrequest.cpp \
    canceljobresponse.cpp \
    cleardefaultauthorizerrequest.cpp \
    cleardefaultauthorizerresponse.cpp \
    createauthorizerrequest.cpp \
    createauthorizerresponse.cpp \
    createcertificatefromcsrrequest.cpp \
    createcertificatefromcsrresponse.cpp \
    createjobrequest.cpp \
    createjobresponse.cpp \
    createkeysandcertificaterequest.cpp \
    createkeysandcertificateresponse.cpp \
    createotaupdaterequest.cpp \
    createotaupdateresponse.cpp \
    createpolicyrequest.cpp \
    createpolicyresponse.cpp \
    createpolicyversionrequest.cpp \
    createpolicyversionresponse.cpp \
    createrolealiasrequest.cpp \
    createrolealiasresponse.cpp \
    createstreamrequest.cpp \
    createstreamresponse.cpp \
    createthinggrouprequest.cpp \
    createthinggroupresponse.cpp \
    createthingrequest.cpp \
    createthingresponse.cpp \
    createthingtyperequest.cpp \
    createthingtyperesponse.cpp \
    createtopicrulerequest.cpp \
    createtopicruleresponse.cpp \
    deleteauthorizerrequest.cpp \
    deleteauthorizerresponse.cpp \
    deletecacertificaterequest.cpp \
    deletecacertificateresponse.cpp \
    deletecertificaterequest.cpp \
    deletecertificateresponse.cpp \
    deletejobexecutionrequest.cpp \
    deletejobexecutionresponse.cpp \
    deletejobrequest.cpp \
    deletejobresponse.cpp \
    deleteotaupdaterequest.cpp \
    deleteotaupdateresponse.cpp \
    deletepolicyrequest.cpp \
    deletepolicyresponse.cpp \
    deletepolicyversionrequest.cpp \
    deletepolicyversionresponse.cpp \
    deleteregistrationcoderequest.cpp \
    deleteregistrationcoderesponse.cpp \
    deleterolealiasrequest.cpp \
    deleterolealiasresponse.cpp \
    deletestreamrequest.cpp \
    deletestreamresponse.cpp \
    deletethinggrouprequest.cpp \
    deletethinggroupresponse.cpp \
    deletethingrequest.cpp \
    deletethingresponse.cpp \
    deletethingtyperequest.cpp \
    deletethingtyperesponse.cpp \
    deletetopicrulerequest.cpp \
    deletetopicruleresponse.cpp \
    deletev2logginglevelrequest.cpp \
    deletev2logginglevelresponse.cpp \
    deprecatethingtyperequest.cpp \
    deprecatethingtyperesponse.cpp \
    describeauthorizerrequest.cpp \
    describeauthorizerresponse.cpp \
    describecacertificaterequest.cpp \
    describecacertificateresponse.cpp \
    describecertificaterequest.cpp \
    describecertificateresponse.cpp \
    describedefaultauthorizerrequest.cpp \
    describedefaultauthorizerresponse.cpp \
    describeendpointrequest.cpp \
    describeendpointresponse.cpp \
    describeeventconfigurationsrequest.cpp \
    describeeventconfigurationsresponse.cpp \
    describeindexrequest.cpp \
    describeindexresponse.cpp \
    describejobexecutionrequest.cpp \
    describejobexecutionresponse.cpp \
    describejobrequest.cpp \
    describejobresponse.cpp \
    describerolealiasrequest.cpp \
    describerolealiasresponse.cpp \
    describestreamrequest.cpp \
    describestreamresponse.cpp \
    describethinggrouprequest.cpp \
    describethinggroupresponse.cpp \
    describethingregistrationtaskrequest.cpp \
    describethingregistrationtaskresponse.cpp \
    describethingrequest.cpp \
    describethingresponse.cpp \
    describethingtyperequest.cpp \
    describethingtyperesponse.cpp \
    detachpolicyrequest.cpp \
    detachpolicyresponse.cpp \
    detachprincipalpolicyrequest.cpp \
    detachprincipalpolicyresponse.cpp \
    detachthingprincipalrequest.cpp \
    detachthingprincipalresponse.cpp \
    disabletopicrulerequest.cpp \
    disabletopicruleresponse.cpp \
    enabletopicrulerequest.cpp \
    enabletopicruleresponse.cpp \
    geteffectivepoliciesrequest.cpp \
    geteffectivepoliciesresponse.cpp \
    getindexingconfigurationrequest.cpp \
    getindexingconfigurationresponse.cpp \
    getjobdocumentrequest.cpp \
    getjobdocumentresponse.cpp \
    getloggingoptionsrequest.cpp \
    getloggingoptionsresponse.cpp \
    getotaupdaterequest.cpp \
    getotaupdateresponse.cpp \
    getpolicyrequest.cpp \
    getpolicyresponse.cpp \
    getpolicyversionrequest.cpp \
    getpolicyversionresponse.cpp \
    getregistrationcoderequest.cpp \
    getregistrationcoderesponse.cpp \
    gettopicrulerequest.cpp \
    gettopicruleresponse.cpp \
    getv2loggingoptionsrequest.cpp \
    getv2loggingoptionsresponse.cpp \
    iotclient.cpp \
    iotrequest.cpp \
    iotresponse.cpp \
    listattachedpoliciesrequest.cpp \
    listattachedpoliciesresponse.cpp \
    listauthorizersrequest.cpp \
    listauthorizersresponse.cpp \
    listcacertificatesrequest.cpp \
    listcacertificatesresponse.cpp \
    listcertificatesbycarequest.cpp \
    listcertificatesbycaresponse.cpp \
    listcertificatesrequest.cpp \
    listcertificatesresponse.cpp \
    listindicesrequest.cpp \
    listindicesresponse.cpp \
    listjobexecutionsforjobrequest.cpp \
    listjobexecutionsforjobresponse.cpp \
    listjobexecutionsforthingrequest.cpp \
    listjobexecutionsforthingresponse.cpp \
    listjobsrequest.cpp \
    listjobsresponse.cpp \
    listotaupdatesrequest.cpp \
    listotaupdatesresponse.cpp \
    listoutgoingcertificatesrequest.cpp \
    listoutgoingcertificatesresponse.cpp \
    listpoliciesrequest.cpp \
    listpoliciesresponse.cpp \
    listpolicyprincipalsrequest.cpp \
    listpolicyprincipalsresponse.cpp \
    listpolicyversionsrequest.cpp \
    listpolicyversionsresponse.cpp \
    listprincipalpoliciesrequest.cpp \
    listprincipalpoliciesresponse.cpp \
    listprincipalthingsrequest.cpp \
    listprincipalthingsresponse.cpp \
    listrolealiasesrequest.cpp \
    listrolealiasesresponse.cpp \
    liststreamsrequest.cpp \
    liststreamsresponse.cpp \
    listtargetsforpolicyrequest.cpp \
    listtargetsforpolicyresponse.cpp \
    listthinggroupsforthingrequest.cpp \
    listthinggroupsforthingresponse.cpp \
    listthinggroupsrequest.cpp \
    listthinggroupsresponse.cpp \
    listthingprincipalsrequest.cpp \
    listthingprincipalsresponse.cpp \
    listthingregistrationtaskreportsrequest.cpp \
    listthingregistrationtaskreportsresponse.cpp \
    listthingregistrationtasksrequest.cpp \
    listthingregistrationtasksresponse.cpp \
    listthingsinthinggrouprequest.cpp \
    listthingsinthinggroupresponse.cpp \
    listthingsrequest.cpp \
    listthingsresponse.cpp \
    listthingtypesrequest.cpp \
    listthingtypesresponse.cpp \
    listtopicrulesrequest.cpp \
    listtopicrulesresponse.cpp \
    listv2logginglevelsrequest.cpp \
    listv2logginglevelsresponse.cpp \
    registercacertificaterequest.cpp \
    registercacertificateresponse.cpp \
    registercertificaterequest.cpp \
    registercertificateresponse.cpp \
    registerthingrequest.cpp \
    registerthingresponse.cpp \
    rejectcertificatetransferrequest.cpp \
    rejectcertificatetransferresponse.cpp \
    removethingfromthinggrouprequest.cpp \
    removethingfromthinggroupresponse.cpp \
    replacetopicrulerequest.cpp \
    replacetopicruleresponse.cpp \
    searchindexrequest.cpp \
    searchindexresponse.cpp \
    setdefaultauthorizerrequest.cpp \
    setdefaultauthorizerresponse.cpp \
    setdefaultpolicyversionrequest.cpp \
    setdefaultpolicyversionresponse.cpp \
    setloggingoptionsrequest.cpp \
    setloggingoptionsresponse.cpp \
    setv2logginglevelrequest.cpp \
    setv2logginglevelresponse.cpp \
    setv2loggingoptionsrequest.cpp \
    setv2loggingoptionsresponse.cpp \
    startthingregistrationtaskrequest.cpp \
    startthingregistrationtaskresponse.cpp \
    stopthingregistrationtaskrequest.cpp \
    stopthingregistrationtaskresponse.cpp \
    testauthorizationrequest.cpp \
    testauthorizationresponse.cpp \
    testinvokeauthorizerrequest.cpp \
    testinvokeauthorizerresponse.cpp \
    transfercertificaterequest.cpp \
    transfercertificateresponse.cpp \
    updateauthorizerrequest.cpp \
    updateauthorizerresponse.cpp \
    updatecacertificaterequest.cpp \
    updatecacertificateresponse.cpp \
    updatecertificaterequest.cpp \
    updatecertificateresponse.cpp \
    updateeventconfigurationsrequest.cpp \
    updateeventconfigurationsresponse.cpp \
    updateindexingconfigurationrequest.cpp \
    updateindexingconfigurationresponse.cpp \
    updaterolealiasrequest.cpp \
    updaterolealiasresponse.cpp \
    updatestreamrequest.cpp \
    updatestreamresponse.cpp \
    updatethinggrouprequest.cpp \
    updatethinggroupresponse.cpp \
    updatethinggroupsforthingrequest.cpp \
    updatethinggroupsforthingresponse.cpp \
    updatethingrequest.cpp \
    updatethingresponse.cpp \

win32:CONFIG += skip_target_version_ext
