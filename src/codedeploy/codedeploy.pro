include(../../common.pri)

TARGET = QtAwsCodeDeploy
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    addtagstoonpremisesinstancesrequest.h \
    addtagstoonpremisesinstancesrequest_p.h \
    addtagstoonpremisesinstancesresponse.h \
    addtagstoonpremisesinstancesresponse_p.h \
    batchgetapplicationrevisionsrequest.h \
    batchgetapplicationrevisionsrequest_p.h \
    batchgetapplicationrevisionsresponse.h \
    batchgetapplicationrevisionsresponse_p.h \
    batchgetapplicationsrequest.h \
    batchgetapplicationsrequest_p.h \
    batchgetapplicationsresponse.h \
    batchgetapplicationsresponse_p.h \
    batchgetdeploymentgroupsrequest.h \
    batchgetdeploymentgroupsrequest_p.h \
    batchgetdeploymentgroupsresponse.h \
    batchgetdeploymentgroupsresponse_p.h \
    batchgetdeploymentinstancesrequest.h \
    batchgetdeploymentinstancesrequest_p.h \
    batchgetdeploymentinstancesresponse.h \
    batchgetdeploymentinstancesresponse_p.h \
    batchgetdeploymentsrequest.h \
    batchgetdeploymentsrequest_p.h \
    batchgetdeploymentsresponse.h \
    batchgetdeploymentsresponse_p.h \
    batchgetonpremisesinstancesrequest.h \
    batchgetonpremisesinstancesrequest_p.h \
    batchgetonpremisesinstancesresponse.h \
    batchgetonpremisesinstancesresponse_p.h \
    codedeployclient.h \
    codedeployclient_p.h \
    codedeployrequest.h \
    codedeployrequest_p.h \
    codedeployresponse.h \
    codedeployresponse_p.h \
    continuedeploymentrequest.h \
    continuedeploymentrequest_p.h \
    continuedeploymentresponse.h \
    continuedeploymentresponse_p.h \
    createapplicationrequest.h \
    createapplicationrequest_p.h \
    createapplicationresponse.h \
    createapplicationresponse_p.h \
    createdeploymentconfigrequest.h \
    createdeploymentconfigrequest_p.h \
    createdeploymentconfigresponse.h \
    createdeploymentconfigresponse_p.h \
    createdeploymentgrouprequest.h \
    createdeploymentgrouprequest_p.h \
    createdeploymentgroupresponse.h \
    createdeploymentgroupresponse_p.h \
    createdeploymentrequest.h \
    createdeploymentrequest_p.h \
    createdeploymentresponse.h \
    createdeploymentresponse_p.h \
    deleteapplicationrequest.h \
    deleteapplicationrequest_p.h \
    deleteapplicationresponse.h \
    deleteapplicationresponse_p.h \
    deletedeploymentconfigrequest.h \
    deletedeploymentconfigrequest_p.h \
    deletedeploymentconfigresponse.h \
    deletedeploymentconfigresponse_p.h \
    deletedeploymentgrouprequest.h \
    deletedeploymentgrouprequest_p.h \
    deletedeploymentgroupresponse.h \
    deletedeploymentgroupresponse_p.h \
    deletegithubaccounttokenrequest.h \
    deletegithubaccounttokenrequest_p.h \
    deletegithubaccounttokenresponse.h \
    deletegithubaccounttokenresponse_p.h \
    deregisteronpremisesinstancerequest.h \
    deregisteronpremisesinstancerequest_p.h \
    deregisteronpremisesinstanceresponse.h \
    deregisteronpremisesinstanceresponse_p.h \
    getapplicationrequest.h \
    getapplicationrequest_p.h \
    getapplicationresponse.h \
    getapplicationresponse_p.h \
    getapplicationrevisionrequest.h \
    getapplicationrevisionrequest_p.h \
    getapplicationrevisionresponse.h \
    getapplicationrevisionresponse_p.h \
    getdeploymentconfigrequest.h \
    getdeploymentconfigrequest_p.h \
    getdeploymentconfigresponse.h \
    getdeploymentconfigresponse_p.h \
    getdeploymentgrouprequest.h \
    getdeploymentgrouprequest_p.h \
    getdeploymentgroupresponse.h \
    getdeploymentgroupresponse_p.h \
    getdeploymentinstancerequest.h \
    getdeploymentinstancerequest_p.h \
    getdeploymentinstanceresponse.h \
    getdeploymentinstanceresponse_p.h \
    getdeploymentrequest.h \
    getdeploymentrequest_p.h \
    getdeploymentresponse.h \
    getdeploymentresponse_p.h \
    getonpremisesinstancerequest.h \
    getonpremisesinstancerequest_p.h \
    getonpremisesinstanceresponse.h \
    getonpremisesinstanceresponse_p.h \
    listapplicationrevisionsrequest.h \
    listapplicationrevisionsrequest_p.h \
    listapplicationrevisionsresponse.h \
    listapplicationrevisionsresponse_p.h \
    listapplicationsrequest.h \
    listapplicationsrequest_p.h \
    listapplicationsresponse.h \
    listapplicationsresponse_p.h \
    listdeploymentconfigsrequest.h \
    listdeploymentconfigsrequest_p.h \
    listdeploymentconfigsresponse.h \
    listdeploymentconfigsresponse_p.h \
    listdeploymentgroupsrequest.h \
    listdeploymentgroupsrequest_p.h \
    listdeploymentgroupsresponse.h \
    listdeploymentgroupsresponse_p.h \
    listdeploymentinstancesrequest.h \
    listdeploymentinstancesrequest_p.h \
    listdeploymentinstancesresponse.h \
    listdeploymentinstancesresponse_p.h \
    listdeploymentsrequest.h \
    listdeploymentsrequest_p.h \
    listdeploymentsresponse.h \
    listdeploymentsresponse_p.h \
    listgithubaccounttokennamesrequest.h \
    listgithubaccounttokennamesrequest_p.h \
    listgithubaccounttokennamesresponse.h \
    listgithubaccounttokennamesresponse_p.h \
    listonpremisesinstancesrequest.h \
    listonpremisesinstancesrequest_p.h \
    listonpremisesinstancesresponse.h \
    listonpremisesinstancesresponse_p.h \
    putlifecycleeventhookexecutionstatusrequest.h \
    putlifecycleeventhookexecutionstatusrequest_p.h \
    putlifecycleeventhookexecutionstatusresponse.h \
    putlifecycleeventhookexecutionstatusresponse_p.h \
    registerapplicationrevisionrequest.h \
    registerapplicationrevisionrequest_p.h \
    registerapplicationrevisionresponse.h \
    registerapplicationrevisionresponse_p.h \
    registeronpremisesinstancerequest.h \
    registeronpremisesinstancerequest_p.h \
    registeronpremisesinstanceresponse.h \
    registeronpremisesinstanceresponse_p.h \
    removetagsfromonpremisesinstancesrequest.h \
    removetagsfromonpremisesinstancesrequest_p.h \
    removetagsfromonpremisesinstancesresponse.h \
    removetagsfromonpremisesinstancesresponse_p.h \
    skipwaittimeforinstanceterminationrequest.h \
    skipwaittimeforinstanceterminationrequest_p.h \
    skipwaittimeforinstanceterminationresponse.h \
    skipwaittimeforinstanceterminationresponse_p.h \
    stopdeploymentrequest.h \
    stopdeploymentrequest_p.h \
    stopdeploymentresponse.h \
    stopdeploymentresponse_p.h \
    updateapplicationrequest.h \
    updateapplicationrequest_p.h \
    updateapplicationresponse.h \
    updateapplicationresponse_p.h \
    updatedeploymentgrouprequest.h \
    updatedeploymentgrouprequest_p.h \
    updatedeploymentgroupresponse.h \
    updatedeploymentgroupresponse_p.h \

SOURCES += \
    addtagstoonpremisesinstancesrequest.cpp \
    addtagstoonpremisesinstancesresponse.cpp \
    batchgetapplicationrevisionsrequest.cpp \
    batchgetapplicationrevisionsresponse.cpp \
    batchgetapplicationsrequest.cpp \
    batchgetapplicationsresponse.cpp \
    batchgetdeploymentgroupsrequest.cpp \
    batchgetdeploymentgroupsresponse.cpp \
    batchgetdeploymentinstancesrequest.cpp \
    batchgetdeploymentinstancesresponse.cpp \
    batchgetdeploymentsrequest.cpp \
    batchgetdeploymentsresponse.cpp \
    batchgetonpremisesinstancesrequest.cpp \
    batchgetonpremisesinstancesresponse.cpp \
    codedeployclient.cpp \
    codedeployrequest.cpp \
    codedeployresponse.cpp \
    continuedeploymentrequest.cpp \
    continuedeploymentresponse.cpp \
    createapplicationrequest.cpp \
    createapplicationresponse.cpp \
    createdeploymentconfigrequest.cpp \
    createdeploymentconfigresponse.cpp \
    createdeploymentgrouprequest.cpp \
    createdeploymentgroupresponse.cpp \
    createdeploymentrequest.cpp \
    createdeploymentresponse.cpp \
    deleteapplicationrequest.cpp \
    deleteapplicationresponse.cpp \
    deletedeploymentconfigrequest.cpp \
    deletedeploymentconfigresponse.cpp \
    deletedeploymentgrouprequest.cpp \
    deletedeploymentgroupresponse.cpp \
    deletegithubaccounttokenrequest.cpp \
    deletegithubaccounttokenresponse.cpp \
    deregisteronpremisesinstancerequest.cpp \
    deregisteronpremisesinstanceresponse.cpp \
    getapplicationrequest.cpp \
    getapplicationresponse.cpp \
    getapplicationrevisionrequest.cpp \
    getapplicationrevisionresponse.cpp \
    getdeploymentconfigrequest.cpp \
    getdeploymentconfigresponse.cpp \
    getdeploymentgrouprequest.cpp \
    getdeploymentgroupresponse.cpp \
    getdeploymentinstancerequest.cpp \
    getdeploymentinstanceresponse.cpp \
    getdeploymentrequest.cpp \
    getdeploymentresponse.cpp \
    getonpremisesinstancerequest.cpp \
    getonpremisesinstanceresponse.cpp \
    listapplicationrevisionsrequest.cpp \
    listapplicationrevisionsresponse.cpp \
    listapplicationsrequest.cpp \
    listapplicationsresponse.cpp \
    listdeploymentconfigsrequest.cpp \
    listdeploymentconfigsresponse.cpp \
    listdeploymentgroupsrequest.cpp \
    listdeploymentgroupsresponse.cpp \
    listdeploymentinstancesrequest.cpp \
    listdeploymentinstancesresponse.cpp \
    listdeploymentsrequest.cpp \
    listdeploymentsresponse.cpp \
    listgithubaccounttokennamesrequest.cpp \
    listgithubaccounttokennamesresponse.cpp \
    listonpremisesinstancesrequest.cpp \
    listonpremisesinstancesresponse.cpp \
    putlifecycleeventhookexecutionstatusrequest.cpp \
    putlifecycleeventhookexecutionstatusresponse.cpp \
    registerapplicationrevisionrequest.cpp \
    registerapplicationrevisionresponse.cpp \
    registeronpremisesinstancerequest.cpp \
    registeronpremisesinstanceresponse.cpp \
    removetagsfromonpremisesinstancesrequest.cpp \
    removetagsfromonpremisesinstancesresponse.cpp \
    skipwaittimeforinstanceterminationrequest.cpp \
    skipwaittimeforinstanceterminationresponse.cpp \
    stopdeploymentrequest.cpp \
    stopdeploymentresponse.cpp \
    updateapplicationrequest.cpp \
    updateapplicationresponse.cpp \
    updatedeploymentgrouprequest.cpp \
    updatedeploymentgroupresponse.cpp \

win32:CONFIG += skip_target_version_ext