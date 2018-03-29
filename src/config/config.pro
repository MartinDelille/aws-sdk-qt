include(../../common.pri)

TARGET = config
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    batchgetresourceconfigrequest.h \
    batchgetresourceconfigrequest_p.h \
    batchgetresourceconfigresponse.h \
    batchgetresourceconfigresponse_p.h \
    configserviceclient.h \
    configserviceclient_p.h \
    configservicerequest.h \
    configservicerequest_p.h \
    configserviceresponse.h \
    configserviceresponse_p.h \
    deleteconfigrulerequest.h \
    deleteconfigrulerequest_p.h \
    deleteconfigruleresponse.h \
    deleteconfigruleresponse_p.h \
    deleteconfigurationrecorderrequest.h \
    deleteconfigurationrecorderrequest_p.h \
    deleteconfigurationrecorderresponse.h \
    deleteconfigurationrecorderresponse_p.h \
    deletedeliverychannelrequest.h \
    deletedeliverychannelrequest_p.h \
    deletedeliverychannelresponse.h \
    deletedeliverychannelresponse_p.h \
    deleteevaluationresultsrequest.h \
    deleteevaluationresultsrequest_p.h \
    deleteevaluationresultsresponse.h \
    deleteevaluationresultsresponse_p.h \
    deliverconfigsnapshotrequest.h \
    deliverconfigsnapshotrequest_p.h \
    deliverconfigsnapshotresponse.h \
    deliverconfigsnapshotresponse_p.h \
    describecompliancebyconfigrulerequest.h \
    describecompliancebyconfigrulerequest_p.h \
    describecompliancebyconfigruleresponse.h \
    describecompliancebyconfigruleresponse_p.h \
    describecompliancebyresourcerequest.h \
    describecompliancebyresourcerequest_p.h \
    describecompliancebyresourceresponse.h \
    describecompliancebyresourceresponse_p.h \
    describeconfigruleevaluationstatusrequest.h \
    describeconfigruleevaluationstatusrequest_p.h \
    describeconfigruleevaluationstatusresponse.h \
    describeconfigruleevaluationstatusresponse_p.h \
    describeconfigrulesrequest.h \
    describeconfigrulesrequest_p.h \
    describeconfigrulesresponse.h \
    describeconfigrulesresponse_p.h \
    describeconfigurationrecordersrequest.h \
    describeconfigurationrecordersrequest_p.h \
    describeconfigurationrecordersresponse.h \
    describeconfigurationrecordersresponse_p.h \
    describeconfigurationrecorderstatusrequest.h \
    describeconfigurationrecorderstatusrequest_p.h \
    describeconfigurationrecorderstatusresponse.h \
    describeconfigurationrecorderstatusresponse_p.h \
    describedeliverychannelsrequest.h \
    describedeliverychannelsrequest_p.h \
    describedeliverychannelsresponse.h \
    describedeliverychannelsresponse_p.h \
    describedeliverychannelstatusrequest.h \
    describedeliverychannelstatusrequest_p.h \
    describedeliverychannelstatusresponse.h \
    describedeliverychannelstatusresponse_p.h \
    getcompliancedetailsbyconfigrulerequest.h \
    getcompliancedetailsbyconfigrulerequest_p.h \
    getcompliancedetailsbyconfigruleresponse.h \
    getcompliancedetailsbyconfigruleresponse_p.h \
    getcompliancedetailsbyresourcerequest.h \
    getcompliancedetailsbyresourcerequest_p.h \
    getcompliancedetailsbyresourceresponse.h \
    getcompliancedetailsbyresourceresponse_p.h \
    getcompliancesummarybyconfigruleresponse.h \
    getcompliancesummarybyconfigruleresponse_p.h \
    getcompliancesummarybyresourcetyperequest.h \
    getcompliancesummarybyresourcetyperequest_p.h \
    getcompliancesummarybyresourcetyperesponse.h \
    getcompliancesummarybyresourcetyperesponse_p.h \
    getdiscoveredresourcecountsrequest.h \
    getdiscoveredresourcecountsrequest_p.h \
    getdiscoveredresourcecountsresponse.h \
    getdiscoveredresourcecountsresponse_p.h \
    getresourceconfighistoryrequest.h \
    getresourceconfighistoryrequest_p.h \
    getresourceconfighistoryresponse.h \
    getresourceconfighistoryresponse_p.h \
    listdiscoveredresourcesrequest.h \
    listdiscoveredresourcesrequest_p.h \
    listdiscoveredresourcesresponse.h \
    listdiscoveredresourcesresponse_p.h \
    putconfigrulerequest.h \
    putconfigrulerequest_p.h \
    putconfigruleresponse.h \
    putconfigruleresponse_p.h \
    putconfigurationrecorderrequest.h \
    putconfigurationrecorderrequest_p.h \
    putconfigurationrecorderresponse.h \
    putconfigurationrecorderresponse_p.h \
    putdeliverychannelrequest.h \
    putdeliverychannelrequest_p.h \
    putdeliverychannelresponse.h \
    putdeliverychannelresponse_p.h \
    putevaluationsrequest.h \
    putevaluationsrequest_p.h \
    putevaluationsresponse.h \
    putevaluationsresponse_p.h \
    startconfigrulesevaluationrequest.h \
    startconfigrulesevaluationrequest_p.h \
    startconfigrulesevaluationresponse.h \
    startconfigrulesevaluationresponse_p.h \
    startconfigurationrecorderrequest.h \
    startconfigurationrecorderrequest_p.h \
    startconfigurationrecorderresponse.h \
    startconfigurationrecorderresponse_p.h \
    stopconfigurationrecorderrequest.h \
    stopconfigurationrecorderrequest_p.h \
    stopconfigurationrecorderresponse.h \
    stopconfigurationrecorderresponse_p.h \

SOURCES += \
    batchgetresourceconfigrequest.cpp \
    batchgetresourceconfigresponse.cpp \
    configserviceclient.cpp \
    configservicerequest.cpp \
    configserviceresponse.cpp \
    deleteconfigrulerequest.cpp \
    deleteconfigruleresponse.cpp \
    deleteconfigurationrecorderrequest.cpp \
    deleteconfigurationrecorderresponse.cpp \
    deletedeliverychannelrequest.cpp \
    deletedeliverychannelresponse.cpp \
    deleteevaluationresultsrequest.cpp \
    deleteevaluationresultsresponse.cpp \
    deliverconfigsnapshotrequest.cpp \
    deliverconfigsnapshotresponse.cpp \
    describecompliancebyconfigrulerequest.cpp \
    describecompliancebyconfigruleresponse.cpp \
    describecompliancebyresourcerequest.cpp \
    describecompliancebyresourceresponse.cpp \
    describeconfigruleevaluationstatusrequest.cpp \
    describeconfigruleevaluationstatusresponse.cpp \
    describeconfigrulesrequest.cpp \
    describeconfigrulesresponse.cpp \
    describeconfigurationrecordersrequest.cpp \
    describeconfigurationrecordersresponse.cpp \
    describeconfigurationrecorderstatusrequest.cpp \
    describeconfigurationrecorderstatusresponse.cpp \
    describedeliverychannelsrequest.cpp \
    describedeliverychannelsresponse.cpp \
    describedeliverychannelstatusrequest.cpp \
    describedeliverychannelstatusresponse.cpp \
    getcompliancedetailsbyconfigrulerequest.cpp \
    getcompliancedetailsbyconfigruleresponse.cpp \
    getcompliancedetailsbyresourcerequest.cpp \
    getcompliancedetailsbyresourceresponse.cpp \
    getcompliancesummarybyconfigruleresponse.cpp \
    getcompliancesummarybyresourcetyperequest.cpp \
    getcompliancesummarybyresourcetyperesponse.cpp \
    getdiscoveredresourcecountsrequest.cpp \
    getdiscoveredresourcecountsresponse.cpp \
    getresourceconfighistoryrequest.cpp \
    getresourceconfighistoryresponse.cpp \
    listdiscoveredresourcesrequest.cpp \
    listdiscoveredresourcesresponse.cpp \
    putconfigrulerequest.cpp \
    putconfigruleresponse.cpp \
    putconfigurationrecorderrequest.cpp \
    putconfigurationrecorderresponse.cpp \
    putdeliverychannelrequest.cpp \
    putdeliverychannelresponse.cpp \
    putevaluationsrequest.cpp \
    putevaluationsresponse.cpp \
    startconfigrulesevaluationrequest.cpp \
    startconfigrulesevaluationresponse.cpp \
    startconfigurationrecorderrequest.cpp \
    startconfigurationrecorderresponse.cpp \
    stopconfigurationrecorderrequest.cpp \
    stopconfigurationrecorderresponse.cpp \

win32:CONFIG += skip_target_version_ext
