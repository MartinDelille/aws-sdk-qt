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

#ifndef QTAWS_COMPREHENDCLIENT_H
#define QTAWS_COMPREHENDCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace Comprehend {

class ComprehendClientPrivate;
class BatchDetectDominantLanguageRequest;
class BatchDetectDominantLanguageResponse;
class BatchDetectEntitiesRequest;
class BatchDetectEntitiesResponse;
class BatchDetectKeyPhrasesRequest;
class BatchDetectKeyPhrasesResponse;
class BatchDetectSentimentRequest;
class BatchDetectSentimentResponse;
class BatchDetectSyntaxRequest;
class BatchDetectSyntaxResponse;
class DescribeDominantLanguageDetectionJobRequest;
class DescribeDominantLanguageDetectionJobResponse;
class DescribeEntitiesDetectionJobRequest;
class DescribeEntitiesDetectionJobResponse;
class DescribeKeyPhrasesDetectionJobRequest;
class DescribeKeyPhrasesDetectionJobResponse;
class DescribeSentimentDetectionJobRequest;
class DescribeSentimentDetectionJobResponse;
class DescribeTopicsDetectionJobRequest;
class DescribeTopicsDetectionJobResponse;
class DetectDominantLanguageRequest;
class DetectDominantLanguageResponse;
class DetectEntitiesRequest;
class DetectEntitiesResponse;
class DetectKeyPhrasesRequest;
class DetectKeyPhrasesResponse;
class DetectSentimentRequest;
class DetectSentimentResponse;
class DetectSyntaxRequest;
class DetectSyntaxResponse;
class ListDominantLanguageDetectionJobsRequest;
class ListDominantLanguageDetectionJobsResponse;
class ListEntitiesDetectionJobsRequest;
class ListEntitiesDetectionJobsResponse;
class ListKeyPhrasesDetectionJobsRequest;
class ListKeyPhrasesDetectionJobsResponse;
class ListSentimentDetectionJobsRequest;
class ListSentimentDetectionJobsResponse;
class ListTopicsDetectionJobsRequest;
class ListTopicsDetectionJobsResponse;
class StartDominantLanguageDetectionJobRequest;
class StartDominantLanguageDetectionJobResponse;
class StartEntitiesDetectionJobRequest;
class StartEntitiesDetectionJobResponse;
class StartKeyPhrasesDetectionJobRequest;
class StartKeyPhrasesDetectionJobResponse;
class StartSentimentDetectionJobRequest;
class StartSentimentDetectionJobResponse;
class StartTopicsDetectionJobRequest;
class StartTopicsDetectionJobResponse;
class StopDominantLanguageDetectionJobRequest;
class StopDominantLanguageDetectionJobResponse;
class StopEntitiesDetectionJobRequest;
class StopEntitiesDetectionJobResponse;
class StopKeyPhrasesDetectionJobRequest;
class StopKeyPhrasesDetectionJobResponse;
class StopSentimentDetectionJobRequest;
class StopSentimentDetectionJobResponse;

class QTAWS_EXPORT ComprehendClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    ComprehendClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    ComprehendClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    BatchDetectDominantLanguageResponse * batchDetectDominantLanguage(const BatchDetectDominantLanguageRequest &request);
    BatchDetectEntitiesResponse * batchDetectEntities(const BatchDetectEntitiesRequest &request);
    BatchDetectKeyPhrasesResponse * batchDetectKeyPhrases(const BatchDetectKeyPhrasesRequest &request);
    BatchDetectSentimentResponse * batchDetectSentiment(const BatchDetectSentimentRequest &request);
    BatchDetectSyntaxResponse * batchDetectSyntax(const BatchDetectSyntaxRequest &request);
    DescribeDominantLanguageDetectionJobResponse * describeDominantLanguageDetectionJob(const DescribeDominantLanguageDetectionJobRequest &request);
    DescribeEntitiesDetectionJobResponse * describeEntitiesDetectionJob(const DescribeEntitiesDetectionJobRequest &request);
    DescribeKeyPhrasesDetectionJobResponse * describeKeyPhrasesDetectionJob(const DescribeKeyPhrasesDetectionJobRequest &request);
    DescribeSentimentDetectionJobResponse * describeSentimentDetectionJob(const DescribeSentimentDetectionJobRequest &request);
    DescribeTopicsDetectionJobResponse * describeTopicsDetectionJob(const DescribeTopicsDetectionJobRequest &request);
    DetectDominantLanguageResponse * detectDominantLanguage(const DetectDominantLanguageRequest &request);
    DetectEntitiesResponse * detectEntities(const DetectEntitiesRequest &request);
    DetectKeyPhrasesResponse * detectKeyPhrases(const DetectKeyPhrasesRequest &request);
    DetectSentimentResponse * detectSentiment(const DetectSentimentRequest &request);
    DetectSyntaxResponse * detectSyntax(const DetectSyntaxRequest &request);
    ListDominantLanguageDetectionJobsResponse * listDominantLanguageDetectionJobs(const ListDominantLanguageDetectionJobsRequest &request);
    ListEntitiesDetectionJobsResponse * listEntitiesDetectionJobs(const ListEntitiesDetectionJobsRequest &request);
    ListKeyPhrasesDetectionJobsResponse * listKeyPhrasesDetectionJobs(const ListKeyPhrasesDetectionJobsRequest &request);
    ListSentimentDetectionJobsResponse * listSentimentDetectionJobs(const ListSentimentDetectionJobsRequest &request);
    ListTopicsDetectionJobsResponse * listTopicsDetectionJobs(const ListTopicsDetectionJobsRequest &request);
    StartDominantLanguageDetectionJobResponse * startDominantLanguageDetectionJob(const StartDominantLanguageDetectionJobRequest &request);
    StartEntitiesDetectionJobResponse * startEntitiesDetectionJob(const StartEntitiesDetectionJobRequest &request);
    StartKeyPhrasesDetectionJobResponse * startKeyPhrasesDetectionJob(const StartKeyPhrasesDetectionJobRequest &request);
    StartSentimentDetectionJobResponse * startSentimentDetectionJob(const StartSentimentDetectionJobRequest &request);
    StartTopicsDetectionJobResponse * startTopicsDetectionJob(const StartTopicsDetectionJobRequest &request);
    StopDominantLanguageDetectionJobResponse * stopDominantLanguageDetectionJob(const StopDominantLanguageDetectionJobRequest &request);
    StopEntitiesDetectionJobResponse * stopEntitiesDetectionJob(const StopEntitiesDetectionJobRequest &request);
    StopKeyPhrasesDetectionJobResponse * stopKeyPhrasesDetectionJob(const StopKeyPhrasesDetectionJobRequest &request);
    StopSentimentDetectionJobResponse * stopSentimentDetectionJob(const StopSentimentDetectionJobRequest &request);

private:
    Q_DECLARE_PRIVATE(ComprehendClient)
    Q_DISABLE_COPY(ComprehendClient)

};

} // namespace Comprehend
} // namespace QtAws

#endif
