/*
    Copyright 2013-2018 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "guarddutyclient.h"
#include "guarddutyclient_p.h"

#include "core/awssignaturev4.h"
#include "acceptinvitationrequest.h"
#include "acceptinvitationresponse.h"
#include "archivefindingsrequest.h"
#include "archivefindingsresponse.h"
#include "createdetectorrequest.h"
#include "createdetectorresponse.h"
#include "createipsetrequest.h"
#include "createipsetresponse.h"
#include "createmembersrequest.h"
#include "createmembersresponse.h"
#include "createsamplefindingsrequest.h"
#include "createsamplefindingsresponse.h"
#include "createthreatintelsetrequest.h"
#include "createthreatintelsetresponse.h"
#include "declineinvitationsrequest.h"
#include "declineinvitationsresponse.h"
#include "deletedetectorrequest.h"
#include "deletedetectorresponse.h"
#include "deleteipsetrequest.h"
#include "deleteipsetresponse.h"
#include "deleteinvitationsrequest.h"
#include "deleteinvitationsresponse.h"
#include "deletemembersrequest.h"
#include "deletemembersresponse.h"
#include "deletethreatintelsetrequest.h"
#include "deletethreatintelsetresponse.h"
#include "disassociatefrommasteraccountrequest.h"
#include "disassociatefrommasteraccountresponse.h"
#include "disassociatemembersrequest.h"
#include "disassociatemembersresponse.h"
#include "getdetectorrequest.h"
#include "getdetectorresponse.h"
#include "getfindingsrequest.h"
#include "getfindingsresponse.h"
#include "getfindingsstatisticsrequest.h"
#include "getfindingsstatisticsresponse.h"
#include "getipsetrequest.h"
#include "getipsetresponse.h"
#include "getinvitationscountrequest.h"
#include "getinvitationscountresponse.h"
#include "getmasteraccountrequest.h"
#include "getmasteraccountresponse.h"
#include "getmembersrequest.h"
#include "getmembersresponse.h"
#include "getthreatintelsetrequest.h"
#include "getthreatintelsetresponse.h"
#include "invitemembersrequest.h"
#include "invitemembersresponse.h"
#include "listdetectorsrequest.h"
#include "listdetectorsresponse.h"
#include "listfindingsrequest.h"
#include "listfindingsresponse.h"
#include "listipsetsrequest.h"
#include "listipsetsresponse.h"
#include "listinvitationsrequest.h"
#include "listinvitationsresponse.h"
#include "listmembersrequest.h"
#include "listmembersresponse.h"
#include "listthreatintelsetsrequest.h"
#include "listthreatintelsetsresponse.h"
#include "startmonitoringmembersrequest.h"
#include "startmonitoringmembersresponse.h"
#include "stopmonitoringmembersrequest.h"
#include "stopmonitoringmembersresponse.h"
#include "unarchivefindingsrequest.h"
#include "unarchivefindingsresponse.h"
#include "updatedetectorrequest.h"
#include "updatedetectorresponse.h"
#include "updatefindingsfeedbackrequest.h"
#include "updatefindingsfeedbackresponse.h"
#include "updateipsetrequest.h"
#include "updateipsetresponse.h"
#include "updatethreatintelsetrequest.h"
#include "updatethreatintelsetresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::GuardDuty
 * \brief Contains classess for accessing Amazon GuardDuty.
 *
 * \inmodule QtAwsGuardDuty
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace GuardDuty {

/*!
 * \class QtAws::GuardDuty::GuardDutyClient
 * \brief The GuardDutyClient class provides access to the Amazon GuardDuty service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsGuardDuty
 *
 */

/*!
 * \brief Constructs a GuardDutyClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
GuardDutyClient::GuardDutyClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new GuardDutyClientPrivate(this), parent)
{
    Q_D(GuardDutyClient);
    d->apiVersion = QStringLiteral("2017-11-28");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("guardduty");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon GuardDuty");
    d->serviceName = QStringLiteral("guardduty");
}

/*!
 * \overload GuardDutyClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
GuardDutyClient::GuardDutyClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new GuardDutyClientPrivate(this), parent)
{
    Q_D(GuardDutyClient);
    d->apiVersion = QStringLiteral("2017-11-28");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("guardduty");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon GuardDuty");
    d->serviceName = QStringLiteral("guardduty");
}

/*!
 * Sends \a request to the GuardDutyClient service, and returns a pointer to an
 * AcceptInvitationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
AcceptInvitationResponse * GuardDutyClient::acceptInvitation(const AcceptInvitationRequest &request)
{
    return qobject_cast<AcceptInvitationResponse *>(send(request));
}

/*!
 * Sends \a request to the GuardDutyClient service, and returns a pointer to an
 * ArchiveFindingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
ArchiveFindingsResponse * GuardDutyClient::archiveFindings(const ArchiveFindingsRequest &request)
{
    return qobject_cast<ArchiveFindingsResponse *>(send(request));
}

/*!
 * Sends \a request to the GuardDutyClient service, and returns a pointer to an
 * CreateDetectorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a single Amazon GuardDuty detector. A detector is an object that represents the GuardDuty service. A detector
 */
CreateDetectorResponse * GuardDutyClient::createDetector(const CreateDetectorRequest &request)
{
    return qobject_cast<CreateDetectorResponse *>(send(request));
}

/*!
 * Sends \a request to the GuardDutyClient service, and returns a pointer to an
 * CreateIPSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new IPSet - a list of trusted IP addresses that have been whitelisted for secure communication with AWS
 */
CreateIPSetResponse * GuardDutyClient::createIPSet(const CreateIPSetRequest &request)
{
    return qobject_cast<CreateIPSetResponse *>(send(request));
}

/*!
 * Sends \a request to the GuardDutyClient service, and returns a pointer to an
 * CreateMembersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates member accounts of the current AWS account by specifying a list of AWS account IDs. The current AWS account can
 */
CreateMembersResponse * GuardDutyClient::createMembers(const CreateMembersRequest &request)
{
    return qobject_cast<CreateMembersResponse *>(send(request));
}

/*!
 * Sends \a request to the GuardDutyClient service, and returns a pointer to an
 * CreateSampleFindingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Generates example findings of types specified by the list of finding types. If 'NULL' is specified for findingTypes, the
 */
CreateSampleFindingsResponse * GuardDutyClient::createSampleFindings(const CreateSampleFindingsRequest &request)
{
    return qobject_cast<CreateSampleFindingsResponse *>(send(request));
}

/*!
 * Sends \a request to the GuardDutyClient service, and returns a pointer to an
 * CreateThreatIntelSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Create a new ThreatIntelSet. ThreatIntelSets consist of known malicious IP addresses. GuardDuty generates findings based
 */
CreateThreatIntelSetResponse * GuardDutyClient::createThreatIntelSet(const CreateThreatIntelSetRequest &request)
{
    return qobject_cast<CreateThreatIntelSetResponse *>(send(request));
}

/*!
 * Sends \a request to the GuardDutyClient service, and returns a pointer to an
 * DeclineInvitationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
DeclineInvitationsResponse * GuardDutyClient::declineInvitations(const DeclineInvitationsRequest &request)
{
    return qobject_cast<DeclineInvitationsResponse *>(send(request));
}

/*!
 * Sends \a request to the GuardDutyClient service, and returns a pointer to an
 * DeleteDetectorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
DeleteDetectorResponse * GuardDutyClient::deleteDetector(const DeleteDetectorRequest &request)
{
    return qobject_cast<DeleteDetectorResponse *>(send(request));
}

/*!
 * Sends \a request to the GuardDutyClient service, and returns a pointer to an
 * DeleteIPSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
DeleteIPSetResponse * GuardDutyClient::deleteIPSet(const DeleteIPSetRequest &request)
{
    return qobject_cast<DeleteIPSetResponse *>(send(request));
}

/*!
 * Sends \a request to the GuardDutyClient service, and returns a pointer to an
 * DeleteInvitationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
DeleteInvitationsResponse * GuardDutyClient::deleteInvitations(const DeleteInvitationsRequest &request)
{
    return qobject_cast<DeleteInvitationsResponse *>(send(request));
}

/*!
 * Sends \a request to the GuardDutyClient service, and returns a pointer to an
 * DeleteMembersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
DeleteMembersResponse * GuardDutyClient::deleteMembers(const DeleteMembersRequest &request)
{
    return qobject_cast<DeleteMembersResponse *>(send(request));
}

/*!
 * Sends \a request to the GuardDutyClient service, and returns a pointer to an
 * DeleteThreatIntelSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
DeleteThreatIntelSetResponse * GuardDutyClient::deleteThreatIntelSet(const DeleteThreatIntelSetRequest &request)
{
    return qobject_cast<DeleteThreatIntelSetResponse *>(send(request));
}

/*!
 * Sends \a request to the GuardDutyClient service, and returns a pointer to an
 * DisassociateFromMasterAccountResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
DisassociateFromMasterAccountResponse * GuardDutyClient::disassociateFromMasterAccount(const DisassociateFromMasterAccountRequest &request)
{
    return qobject_cast<DisassociateFromMasterAccountResponse *>(send(request));
}

/*!
 * Sends \a request to the GuardDutyClient service, and returns a pointer to an
 * DisassociateMembersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
DisassociateMembersResponse * GuardDutyClient::disassociateMembers(const DisassociateMembersRequest &request)
{
    return qobject_cast<DisassociateMembersResponse *>(send(request));
}

/*!
 * Sends \a request to the GuardDutyClient service, and returns a pointer to an
 * GetDetectorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
GetDetectorResponse * GuardDutyClient::getDetector(const GetDetectorRequest &request)
{
    return qobject_cast<GetDetectorResponse *>(send(request));
}

/*!
 * Sends \a request to the GuardDutyClient service, and returns a pointer to an
 * GetFindingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
GetFindingsResponse * GuardDutyClient::getFindings(const GetFindingsRequest &request)
{
    return qobject_cast<GetFindingsResponse *>(send(request));
}

/*!
 * Sends \a request to the GuardDutyClient service, and returns a pointer to an
 * GetFindingsStatisticsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
GetFindingsStatisticsResponse * GuardDutyClient::getFindingsStatistics(const GetFindingsStatisticsRequest &request)
{
    return qobject_cast<GetFindingsStatisticsResponse *>(send(request));
}

/*!
 * Sends \a request to the GuardDutyClient service, and returns a pointer to an
 * GetIPSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
GetIPSetResponse * GuardDutyClient::getIPSet(const GetIPSetRequest &request)
{
    return qobject_cast<GetIPSetResponse *>(send(request));
}

/*!
 * Sends \a request to the GuardDutyClient service, and returns a pointer to an
 * GetInvitationsCountResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the count of all GuardDuty membership invitations that were sent to the current member account except the
 */
GetInvitationsCountResponse * GuardDutyClient::getInvitationsCount(const GetInvitationsCountRequest &request)
{
    return qobject_cast<GetInvitationsCountResponse *>(send(request));
}

/*!
 * Sends \a request to the GuardDutyClient service, and returns a pointer to an
 * GetMasterAccountResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
GetMasterAccountResponse * GuardDutyClient::getMasterAccount(const GetMasterAccountRequest &request)
{
    return qobject_cast<GetMasterAccountResponse *>(send(request));
}

/*!
 * Sends \a request to the GuardDutyClient service, and returns a pointer to an
 * GetMembersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
GetMembersResponse * GuardDutyClient::getMembers(const GetMembersRequest &request)
{
    return qobject_cast<GetMembersResponse *>(send(request));
}

/*!
 * Sends \a request to the GuardDutyClient service, and returns a pointer to an
 * GetThreatIntelSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
GetThreatIntelSetResponse * GuardDutyClient::getThreatIntelSet(const GetThreatIntelSetRequest &request)
{
    return qobject_cast<GetThreatIntelSetResponse *>(send(request));
}

/*!
 * Sends \a request to the GuardDutyClient service, and returns a pointer to an
 * InviteMembersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Invites other AWS accounts (created as members of the current AWS account by CreateMembers) to enable GuardDuty and
 * allow the current AWS account to view and manage these accounts' GuardDuty findings on their behalf as the master
 */
InviteMembersResponse * GuardDutyClient::inviteMembers(const InviteMembersRequest &request)
{
    return qobject_cast<InviteMembersResponse *>(send(request));
}

/*!
 * Sends \a request to the GuardDutyClient service, and returns a pointer to an
 * ListDetectorsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
ListDetectorsResponse * GuardDutyClient::listDetectors(const ListDetectorsRequest &request)
{
    return qobject_cast<ListDetectorsResponse *>(send(request));
}

/*!
 * Sends \a request to the GuardDutyClient service, and returns a pointer to an
 * ListFindingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
ListFindingsResponse * GuardDutyClient::listFindings(const ListFindingsRequest &request)
{
    return qobject_cast<ListFindingsResponse *>(send(request));
}

/*!
 * Sends \a request to the GuardDutyClient service, and returns a pointer to an
 * ListIPSetsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
ListIPSetsResponse * GuardDutyClient::listIPSets(const ListIPSetsRequest &request)
{
    return qobject_cast<ListIPSetsResponse *>(send(request));
}

/*!
 * Sends \a request to the GuardDutyClient service, and returns a pointer to an
 * ListInvitationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
ListInvitationsResponse * GuardDutyClient::listInvitations(const ListInvitationsRequest &request)
{
    return qobject_cast<ListInvitationsResponse *>(send(request));
}

/*!
 * Sends \a request to the GuardDutyClient service, and returns a pointer to an
 * ListMembersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
ListMembersResponse * GuardDutyClient::listMembers(const ListMembersRequest &request)
{
    return qobject_cast<ListMembersResponse *>(send(request));
}

/*!
 * Sends \a request to the GuardDutyClient service, and returns a pointer to an
 * ListThreatIntelSetsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
ListThreatIntelSetsResponse * GuardDutyClient::listThreatIntelSets(const ListThreatIntelSetsRequest &request)
{
    return qobject_cast<ListThreatIntelSetsResponse *>(send(request));
}

/*!
 * Sends \a request to the GuardDutyClient service, and returns a pointer to an
 * StartMonitoringMembersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Re-enables GuardDuty to monitor findings of the member accounts specified by the account IDs. A master GuardDuty account
 */
StartMonitoringMembersResponse * GuardDutyClient::startMonitoringMembers(const StartMonitoringMembersRequest &request)
{
    return qobject_cast<StartMonitoringMembersResponse *>(send(request));
}

/*!
 * Sends \a request to the GuardDutyClient service, and returns a pointer to an
 * StopMonitoringMembersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disables GuardDuty from monitoring findings of the member accounts specified by the account IDs. After running this
 * command, a master GuardDuty account can run StartMonitoringMembers to re-enable GuardDuty to monitor these members'
 */
StopMonitoringMembersResponse * GuardDutyClient::stopMonitoringMembers(const StopMonitoringMembersRequest &request)
{
    return qobject_cast<StopMonitoringMembersResponse *>(send(request));
}

/*!
 * Sends \a request to the GuardDutyClient service, and returns a pointer to an
 * UnarchiveFindingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
UnarchiveFindingsResponse * GuardDutyClient::unarchiveFindings(const UnarchiveFindingsRequest &request)
{
    return qobject_cast<UnarchiveFindingsResponse *>(send(request));
}

/*!
 * Sends \a request to the GuardDutyClient service, and returns a pointer to an
 * UpdateDetectorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
UpdateDetectorResponse * GuardDutyClient::updateDetector(const UpdateDetectorRequest &request)
{
    return qobject_cast<UpdateDetectorResponse *>(send(request));
}

/*!
 * Sends \a request to the GuardDutyClient service, and returns a pointer to an
 * UpdateFindingsFeedbackResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
UpdateFindingsFeedbackResponse * GuardDutyClient::updateFindingsFeedback(const UpdateFindingsFeedbackRequest &request)
{
    return qobject_cast<UpdateFindingsFeedbackResponse *>(send(request));
}

/*!
 * Sends \a request to the GuardDutyClient service, and returns a pointer to an
 * UpdateIPSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
UpdateIPSetResponse * GuardDutyClient::updateIPSet(const UpdateIPSetRequest &request)
{
    return qobject_cast<UpdateIPSetResponse *>(send(request));
}

/*!
 * Sends \a request to the GuardDutyClient service, and returns a pointer to an
 * UpdateThreatIntelSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
UpdateThreatIntelSetResponse * GuardDutyClient::updateThreatIntelSet(const UpdateThreatIntelSetRequest &request)
{
    return qobject_cast<UpdateThreatIntelSetResponse *>(send(request));
}

/*!
 * \class QtAws::GuardDuty::GuardDutyClientPrivate
 * \brief The GuardDutyClientPrivate class provides private implementation for GuardDutyClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsGuardDuty
 */

/*!
 * Constructs a GuardDutyClientPrivate object with public implementation \a q.
 */
GuardDutyClientPrivate::GuardDutyClientPrivate(GuardDutyClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace GuardDuty
} // namespace QtAws
