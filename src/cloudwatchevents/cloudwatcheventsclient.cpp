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

#include "cloudwatcheventsclient.h"
#include "cloudwatcheventsclient_p.h"

#include "core/awssignaturev4.h"
#include "deleterulerequest.h"
#include "deleteruleresponse.h"
#include "describeeventbusrequest.h"
#include "describeeventbusresponse.h"
#include "describerulerequest.h"
#include "describeruleresponse.h"
#include "disablerulerequest.h"
#include "disableruleresponse.h"
#include "enablerulerequest.h"
#include "enableruleresponse.h"
#include "listrulenamesbytargetrequest.h"
#include "listrulenamesbytargetresponse.h"
#include "listrulesrequest.h"
#include "listrulesresponse.h"
#include "listtargetsbyrulerequest.h"
#include "listtargetsbyruleresponse.h"
#include "puteventsrequest.h"
#include "puteventsresponse.h"
#include "putpermissionrequest.h"
#include "putpermissionresponse.h"
#include "putrulerequest.h"
#include "putruleresponse.h"
#include "puttargetsrequest.h"
#include "puttargetsresponse.h"
#include "removepermissionrequest.h"
#include "removepermissionresponse.h"
#include "removetargetsrequest.h"
#include "removetargetsresponse.h"
#include "testeventpatternrequest.h"
#include "testeventpatternresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::CloudWatchEvents
 * \brief Contains classess for accessing Amazon CloudWatch Events.
 *
 * \inmodule QtAwsCloudWatchEvents
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace CloudWatchEvents {

/*!
 * \class QtAws::CloudWatchEvents::CloudWatchEventsClient
 * \brief The CloudWatchEventsClient class provides access to the Amazon CloudWatch Events service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsCloudWatchEvents
 *
 *  Amazon CloudWatch Events helps you to respond to state changes in your AWS resources. When your resources change state,
 *  they automatically send events into an event stream. You can create rules that match selected events in the stream and
 *  route them to targets to take action. You can also use rules to take action on a predetermined schedule. For example,
 *  you can configure rules
 * 
 *  to> <ul> <li>
 * 
 *  Automatically invoke an AWS Lambda function to update DNS entries when an event notifies you that Amazon EC2 instance
 *  enters the running
 * 
 *  state> </li> <li>
 * 
 *  Direct specific API records from AWS CloudTrail to an Amazon Kinesis data stream for detailed analysis of potential
 *  security or availability
 * 
 *  risks> </li> <li>
 * 
 *  Periodically invoke a built-in target to create a snapshot of an Amazon EBS
 * 
 *  volume> </li> </ul>
 * 
 *  For more information about the features of Amazon CloudWatch Events, see the <a
 *  href="http://docs.aws.amazon.com/AmazonCloudWatch/latest/events">Amazon CloudWatch Events User
 */

/*!
 * \brief Constructs a CloudWatchEventsClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
CloudWatchEventsClient::CloudWatchEventsClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new CloudWatchEventsClientPrivate(this), parent)
{
    Q_D(CloudWatchEventsClient);
    d->apiVersion = QStringLiteral("2015-10-07");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("events");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon CloudWatch Events");
    d->serviceName = QStringLiteral("events");
}

/*!
 * \overload CloudWatchEventsClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
CloudWatchEventsClient::CloudWatchEventsClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new CloudWatchEventsClientPrivate(this), parent)
{
    Q_D(CloudWatchEventsClient);
    d->apiVersion = QStringLiteral("2015-10-07");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("events");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon CloudWatch Events");
    d->serviceName = QStringLiteral("events");
}

/*!
 * Sends \a request to the CloudWatchEventsClient service, and returns a pointer to an
 * DeleteRuleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified
 *
 * rule>
 *
 * Before you can delete the rule, you must remove all targets, using
 *
 * <a>RemoveTargets</a>>
 *
 * When you delete a rule, incoming events might continue to match to the deleted rule. Allow a short period of time for
 * changes to take
 *
 * effect>
 *
 * Managed rules are rules created and managed by another AWS service on your behalf. These rules are created by those
 * other AWS services to support functionality in those services. You can delete these rules using the <code>Force</code>
 * option, but you should do so only if you are sure the other service is not still using that
 */
DeleteRuleResponse * CloudWatchEventsClient::deleteRule(const DeleteRuleRequest &request)
{
    return qobject_cast<DeleteRuleResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchEventsClient service, and returns a pointer to an
 * DescribeEventBusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Displays the external AWS accounts that are permitted to write events to your account using your account's event bus,
 * and the associated policy. To enable your account to receive events from other accounts, use
 */
DescribeEventBusResponse * CloudWatchEventsClient::describeEventBus(const DescribeEventBusRequest &request)
{
    return qobject_cast<DescribeEventBusResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchEventsClient service, and returns a pointer to an
 * DescribeRuleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the specified
 *
 * rule>
 *
 * DescribeRule does not list the targets of a rule. To see the targets associated with a rule, use
 */
DescribeRuleResponse * CloudWatchEventsClient::describeRule(const DescribeRuleRequest &request)
{
    return qobject_cast<DescribeRuleResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchEventsClient service, and returns a pointer to an
 * DisableRuleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disables the specified rule. A disabled rule won't match any events, and won't self-trigger if it has a schedule
 *
 * expression>
 *
 * When you disable a rule, incoming events might continue to match to the disabled rule. Allow a short period of time for
 * changes to take
 */
DisableRuleResponse * CloudWatchEventsClient::disableRule(const DisableRuleRequest &request)
{
    return qobject_cast<DisableRuleResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchEventsClient service, and returns a pointer to an
 * EnableRuleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Enables the specified rule. If the rule does not exist, the operation
 *
 * fails>
 *
 * When you enable a rule, incoming events might not immediately start matching to a newly enabled rule. Allow a short
 * period of time for changes to take
 */
EnableRuleResponse * CloudWatchEventsClient::enableRule(const EnableRuleRequest &request)
{
    return qobject_cast<EnableRuleResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchEventsClient service, and returns a pointer to an
 * ListRuleNamesByTargetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the rules for the specified target. You can see which of the rules in Amazon CloudWatch Events can invoke a
 * specific target in your
 */
ListRuleNamesByTargetResponse * CloudWatchEventsClient::listRuleNamesByTarget(const ListRuleNamesByTargetRequest &request)
{
    return qobject_cast<ListRuleNamesByTargetResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchEventsClient service, and returns a pointer to an
 * ListRulesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists your Amazon CloudWatch Events rules. You can either list all the rules or you can provide a prefix to match to the
 * rule
 *
 * names>
 *
 * ListRules does not list the targets of a rule. To see the targets associated with a rule, use
 */
ListRulesResponse * CloudWatchEventsClient::listRules(const ListRulesRequest &request)
{
    return qobject_cast<ListRulesResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchEventsClient service, and returns a pointer to an
 * ListTargetsByRuleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the targets assigned to the specified
 */
ListTargetsByRuleResponse * CloudWatchEventsClient::listTargetsByRule(const ListTargetsByRuleRequest &request)
{
    return qobject_cast<ListTargetsByRuleResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchEventsClient service, and returns a pointer to an
 * PutEventsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sends custom events to Amazon CloudWatch Events so that they can be matched to
 */
PutEventsResponse * CloudWatchEventsClient::putEvents(const PutEventsRequest &request)
{
    return qobject_cast<PutEventsResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchEventsClient service, and returns a pointer to an
 * PutPermissionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Running <code>PutPermission</code> permits the specified AWS account or AWS organization to put events to your account's
 * default <i>event bus</i>. CloudWatch Events rules in your account are triggered by these events arriving to your default
 * event bus.
 *
 * </p
 *
 * For another account to send events to your account, that external account must have a CloudWatch Events rule with your
 * account's default event bus as a
 *
 * target>
 *
 * To enable multiple AWS accounts to put events to your default event bus, run <code>PutPermission</code> once for each of
 * these accounts. Or, if all the accounts are members of the same AWS organization, you can run <code>PutPermission</code>
 * once specifying <code>Principal</code> as "*" and specifying the AWS organization ID in <code>Condition</code>, to grant
 * permissions to all accounts in that
 *
 * organization>
 *
 * If you grant permissions using an organization, then accounts in that organization must specify a <code>RoleArn</code>
 * with proper permissions when they use <code>PutTarget</code> to add your account's event bus as a target. For more
 * information, see <a
 * href="http://docs.aws.amazon.com/AmazonCloudWatch/latest/events/CloudWatchEvents-CrossAccountEventDelivery.html">Sending
 * and Receiving Events Between AWS Accounts</a> in the <i>Amazon CloudWatch Events User
 *
 * Guide</i>>
 *
 * The permission policy on the default event bus cannot exceed 10 KB in
 */
PutPermissionResponse * CloudWatchEventsClient::putPermission(const PutPermissionRequest &request)
{
    return qobject_cast<PutPermissionResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchEventsClient service, and returns a pointer to an
 * PutRuleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates or updates the specified rule. Rules are enabled by default, or based on value of the state. You can disable a
 * rule using
 *
 * <a>DisableRule</a>>
 *
 * If you are updating an existing rule, the rule is replaced with what you specify in this <code>PutRule</code> command.
 * If you omit arguments in <code>PutRule</code>, the old values for those arguments are not kept. Instead, they are
 * replaced with null
 *
 * values>
 *
 * When you create or update a rule, incoming events might not immediately start matching to new or updated rules. Allow a
 * short period of time for changes to take
 *
 * effect>
 *
 * A rule must contain at least an EventPattern or ScheduleExpression. Rules with EventPatterns are triggered when a
 * matching event is observed. Rules with ScheduleExpressions self-trigger based on the given schedule. A rule can have
 * both an EventPattern and a ScheduleExpression, in which case the rule triggers on matching events as well as on a
 *
 * schedule>
 *
 * Most services in AWS treat : or / as the same character in Amazon Resource Names (ARNs). However, CloudWatch Events uses
 * an exact match in event patterns and rules. Be sure to use the correct ARN characters when creating event patterns so
 * that they match the ARN syntax in the event you want to
 *
 * match>
 *
 * In CloudWatch Events, it is possible to create rules that lead to infinite loops, where a rule is fired repeatedly. For
 * example, a rule might detect that ACLs have changed on an S3 bucket, and trigger software to change them to the desired
 * state. If the rule is not written carefully, the subsequent change to the ACLs fires the rule again, creating an
 * infinite
 *
 * loop>
 *
 * To prevent this, write the rules so that the triggered actions do not re-fire the same rule. For example, your rule
 * could fire only if ACLs are found to be in a bad state, instead of after any change.
 *
 * </p
 *
 * An infinite loop can quickly cause higher than expected charges. We recommend that you use budgeting, which alerts you
 * when charges exceed your specified limit. For more information, see <a
 * href="http://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/budgets-managing-costs.html">Managing Your Costs with
 */
PutRuleResponse * CloudWatchEventsClient::putRule(const PutRuleRequest &request)
{
    return qobject_cast<PutRuleResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchEventsClient service, and returns a pointer to an
 * PutTargetsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds the specified targets to the specified rule, or updates the targets if they are already associated with the
 *
 * rule>
 *
 * Targets are the resources that are invoked when a rule is
 *
 * triggered>
 *
 * You can configure the following as targets for CloudWatch
 *
 * Events> <ul> <li>
 *
 * EC2
 *
 * instance> </li> <li>
 *
 * SSM Run
 *
 * Comman> </li> <li>
 *
 * SSM
 *
 * Automatio> </li> <li>
 *
 * AWS Lambda
 *
 * function> </li> <li>
 *
 * Data streams in Amazon Kinesis Data
 *
 * Stream> </li> <li>
 *
 * Data delivery streams in Amazon Kinesis Data
 *
 * Firehos> </li> <li>
 *
 * Amazon ECS
 *
 * task> </li> <li>
 *
 * AWS Step Functions state
 *
 * machine> </li> <li>
 *
 * AWS Batch
 *
 * job> </li> <li>
 *
 * AWS CodeBuild
 *
 * project> </li> <li>
 *
 * Pipelines in AWS
 *
 * CodePipelin> </li> <li>
 *
 * Amazon Inspector assessment
 *
 * template> </li> <li>
 *
 * Amazon SNS
 *
 * topic> </li> <li>
 *
 * Amazon SQS queues, including FIFO
 *
 * queue> </li> <li>
 *
 * The default event bus of another AWS
 *
 * accoun> </li> </ul>
 *
 * Creating rules with built-in targets is supported only in the AWS Management Console. The built-in targets are <code>EC2
 * CreateSnapshot API call</code>, <code>EC2 RebootInstances API call</code>, <code>EC2 StopInstances API call</code>, and
 * <code>EC2 TerminateInstances API call</code>.
 *
 * </p
 *
 * For some target types, <code>PutTargets</code> provides target-specific parameters. If the target is a Kinesis data
 * stream, you can optionally specify which shard the event goes to by using the <code>KinesisParameters</code> argument.
 * To invoke a command on multiple EC2 instances with one rule, you can use the <code>RunCommandParameters</code>
 *
 * field>
 *
 * To be able to make API calls against the resources that you own, Amazon CloudWatch Events needs the appropriate
 * permissions. For AWS Lambda and Amazon SNS resources, CloudWatch Events relies on resource-based policies. For EC2
 * instances, Kinesis data streams, and AWS Step Functions state machines, CloudWatch Events relies on IAM roles that you
 * specify in the <code>RoleARN</code> argument in <code>PutTargets</code>. For more information, see <a
 * href="http://docs.aws.amazon.com/AmazonCloudWatch/latest/events/auth-and-access-control-cwe.html">Authentication and
 * Access Control</a> in the <i>Amazon CloudWatch Events User
 *
 * Guide</i>>
 *
 * If another AWS account is in the same region and has granted you permission (using <code>PutPermission</code>), you can
 * send events to that account. Set that account's event bus as a target of the rules in your account. To send the matched
 * events to the other account, specify that account's event bus as the <code>Arn</code> value when you run
 * <code>PutTargets</code>. If your account sends events to another account, your account is charged for each sent event.
 * Each event sent to another account is charged as a custom event. The account receiving the event is not charged. For
 * more information, see <a href="https://aws.amazon.com/cloudwatch/pricing/">Amazon CloudWatch
 *
 * Pricing</a>>
 *
 * If you are setting the event bus of another account as the target, and that account granted permission to your account
 * through an organization instead of directly by the account ID, then you must specify a <code>RoleArn</code> with proper
 * permissions in the <code>Target</code> structure. For more information, see <a
 * href="http://docs.aws.amazon.com/AmazonCloudWatch/latest/events/CloudWatchEvents-CrossAccountEventDelivery.html">Sending
 * and Receiving Events Between AWS Accounts</a> in the <i>Amazon CloudWatch Events User
 *
 * Guide</i>>
 *
 * For more information about enabling cross-account events, see
 *
 * <a>PutPermission</a>>
 *
 * <b>Input</b>, <b>InputPath</b>, and <b>InputTransformer</b> are mutually exclusive and optional parameters of a target.
 * When a rule is triggered due to a matched
 *
 * event> <ul> <li>
 *
 * If none of the following arguments are specified for a target, then the entire event is passed to the target in JSON
 * format (unless the target is Amazon EC2 Run Command or Amazon ECS task, in which case nothing from the event is passed
 * to the
 *
 * target)> </li> <li>
 *
 * If <b>Input</b> is specified in the form of valid JSON, then the matched event is overridden with this
 *
 * constant> </li> <li>
 *
 * If <b>InputPath</b> is specified in the form of JSONPath (for example, <code>$.detail</code>), then only the part of the
 * event specified in the path is passed to the target (for example, only the detail part of the event is
 *
 * passed)> </li> <li>
 *
 * If <b>InputTransformer</b> is specified, then one or more specified JSONPaths are extracted from the event and used as
 * values in a template that you specify as the input to the
 *
 * target> </li> </ul>
 *
 * When you specify <code>InputPath</code> or <code>InputTransformer</code>, you must use JSON dot notation, not bracket
 *
 * notation>
 *
 * When you add targets to a rule and the associated rule triggers soon after, new or updated targets might not be
 * immediately invoked. Allow a short period of time for changes to take
 *
 * effect>
 *
 * This action can partially fail if too many requests are made at the same time. If that happens,
 * <code>FailedEntryCount</code> is non-zero in the response and each entry in <code>FailedEntries</code> provides the ID
 * of the failed target and the error
 */
PutTargetsResponse * CloudWatchEventsClient::putTargets(const PutTargetsRequest &request)
{
    return qobject_cast<PutTargetsResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchEventsClient service, and returns a pointer to an
 * RemovePermissionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Revokes the permission of another AWS account to be able to put events to your default event bus. Specify the account to
 * revoke by the <code>StatementId</code> value that you associated with the account when you granted it permission with
 * <code>PutPermission</code>. You can find the <code>StatementId</code> by using
 */
RemovePermissionResponse * CloudWatchEventsClient::removePermission(const RemovePermissionRequest &request)
{
    return qobject_cast<RemovePermissionResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchEventsClient service, and returns a pointer to an
 * RemoveTargetsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the specified targets from the specified rule. When the rule is triggered, those targets are no longer be
 *
 * invoked>
 *
 * When you remove a target, when the associated rule triggers, removed targets might continue to be invoked. Allow a short
 * period of time for changes to take
 *
 * effect>
 *
 * This action can partially fail if too many requests are made at the same time. If that happens,
 * <code>FailedEntryCount</code> is non-zero in the response and each entry in <code>FailedEntries</code> provides the ID
 * of the failed target and the error
 */
RemoveTargetsResponse * CloudWatchEventsClient::removeTargets(const RemoveTargetsRequest &request)
{
    return qobject_cast<RemoveTargetsResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchEventsClient service, and returns a pointer to an
 * TestEventPatternResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Tests whether the specified event pattern matches the provided
 *
 * event>
 *
 * Most services in AWS treat : or / as the same character in Amazon Resource Names (ARNs). However, CloudWatch Events uses
 * an exact match in event patterns and rules. Be sure to use the correct ARN characters when creating event patterns so
 * that they match the ARN syntax in the event you want to
 */
TestEventPatternResponse * CloudWatchEventsClient::testEventPattern(const TestEventPatternRequest &request)
{
    return qobject_cast<TestEventPatternResponse *>(send(request));
}

/*!
 * \class QtAws::CloudWatchEvents::CloudWatchEventsClientPrivate
 * \brief The CloudWatchEventsClientPrivate class provides private implementation for CloudWatchEventsClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsCloudWatchEvents
 */

/*!
 * Constructs a CloudWatchEventsClientPrivate object with public implementation \a q.
 */
CloudWatchEventsClientPrivate::CloudWatchEventsClientPrivate(CloudWatchEventsClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace CloudWatchEvents
} // namespace QtAws
