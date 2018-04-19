/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "firehoseclient.h"
#include "firehoseclient_p.h"

#include "core/awssignaturev4.h"
#include "createdeliverystreamrequest.h"
#include "createdeliverystreamresponse.h"
#include "deletedeliverystreamrequest.h"
#include "deletedeliverystreamresponse.h"
#include "describedeliverystreamrequest.h"
#include "describedeliverystreamresponse.h"
#include "listdeliverystreamsrequest.h"
#include "listdeliverystreamsresponse.h"
#include "putrecordrequest.h"
#include "putrecordresponse.h"
#include "putrecordbatchrequest.h"
#include "putrecordbatchresponse.h"
#include "updatedestinationrequest.h"
#include "updatedestinationresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::Firehose
 * \brief The QtAws::Firehose contains stuff...
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace Firehose {

/*!
 * \class QtAws::Firehose::FirehoseClient
 * \brief The FirehoseClient class provides access to the Amazon Kinesis Firehose service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsFirehose
 *
 *  <fullname>Amazon Kinesis Firehose API Reference</fullname>
 * 
 *  Amazon Kinesis Firehose is a fully managed service that delivers real-time streaming data to destinations such as Amazon
 *  Simple Storage Service (Amazon S3), Amazon Elasticsearch Service (Amazon ES), and Amazon
 */

/*!
 * \brief Constructs a FirehoseClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
FirehoseClient::FirehoseClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new FirehoseClientPrivate(this), parent)
{
    Q_D(FirehoseClient);
    d->apiVersion = QStringLiteral("2015-08-04");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("firehose");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon Kinesis Firehose");
    d->serviceName = QStringLiteral("firehose");
}

/*!
 * \overload FirehoseClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \a  AwsEndpoint::getEndpoint()
 */
FirehoseClient::FirehoseClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new FirehoseClientPrivate(this), parent)
{
    Q_D(FirehoseClient);
    d->apiVersion = QStringLiteral("2015-08-04");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("firehose");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon Kinesis Firehose");
    d->serviceName = QStringLiteral("firehose");
}

/*!
 * Sends \a request to the FirehoseClient service, and returns a pointer to an
 * CreateDeliveryStreamResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a delivery
 *
 * stream>
 *
 * By default, you can create up to 20 delivery streams per
 *
 * region>
 *
 * This is an asynchronous operation that immediately returns. The initial status of the delivery stream is
 * <code>CREATING</code>. After the delivery stream is created, its status is <code>ACTIVE</code> and it now accepts data.
 * Attempts to send data to a delivery stream that is not in the <code>ACTIVE</code> state cause an exception. To check the
 * state of a delivery stream, use
 *
 * <a>DescribeDeliveryStream</a>>
 *
 * A Kinesis Firehose delivery stream can be configured to receive records directly from providers using <a>PutRecord</a>
 * or <a>PutRecordBatch</a>, or it can be configured to use an existing Kinesis stream as its source. To specify a Kinesis
 * stream as input, set the <code>DeliveryStreamType</code> parameter to <code>KinesisStreamAsSource</code>, and provide
 * the Kinesis stream ARN and role ARN in the <code>KinesisStreamSourceConfiguration</code>
 *
 * parameter>
 *
 * A delivery stream is configured with a single destination: Amazon S3, Amazon ES, or Amazon Redshift. You must specify
 * only one of the following destination configuration parameters: <b>ExtendedS3DestinationConfiguration</b>,
 * <b>S3DestinationConfiguration</b>, <b>ElasticsearchDestinationConfiguration</b>, or
 *
 * <b>RedshiftDestinationConfiguration</b>>
 *
 * When you specify <b>S3DestinationConfiguration</b>, you can also provide the following optional values:
 * <b>BufferingHints</b>, <b>EncryptionConfiguration</b>, and <b>CompressionFormat</b>. By default, if no
 * <b>BufferingHints</b> value is provided, Kinesis Firehose buffers data up to 5 MB or for 5 minutes, whichever condition
 * is satisfied first. Note that <b>BufferingHints</b> is a hint, so there are some cases where the service cannot adhere
 * to these conditions strictly; for example, record boundaries are such that the size is a little over or under the
 * configured buffering size. By default, no encryption is performed. We strongly recommend that you enable encryption to
 * ensure secure data storage in Amazon
 *
 * S3>
 *
 * A few notes about Amazon Redshift as a
 *
 * destination> <ul> <li>
 *
 * An Amazon Redshift destination requires an S3 bucket as intermediate location, as Kinesis Firehose first delivers data
 * to S3 and then uses <code>COPY</code> syntax to load data into an Amazon Redshift table. This is specified in the
 * <b>RedshiftDestinationConfiguration.S3Configuration</b>
 *
 * parameter> </li> <li>
 *
 * The compression formats <code>SNAPPY</code> or <code>ZIP</code> cannot be specified in
 * <b>RedshiftDestinationConfiguration.S3Configuration</b> because the Amazon Redshift <code>COPY</code> operation that
 * reads from the S3 bucket doesn't support these compression
 *
 * formats> </li> <li>
 *
 * We strongly recommend that you use the user name and password you provide exclusively with Kinesis Firehose, and that
 * the permissions for the account are restricted for Amazon Redshift <code>INSERT</code>
 *
 * permissions> </li> </ul>
 *
 * Kinesis Firehose assumes the IAM role that is configured as part of the destination. The role should allow the Kinesis
 * Firehose principal to assume the role, and the role should have permissions that allow the service to deliver the data.
 * For more information, see <a
 * href="http://docs.aws.amazon.com/firehose/latest/dev/controlling-access.html#using-iam-s3">Amazon S3 Bucket Access</a>
 * in the <i>Amazon Kinesis Firehose Developer
 */
CreateDeliveryStreamResponse * FirehoseClient::createDeliveryStream(const CreateDeliveryStreamRequest &request)
{
    return qobject_cast<CreateDeliveryStreamResponse *>(send(request));
}

/*!
 * Sends \a request to the FirehoseClient service, and returns a pointer to an
 * DeleteDeliveryStreamResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a delivery stream and its
 *
 * data>
 *
 * You can delete a delivery stream only if it is in <code>ACTIVE</code> or <code>DELETING</code> state, and not in the
 * <code>CREATING</code> state. While the deletion request is in process, the delivery stream is in the
 * <code>DELETING</code>
 *
 * state>
 *
 * To check the state of a delivery stream, use
 *
 * <a>DescribeDeliveryStream</a>>
 *
 * While the delivery stream is <code>DELETING</code> state, the service may continue to accept the records, but the
 * service doesn't make any guarantees with respect to delivering the data. Therefore, as a best practice, you should first
 * stop any applications that are sending records before deleting a delivery
 */
DeleteDeliveryStreamResponse * FirehoseClient::deleteDeliveryStream(const DeleteDeliveryStreamRequest &request)
{
    return qobject_cast<DeleteDeliveryStreamResponse *>(send(request));
}

/*!
 * Sends \a request to the FirehoseClient service, and returns a pointer to an
 * DescribeDeliveryStreamResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the specified delivery stream and gets the status. For example, after your delivery stream is created, call
 * <a>DescribeDeliveryStream</a> to see if the delivery stream is <code>ACTIVE</code> and therefore ready for data to be
 * sent to
 */
DescribeDeliveryStreamResponse * FirehoseClient::describeDeliveryStream(const DescribeDeliveryStreamRequest &request)
{
    return qobject_cast<DescribeDeliveryStreamResponse *>(send(request));
}

/*!
 * Sends \a request to the FirehoseClient service, and returns a pointer to an
 * ListDeliveryStreamsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists your delivery
 *
 * streams>
 *
 * The number of delivery streams might be too large to return using a single call to <a>ListDeliveryStreams</a>. You can
 * limit the number of delivery streams returned, using the <b>Limit</b> parameter. To determine whether there are more
 * delivery streams to list, check the value of <b>HasMoreDeliveryStreams</b> in the output. If there are more delivery
 * streams to list, you can request them by specifying the name of the last delivery stream returned in the call in the
 * <b>ExclusiveStartDeliveryStreamName</b> parameter of a subsequent
 */
ListDeliveryStreamsResponse * FirehoseClient::listDeliveryStreams(const ListDeliveryStreamsRequest &request)
{
    return qobject_cast<ListDeliveryStreamsResponse *>(send(request));
}

/*!
 * Sends \a request to the FirehoseClient service, and returns a pointer to an
 * PutRecordResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Writes a single data record into an Amazon Kinesis Firehose delivery stream. To write multiple data records into a
 * delivery stream, use <a>PutRecordBatch</a>. Applications using these operations are referred to as
 *
 * producers>
 *
 * By default, each delivery stream can take in up to 2,000 transactions per second, 5,000 records per second, or 5 MB per
 * second. Note that if you use <a>PutRecord</a> and <a>PutRecordBatch</a>, the limits are an aggregate across these two
 * operations for each delivery stream. For more information about limits and how to request an increase, see <a
 * href="http://docs.aws.amazon.com/firehose/latest/dev/limits.html">Amazon Kinesis Firehose Limits</a>.
 *
 * </p
 *
 * You must specify the name of the delivery stream and the data record when using <a>PutRecord</a>. The data record
 * consists of a data blob that can be up to 1,000 KB in size, and any kind of data, for example, a segment from a log
 * file, geographic location data, website clickstream data, and so
 *
 * on>
 *
 * Kinesis Firehose buffers records before delivering them to the destination. To disambiguate the data blobs at the
 * destination, a common solution is to use delimiters in the data, such as a newline (<code>\n</code>) or some other
 * character unique within the data. This allows the consumer application to parse individual data items when reading the
 * data from the
 *
 * destination>
 *
 * The <a>PutRecord</a> operation returns a <b>RecordId</b>, which is a unique string assigned to each record. Producer
 * applications can use this ID for purposes such as auditability and
 *
 * investigation>
 *
 * If the <a>PutRecord</a> operation throws a <b>ServiceUnavailableException</b>, back off and retry. If the exception
 * persists, it is possible that the throughput limits have been exceeded for the delivery stream.
 *
 * </p
 *
 * Data records sent to Kinesis Firehose are stored for 24 hours from the time they are added to a delivery stream as it
 * attempts to send the records to the destination. If the destination is unreachable for more than 24 hours, the data is
 * no longer
 */
PutRecordResponse * FirehoseClient::putRecord(const PutRecordRequest &request)
{
    return qobject_cast<PutRecordResponse *>(send(request));
}

/*!
 * Sends \a request to the FirehoseClient service, and returns a pointer to an
 * PutRecordBatchResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Writes multiple data records into a delivery stream in a single call, which can achieve higher throughput per producer
 * than when writing single records. To write single data records into a delivery stream, use <a>PutRecord</a>.
 * Applications using these operations are referred to as
 *
 * producers>
 *
 * By default, each delivery stream can take in up to 2,000 transactions per second, 5,000 records per second, or 5 MB per
 * second. If you use <a>PutRecord</a> and <a>PutRecordBatch</a>, the limits are an aggregate across these two operations
 * for each delivery stream. For more information about limits, see <a
 * href="http://docs.aws.amazon.com/firehose/latest/dev/limits.html">Amazon Kinesis Firehose
 *
 * Limits</a>>
 *
 * Each <a>PutRecordBatch</a> request supports up to 500 records. Each record in the request can be as large as 1,000 KB
 * (before 64-bit encoding), up to a limit of 4 MB for the entire request. These limits cannot be
 *
 * changed>
 *
 * You must specify the name of the delivery stream and the data record when using <a>PutRecord</a>. The data record
 * consists of a data blob that can be up to 1,000 KB in size, and any kind of data. For example, it could be a segment
 * from a log file, geographic location data, web site clickstream data, and so
 *
 * on>
 *
 * Kinesis Firehose buffers records before delivering them to the destination. To disambiguate the data blobs at the
 * destination, a common solution is to use delimiters in the data, such as a newline (<code>\n</code>) or some other
 * character unique within the data. This allows the consumer application to parse individual data items when reading the
 * data from the
 *
 * destination>
 *
 * The <a>PutRecordBatch</a> response includes a count of failed records, <b>FailedPutCount</b>, and an array of responses,
 * <b>RequestResponses</b>. Each entry in the <b>RequestResponses</b> array provides additional information about the
 * processed record. It directly correlates with a record in the request array using the same ordering, from the top to the
 * bottom. The response array always includes the same number of records as the request array. <b>RequestResponses</b>
 * includes both successfully and unsuccessfully processed records. Kinesis Firehose attempts to process all records in
 * each <a>PutRecordBatch</a> request. A single record failure does not stop the processing of subsequent
 *
 * records>
 *
 * A successfully processed record includes a <b>RecordId</b> value, which is unique for the record. An unsuccessfully
 * processed record includes <b>ErrorCode</b> and <b>ErrorMessage</b> values. <b>ErrorCode</b> reflects the type of error,
 * and is one of the following values: <code>ServiceUnavailable</code> or <code>InternalFailure</code>. <b>ErrorMessage</b>
 * provides more detailed information about the
 *
 * error>
 *
 * If there is an internal server error or a timeout, the write might have completed or it might have failed. If
 * <b>FailedPutCount</b> is greater than 0, retry the request, resending only those records that might have failed
 * processing. This minimizes the possible duplicate records and also reduces the total bytes sent (and corresponding
 * charges). We recommend that you handle any duplicates at the
 *
 * destination>
 *
 * If <a>PutRecordBatch</a> throws <b>ServiceUnavailableException</b>, back off and retry. If the exception persists, it is
 * possible that the throughput limits have been exceeded for the delivery
 *
 * stream>
 *
 * Data records sent to Kinesis Firehose are stored for 24 hours from the time they are added to a delivery stream as it
 * attempts to send the records to the destination. If the destination is unreachable for more than 24 hours, the data is
 * no longer
 */
PutRecordBatchResponse * FirehoseClient::putRecordBatch(const PutRecordBatchRequest &request)
{
    return qobject_cast<PutRecordBatchResponse *>(send(request));
}

/*!
 * Sends \a request to the FirehoseClient service, and returns a pointer to an
 * UpdateDestinationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the specified destination of the specified delivery
 *
 * stream>
 *
 * You can use this operation to change the destination type (for example, to replace the Amazon S3 destination with Amazon
 * Redshift) or change the parameters associated with a destination (for example, to change the bucket name of the Amazon
 * S3 destination). The update might not occur immediately. The target delivery stream remains active while the
 * configurations are updated, so data writes to the delivery stream can continue during this process. The updated
 * configurations are usually effective within a few
 *
 * minutes>
 *
 * Note that switching between Amazon ES and other services is not supported. For an Amazon ES destination, you can only
 * update to another Amazon ES
 *
 * destination>
 *
 * If the destination type is the same, Kinesis Firehose merges the configuration parameters specified with the destination
 * configuration that already exists on the delivery stream. If any of the parameters are not specified in the call, the
 * existing values are retained. For example, in the Amazon S3 destination, if <a>EncryptionConfiguration</a> is not
 * specified, then the existing <a>EncryptionConfiguration</a> is maintained on the
 *
 * destination>
 *
 * If the destination type is not the same, for example, changing the destination from Amazon S3 to Amazon Redshift,
 * Kinesis Firehose does not merge any parameters. In this case, all parameters must be
 *
 * specified>
 *
 * Kinesis Firehose uses <b>CurrentDeliveryStreamVersionId</b> to avoid race conditions and conflicting merges. This is a
 * required field, and the service updates the configuration only if the existing configuration has a version ID that
 * matches. After the update is applied successfully, the version ID is updated, and can be retrieved using
 * <a>DescribeDeliveryStream</a>. Use the new version ID to set <b>CurrentDeliveryStreamVersionId</b> in the next
 */
UpdateDestinationResponse * FirehoseClient::updateDestination(const UpdateDestinationRequest &request)
{
    return qobject_cast<UpdateDestinationResponse *>(send(request));
}

/*!
 * \class QtAws::Firehose::FirehoseClientPrivate
 * \brief The FirehoseClientPrivate class provides private implementation for FirehoseClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsFirehose
 */

/*!
 * Constructs a FirehoseClientPrivate object with public implementation \a q.
 */
FirehoseClientPrivate::FirehoseClientPrivate(FirehoseClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace Firehose
} // namespace QtAws
