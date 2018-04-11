include(../../common.pri)

TARGET = workmail
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    associatedelegatetoresourcerequest.h \
    associatedelegatetoresourcerequest_p.h \
    associatedelegatetoresourceresponse.h \
    associatedelegatetoresourceresponse_p.h \
    associatemembertogrouprequest.h \
    associatemembertogrouprequest_p.h \
    associatemembertogroupresponse.h \
    associatemembertogroupresponse_p.h \
    createaliasrequest.h \
    createaliasrequest_p.h \
    createaliasresponse.h \
    createaliasresponse_p.h \
    creategrouprequest.h \
    creategrouprequest_p.h \
    creategroupresponse.h \
    creategroupresponse_p.h \
    createresourcerequest.h \
    createresourcerequest_p.h \
    createresourceresponse.h \
    createresourceresponse_p.h \
    createuserrequest.h \
    createuserrequest_p.h \
    createuserresponse.h \
    createuserresponse_p.h \
    deletealiasrequest.h \
    deletealiasrequest_p.h \
    deletealiasresponse.h \
    deletealiasresponse_p.h \
    deletegrouprequest.h \
    deletegrouprequest_p.h \
    deletegroupresponse.h \
    deletegroupresponse_p.h \
    deletemailboxpermissionsrequest.h \
    deletemailboxpermissionsrequest_p.h \
    deletemailboxpermissionsresponse.h \
    deletemailboxpermissionsresponse_p.h \
    deleteresourcerequest.h \
    deleteresourcerequest_p.h \
    deleteresourceresponse.h \
    deleteresourceresponse_p.h \
    deleteuserrequest.h \
    deleteuserrequest_p.h \
    deleteuserresponse.h \
    deleteuserresponse_p.h \
    deregisterfromworkmailrequest.h \
    deregisterfromworkmailrequest_p.h \
    deregisterfromworkmailresponse.h \
    deregisterfromworkmailresponse_p.h \
    describegrouprequest.h \
    describegrouprequest_p.h \
    describegroupresponse.h \
    describegroupresponse_p.h \
    describeorganizationrequest.h \
    describeorganizationrequest_p.h \
    describeorganizationresponse.h \
    describeorganizationresponse_p.h \
    describeresourcerequest.h \
    describeresourcerequest_p.h \
    describeresourceresponse.h \
    describeresourceresponse_p.h \
    describeuserrequest.h \
    describeuserrequest_p.h \
    describeuserresponse.h \
    describeuserresponse_p.h \
    disassociatedelegatefromresourcerequest.h \
    disassociatedelegatefromresourcerequest_p.h \
    disassociatedelegatefromresourceresponse.h \
    disassociatedelegatefromresourceresponse_p.h \
    disassociatememberfromgrouprequest.h \
    disassociatememberfromgrouprequest_p.h \
    disassociatememberfromgroupresponse.h \
    disassociatememberfromgroupresponse_p.h \
    listaliasesrequest.h \
    listaliasesrequest_p.h \
    listaliasesresponse.h \
    listaliasesresponse_p.h \
    listgroupmembersrequest.h \
    listgroupmembersrequest_p.h \
    listgroupmembersresponse.h \
    listgroupmembersresponse_p.h \
    listgroupsrequest.h \
    listgroupsrequest_p.h \
    listgroupsresponse.h \
    listgroupsresponse_p.h \
    listmailboxpermissionsrequest.h \
    listmailboxpermissionsrequest_p.h \
    listmailboxpermissionsresponse.h \
    listmailboxpermissionsresponse_p.h \
    listorganizationsrequest.h \
    listorganizationsrequest_p.h \
    listorganizationsresponse.h \
    listorganizationsresponse_p.h \
    listresourcedelegatesrequest.h \
    listresourcedelegatesrequest_p.h \
    listresourcedelegatesresponse.h \
    listresourcedelegatesresponse_p.h \
    listresourcesrequest.h \
    listresourcesrequest_p.h \
    listresourcesresponse.h \
    listresourcesresponse_p.h \
    listusersrequest.h \
    listusersrequest_p.h \
    listusersresponse.h \
    listusersresponse_p.h \
    putmailboxpermissionsrequest.h \
    putmailboxpermissionsrequest_p.h \
    putmailboxpermissionsresponse.h \
    putmailboxpermissionsresponse_p.h \
    registertoworkmailrequest.h \
    registertoworkmailrequest_p.h \
    registertoworkmailresponse.h \
    registertoworkmailresponse_p.h \
    resetpasswordrequest.h \
    resetpasswordrequest_p.h \
    resetpasswordresponse.h \
    resetpasswordresponse_p.h \
    updateprimaryemailaddressrequest.h \
    updateprimaryemailaddressrequest_p.h \
    updateprimaryemailaddressresponse.h \
    updateprimaryemailaddressresponse_p.h \
    updateresourcerequest.h \
    updateresourcerequest_p.h \
    updateresourceresponse.h \
    updateresourceresponse_p.h \
    workmailclient.h \
    workmailclient_p.h \
    workmailrequest.h \
    workmailrequest_p.h \
    workmailresponse.h \
    workmailresponse_p.h \

SOURCES += \
    associatedelegatetoresourcerequest.cpp \
    associatedelegatetoresourceresponse.cpp \
    associatemembertogrouprequest.cpp \
    associatemembertogroupresponse.cpp \
    createaliasrequest.cpp \
    createaliasresponse.cpp \
    creategrouprequest.cpp \
    creategroupresponse.cpp \
    createresourcerequest.cpp \
    createresourceresponse.cpp \
    createuserrequest.cpp \
    createuserresponse.cpp \
    deletealiasrequest.cpp \
    deletealiasresponse.cpp \
    deletegrouprequest.cpp \
    deletegroupresponse.cpp \
    deletemailboxpermissionsrequest.cpp \
    deletemailboxpermissionsresponse.cpp \
    deleteresourcerequest.cpp \
    deleteresourceresponse.cpp \
    deleteuserrequest.cpp \
    deleteuserresponse.cpp \
    deregisterfromworkmailrequest.cpp \
    deregisterfromworkmailresponse.cpp \
    describegrouprequest.cpp \
    describegroupresponse.cpp \
    describeorganizationrequest.cpp \
    describeorganizationresponse.cpp \
    describeresourcerequest.cpp \
    describeresourceresponse.cpp \
    describeuserrequest.cpp \
    describeuserresponse.cpp \
    disassociatedelegatefromresourcerequest.cpp \
    disassociatedelegatefromresourceresponse.cpp \
    disassociatememberfromgrouprequest.cpp \
    disassociatememberfromgroupresponse.cpp \
    listaliasesrequest.cpp \
    listaliasesresponse.cpp \
    listgroupmembersrequest.cpp \
    listgroupmembersresponse.cpp \
    listgroupsrequest.cpp \
    listgroupsresponse.cpp \
    listmailboxpermissionsrequest.cpp \
    listmailboxpermissionsresponse.cpp \
    listorganizationsrequest.cpp \
    listorganizationsresponse.cpp \
    listresourcedelegatesrequest.cpp \
    listresourcedelegatesresponse.cpp \
    listresourcesrequest.cpp \
    listresourcesresponse.cpp \
    listusersrequest.cpp \
    listusersresponse.cpp \
    putmailboxpermissionsrequest.cpp \
    putmailboxpermissionsresponse.cpp \
    registertoworkmailrequest.cpp \
    registertoworkmailresponse.cpp \
    resetpasswordrequest.cpp \
    resetpasswordresponse.cpp \
    updateprimaryemailaddressrequest.cpp \
    updateprimaryemailaddressresponse.cpp \
    updateresourcerequest.cpp \
    updateresourceresponse.cpp \
    workmailclient.cpp \
    workmailrequest.cpp \
    workmailresponse.cpp \

win32:CONFIG += skip_target_version_ext
