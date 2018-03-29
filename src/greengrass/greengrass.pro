include(../../common.pri)

TARGET = greengrass
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    associateroletogrouprequest.h \
    associateroletogrouprequest_p.h \
    associateroletogroupresponse.h \
    associateroletogroupresponse_p.h \
    associateserviceroletoaccountrequest.h \
    associateserviceroletoaccountrequest_p.h \
    associateserviceroletoaccountresponse.h \
    associateserviceroletoaccountresponse_p.h \
    createcoredefinitionrequest.h \
    createcoredefinitionrequest_p.h \
    createcoredefinitionresponse.h \
    createcoredefinitionresponse_p.h \
    createcoredefinitionversionrequest.h \
    createcoredefinitionversionrequest_p.h \
    createcoredefinitionversionresponse.h \
    createcoredefinitionversionresponse_p.h \
    createdeploymentrequest.h \
    createdeploymentrequest_p.h \
    createdeploymentresponse.h \
    createdeploymentresponse_p.h \
    createdevicedefinitionrequest.h \
    createdevicedefinitionrequest_p.h \
    createdevicedefinitionresponse.h \
    createdevicedefinitionresponse_p.h \
    createdevicedefinitionversionrequest.h \
    createdevicedefinitionversionrequest_p.h \
    createdevicedefinitionversionresponse.h \
    createdevicedefinitionversionresponse_p.h \
    createfunctiondefinitionrequest.h \
    createfunctiondefinitionrequest_p.h \
    createfunctiondefinitionresponse.h \
    createfunctiondefinitionresponse_p.h \
    createfunctiondefinitionversionrequest.h \
    createfunctiondefinitionversionrequest_p.h \
    createfunctiondefinitionversionresponse.h \
    createfunctiondefinitionversionresponse_p.h \
    creategroupcertificateauthorityrequest.h \
    creategroupcertificateauthorityrequest_p.h \
    creategroupcertificateauthorityresponse.h \
    creategroupcertificateauthorityresponse_p.h \
    creategrouprequest.h \
    creategrouprequest_p.h \
    creategroupresponse.h \
    creategroupresponse_p.h \
    creategroupversionrequest.h \
    creategroupversionrequest_p.h \
    creategroupversionresponse.h \
    creategroupversionresponse_p.h \
    createloggerdefinitionrequest.h \
    createloggerdefinitionrequest_p.h \
    createloggerdefinitionresponse.h \
    createloggerdefinitionresponse_p.h \
    createloggerdefinitionversionrequest.h \
    createloggerdefinitionversionrequest_p.h \
    createloggerdefinitionversionresponse.h \
    createloggerdefinitionversionresponse_p.h \
    createresourcedefinitionrequest.h \
    createresourcedefinitionrequest_p.h \
    createresourcedefinitionresponse.h \
    createresourcedefinitionresponse_p.h \
    createresourcedefinitionversionrequest.h \
    createresourcedefinitionversionrequest_p.h \
    createresourcedefinitionversionresponse.h \
    createresourcedefinitionversionresponse_p.h \
    createsoftwareupdatejobrequest.h \
    createsoftwareupdatejobrequest_p.h \
    createsoftwareupdatejobresponse.h \
    createsoftwareupdatejobresponse_p.h \
    createsubscriptiondefinitionrequest.h \
    createsubscriptiondefinitionrequest_p.h \
    createsubscriptiondefinitionresponse.h \
    createsubscriptiondefinitionresponse_p.h \
    createsubscriptiondefinitionversionrequest.h \
    createsubscriptiondefinitionversionrequest_p.h \
    createsubscriptiondefinitionversionresponse.h \
    createsubscriptiondefinitionversionresponse_p.h \
    deletecoredefinitionrequest.h \
    deletecoredefinitionrequest_p.h \
    deletecoredefinitionresponse.h \
    deletecoredefinitionresponse_p.h \
    deletedevicedefinitionrequest.h \
    deletedevicedefinitionrequest_p.h \
    deletedevicedefinitionresponse.h \
    deletedevicedefinitionresponse_p.h \
    deletefunctiondefinitionrequest.h \
    deletefunctiondefinitionrequest_p.h \
    deletefunctiondefinitionresponse.h \
    deletefunctiondefinitionresponse_p.h \
    deletegrouprequest.h \
    deletegrouprequest_p.h \
    deletegroupresponse.h \
    deletegroupresponse_p.h \
    deleteloggerdefinitionrequest.h \
    deleteloggerdefinitionrequest_p.h \
    deleteloggerdefinitionresponse.h \
    deleteloggerdefinitionresponse_p.h \
    deleteresourcedefinitionrequest.h \
    deleteresourcedefinitionrequest_p.h \
    deleteresourcedefinitionresponse.h \
    deleteresourcedefinitionresponse_p.h \
    deletesubscriptiondefinitionrequest.h \
    deletesubscriptiondefinitionrequest_p.h \
    deletesubscriptiondefinitionresponse.h \
    deletesubscriptiondefinitionresponse_p.h \
    disassociaterolefromgrouprequest.h \
    disassociaterolefromgrouprequest_p.h \
    disassociaterolefromgroupresponse.h \
    disassociaterolefromgroupresponse_p.h \
    disassociateservicerolefromaccountrequest.h \
    disassociateservicerolefromaccountrequest_p.h \
    disassociateservicerolefromaccountresponse.h \
    disassociateservicerolefromaccountresponse_p.h \
    getassociatedrolerequest.h \
    getassociatedrolerequest_p.h \
    getassociatedroleresponse.h \
    getassociatedroleresponse_p.h \
    getconnectivityinforequest.h \
    getconnectivityinforequest_p.h \
    getconnectivityinforesponse.h \
    getconnectivityinforesponse_p.h \
    getcoredefinitionrequest.h \
    getcoredefinitionrequest_p.h \
    getcoredefinitionresponse.h \
    getcoredefinitionresponse_p.h \
    getcoredefinitionversionrequest.h \
    getcoredefinitionversionrequest_p.h \
    getcoredefinitionversionresponse.h \
    getcoredefinitionversionresponse_p.h \
    getdeploymentstatusrequest.h \
    getdeploymentstatusrequest_p.h \
    getdeploymentstatusresponse.h \
    getdeploymentstatusresponse_p.h \
    getdevicedefinitionrequest.h \
    getdevicedefinitionrequest_p.h \
    getdevicedefinitionresponse.h \
    getdevicedefinitionresponse_p.h \
    getdevicedefinitionversionrequest.h \
    getdevicedefinitionversionrequest_p.h \
    getdevicedefinitionversionresponse.h \
    getdevicedefinitionversionresponse_p.h \
    getfunctiondefinitionrequest.h \
    getfunctiondefinitionrequest_p.h \
    getfunctiondefinitionresponse.h \
    getfunctiondefinitionresponse_p.h \
    getfunctiondefinitionversionrequest.h \
    getfunctiondefinitionversionrequest_p.h \
    getfunctiondefinitionversionresponse.h \
    getfunctiondefinitionversionresponse_p.h \
    getgroupcertificateauthorityrequest.h \
    getgroupcertificateauthorityrequest_p.h \
    getgroupcertificateauthorityresponse.h \
    getgroupcertificateauthorityresponse_p.h \
    getgroupcertificateconfigurationrequest.h \
    getgroupcertificateconfigurationrequest_p.h \
    getgroupcertificateconfigurationresponse.h \
    getgroupcertificateconfigurationresponse_p.h \
    getgrouprequest.h \
    getgrouprequest_p.h \
    getgroupresponse.h \
    getgroupresponse_p.h \
    getgroupversionrequest.h \
    getgroupversionrequest_p.h \
    getgroupversionresponse.h \
    getgroupversionresponse_p.h \
    getloggerdefinitionrequest.h \
    getloggerdefinitionrequest_p.h \
    getloggerdefinitionresponse.h \
    getloggerdefinitionresponse_p.h \
    getloggerdefinitionversionrequest.h \
    getloggerdefinitionversionrequest_p.h \
    getloggerdefinitionversionresponse.h \
    getloggerdefinitionversionresponse_p.h \
    getresourcedefinitionrequest.h \
    getresourcedefinitionrequest_p.h \
    getresourcedefinitionresponse.h \
    getresourcedefinitionresponse_p.h \
    getresourcedefinitionversionrequest.h \
    getresourcedefinitionversionrequest_p.h \
    getresourcedefinitionversionresponse.h \
    getresourcedefinitionversionresponse_p.h \
    getserviceroleforaccountrequest.h \
    getserviceroleforaccountrequest_p.h \
    getserviceroleforaccountresponse.h \
    getserviceroleforaccountresponse_p.h \
    getsubscriptiondefinitionrequest.h \
    getsubscriptiondefinitionrequest_p.h \
    getsubscriptiondefinitionresponse.h \
    getsubscriptiondefinitionresponse_p.h \
    getsubscriptiondefinitionversionrequest.h \
    getsubscriptiondefinitionversionrequest_p.h \
    getsubscriptiondefinitionversionresponse.h \
    getsubscriptiondefinitionversionresponse_p.h \
    greengrassclient.h \
    greengrassclient_p.h \
    greengrassrequest.h \
    greengrassrequest_p.h \
    greengrassresponse.h \
    greengrassresponse_p.h \
    listcoredefinitionsrequest.h \
    listcoredefinitionsrequest_p.h \
    listcoredefinitionsresponse.h \
    listcoredefinitionsresponse_p.h \
    listcoredefinitionversionsrequest.h \
    listcoredefinitionversionsrequest_p.h \
    listcoredefinitionversionsresponse.h \
    listcoredefinitionversionsresponse_p.h \
    listdeploymentsrequest.h \
    listdeploymentsrequest_p.h \
    listdeploymentsresponse.h \
    listdeploymentsresponse_p.h \
    listdevicedefinitionsrequest.h \
    listdevicedefinitionsrequest_p.h \
    listdevicedefinitionsresponse.h \
    listdevicedefinitionsresponse_p.h \
    listdevicedefinitionversionsrequest.h \
    listdevicedefinitionversionsrequest_p.h \
    listdevicedefinitionversionsresponse.h \
    listdevicedefinitionversionsresponse_p.h \
    listfunctiondefinitionsrequest.h \
    listfunctiondefinitionsrequest_p.h \
    listfunctiondefinitionsresponse.h \
    listfunctiondefinitionsresponse_p.h \
    listfunctiondefinitionversionsrequest.h \
    listfunctiondefinitionversionsrequest_p.h \
    listfunctiondefinitionversionsresponse.h \
    listfunctiondefinitionversionsresponse_p.h \
    listgroupcertificateauthoritiesrequest.h \
    listgroupcertificateauthoritiesrequest_p.h \
    listgroupcertificateauthoritiesresponse.h \
    listgroupcertificateauthoritiesresponse_p.h \
    listgroupsrequest.h \
    listgroupsrequest_p.h \
    listgroupsresponse.h \
    listgroupsresponse_p.h \
    listgroupversionsrequest.h \
    listgroupversionsrequest_p.h \
    listgroupversionsresponse.h \
    listgroupversionsresponse_p.h \
    listloggerdefinitionsrequest.h \
    listloggerdefinitionsrequest_p.h \
    listloggerdefinitionsresponse.h \
    listloggerdefinitionsresponse_p.h \
    listloggerdefinitionversionsrequest.h \
    listloggerdefinitionversionsrequest_p.h \
    listloggerdefinitionversionsresponse.h \
    listloggerdefinitionversionsresponse_p.h \
    listresourcedefinitionsrequest.h \
    listresourcedefinitionsrequest_p.h \
    listresourcedefinitionsresponse.h \
    listresourcedefinitionsresponse_p.h \
    listresourcedefinitionversionsrequest.h \
    listresourcedefinitionversionsrequest_p.h \
    listresourcedefinitionversionsresponse.h \
    listresourcedefinitionversionsresponse_p.h \
    listsubscriptiondefinitionsrequest.h \
    listsubscriptiondefinitionsrequest_p.h \
    listsubscriptiondefinitionsresponse.h \
    listsubscriptiondefinitionsresponse_p.h \
    listsubscriptiondefinitionversionsrequest.h \
    listsubscriptiondefinitionversionsrequest_p.h \
    listsubscriptiondefinitionversionsresponse.h \
    listsubscriptiondefinitionversionsresponse_p.h \
    resetdeploymentsrequest.h \
    resetdeploymentsrequest_p.h \
    resetdeploymentsresponse.h \
    resetdeploymentsresponse_p.h \
    updateconnectivityinforequest.h \
    updateconnectivityinforequest_p.h \
    updateconnectivityinforesponse.h \
    updateconnectivityinforesponse_p.h \
    updatecoredefinitionrequest.h \
    updatecoredefinitionrequest_p.h \
    updatecoredefinitionresponse.h \
    updatecoredefinitionresponse_p.h \
    updatedevicedefinitionrequest.h \
    updatedevicedefinitionrequest_p.h \
    updatedevicedefinitionresponse.h \
    updatedevicedefinitionresponse_p.h \
    updatefunctiondefinitionrequest.h \
    updatefunctiondefinitionrequest_p.h \
    updatefunctiondefinitionresponse.h \
    updatefunctiondefinitionresponse_p.h \
    updategroupcertificateconfigurationrequest.h \
    updategroupcertificateconfigurationrequest_p.h \
    updategroupcertificateconfigurationresponse.h \
    updategroupcertificateconfigurationresponse_p.h \
    updategrouprequest.h \
    updategrouprequest_p.h \
    updategroupresponse.h \
    updategroupresponse_p.h \
    updateloggerdefinitionrequest.h \
    updateloggerdefinitionrequest_p.h \
    updateloggerdefinitionresponse.h \
    updateloggerdefinitionresponse_p.h \
    updateresourcedefinitionrequest.h \
    updateresourcedefinitionrequest_p.h \
    updateresourcedefinitionresponse.h \
    updateresourcedefinitionresponse_p.h \
    updatesubscriptiondefinitionrequest.h \
    updatesubscriptiondefinitionrequest_p.h \
    updatesubscriptiondefinitionresponse.h \
    updatesubscriptiondefinitionresponse_p.h \

SOURCES += \
    associateroletogrouprequest.cpp \
    associateroletogroupresponse.cpp \
    associateserviceroletoaccountrequest.cpp \
    associateserviceroletoaccountresponse.cpp \
    createcoredefinitionrequest.cpp \
    createcoredefinitionresponse.cpp \
    createcoredefinitionversionrequest.cpp \
    createcoredefinitionversionresponse.cpp \
    createdeploymentrequest.cpp \
    createdeploymentresponse.cpp \
    createdevicedefinitionrequest.cpp \
    createdevicedefinitionresponse.cpp \
    createdevicedefinitionversionrequest.cpp \
    createdevicedefinitionversionresponse.cpp \
    createfunctiondefinitionrequest.cpp \
    createfunctiondefinitionresponse.cpp \
    createfunctiondefinitionversionrequest.cpp \
    createfunctiondefinitionversionresponse.cpp \
    creategroupcertificateauthorityrequest.cpp \
    creategroupcertificateauthorityresponse.cpp \
    creategrouprequest.cpp \
    creategroupresponse.cpp \
    creategroupversionrequest.cpp \
    creategroupversionresponse.cpp \
    createloggerdefinitionrequest.cpp \
    createloggerdefinitionresponse.cpp \
    createloggerdefinitionversionrequest.cpp \
    createloggerdefinitionversionresponse.cpp \
    createresourcedefinitionrequest.cpp \
    createresourcedefinitionresponse.cpp \
    createresourcedefinitionversionrequest.cpp \
    createresourcedefinitionversionresponse.cpp \
    createsoftwareupdatejobrequest.cpp \
    createsoftwareupdatejobresponse.cpp \
    createsubscriptiondefinitionrequest.cpp \
    createsubscriptiondefinitionresponse.cpp \
    createsubscriptiondefinitionversionrequest.cpp \
    createsubscriptiondefinitionversionresponse.cpp \
    deletecoredefinitionrequest.cpp \
    deletecoredefinitionresponse.cpp \
    deletedevicedefinitionrequest.cpp \
    deletedevicedefinitionresponse.cpp \
    deletefunctiondefinitionrequest.cpp \
    deletefunctiondefinitionresponse.cpp \
    deletegrouprequest.cpp \
    deletegroupresponse.cpp \
    deleteloggerdefinitionrequest.cpp \
    deleteloggerdefinitionresponse.cpp \
    deleteresourcedefinitionrequest.cpp \
    deleteresourcedefinitionresponse.cpp \
    deletesubscriptiondefinitionrequest.cpp \
    deletesubscriptiondefinitionresponse.cpp \
    disassociaterolefromgrouprequest.cpp \
    disassociaterolefromgroupresponse.cpp \
    disassociateservicerolefromaccountrequest.cpp \
    disassociateservicerolefromaccountresponse.cpp \
    getassociatedrolerequest.cpp \
    getassociatedroleresponse.cpp \
    getconnectivityinforequest.cpp \
    getconnectivityinforesponse.cpp \
    getcoredefinitionrequest.cpp \
    getcoredefinitionresponse.cpp \
    getcoredefinitionversionrequest.cpp \
    getcoredefinitionversionresponse.cpp \
    getdeploymentstatusrequest.cpp \
    getdeploymentstatusresponse.cpp \
    getdevicedefinitionrequest.cpp \
    getdevicedefinitionresponse.cpp \
    getdevicedefinitionversionrequest.cpp \
    getdevicedefinitionversionresponse.cpp \
    getfunctiondefinitionrequest.cpp \
    getfunctiondefinitionresponse.cpp \
    getfunctiondefinitionversionrequest.cpp \
    getfunctiondefinitionversionresponse.cpp \
    getgroupcertificateauthorityrequest.cpp \
    getgroupcertificateauthorityresponse.cpp \
    getgroupcertificateconfigurationrequest.cpp \
    getgroupcertificateconfigurationresponse.cpp \
    getgrouprequest.cpp \
    getgroupresponse.cpp \
    getgroupversionrequest.cpp \
    getgroupversionresponse.cpp \
    getloggerdefinitionrequest.cpp \
    getloggerdefinitionresponse.cpp \
    getloggerdefinitionversionrequest.cpp \
    getloggerdefinitionversionresponse.cpp \
    getresourcedefinitionrequest.cpp \
    getresourcedefinitionresponse.cpp \
    getresourcedefinitionversionrequest.cpp \
    getresourcedefinitionversionresponse.cpp \
    getserviceroleforaccountrequest.cpp \
    getserviceroleforaccountresponse.cpp \
    getsubscriptiondefinitionrequest.cpp \
    getsubscriptiondefinitionresponse.cpp \
    getsubscriptiondefinitionversionrequest.cpp \
    getsubscriptiondefinitionversionresponse.cpp \
    greengrassclient.cpp \
    greengrassrequest.cpp \
    greengrassresponse.cpp \
    listcoredefinitionsrequest.cpp \
    listcoredefinitionsresponse.cpp \
    listcoredefinitionversionsrequest.cpp \
    listcoredefinitionversionsresponse.cpp \
    listdeploymentsrequest.cpp \
    listdeploymentsresponse.cpp \
    listdevicedefinitionsrequest.cpp \
    listdevicedefinitionsresponse.cpp \
    listdevicedefinitionversionsrequest.cpp \
    listdevicedefinitionversionsresponse.cpp \
    listfunctiondefinitionsrequest.cpp \
    listfunctiondefinitionsresponse.cpp \
    listfunctiondefinitionversionsrequest.cpp \
    listfunctiondefinitionversionsresponse.cpp \
    listgroupcertificateauthoritiesrequest.cpp \
    listgroupcertificateauthoritiesresponse.cpp \
    listgroupsrequest.cpp \
    listgroupsresponse.cpp \
    listgroupversionsrequest.cpp \
    listgroupversionsresponse.cpp \
    listloggerdefinitionsrequest.cpp \
    listloggerdefinitionsresponse.cpp \
    listloggerdefinitionversionsrequest.cpp \
    listloggerdefinitionversionsresponse.cpp \
    listresourcedefinitionsrequest.cpp \
    listresourcedefinitionsresponse.cpp \
    listresourcedefinitionversionsrequest.cpp \
    listresourcedefinitionversionsresponse.cpp \
    listsubscriptiondefinitionsrequest.cpp \
    listsubscriptiondefinitionsresponse.cpp \
    listsubscriptiondefinitionversionsrequest.cpp \
    listsubscriptiondefinitionversionsresponse.cpp \
    resetdeploymentsrequest.cpp \
    resetdeploymentsresponse.cpp \
    updateconnectivityinforequest.cpp \
    updateconnectivityinforesponse.cpp \
    updatecoredefinitionrequest.cpp \
    updatecoredefinitionresponse.cpp \
    updatedevicedefinitionrequest.cpp \
    updatedevicedefinitionresponse.cpp \
    updatefunctiondefinitionrequest.cpp \
    updatefunctiondefinitionresponse.cpp \
    updategroupcertificateconfigurationrequest.cpp \
    updategroupcertificateconfigurationresponse.cpp \
    updategrouprequest.cpp \
    updategroupresponse.cpp \
    updateloggerdefinitionrequest.cpp \
    updateloggerdefinitionresponse.cpp \
    updateresourcedefinitionrequest.cpp \
    updateresourcedefinitionresponse.cpp \
    updatesubscriptiondefinitionrequest.cpp \
    updatesubscriptiondefinitionresponse.cpp \

win32:CONFIG += skip_target_version_ext
