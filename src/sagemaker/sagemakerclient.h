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

#ifndef QTAWS_SAGEMAKERCLIENT_H
#define QTAWS_SAGEMAKERCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace SageMaker {

class SageMakerClientPrivate;
class AddTagsRequest;
class AddTagsResponse;
class CreateEndpointRequest;
class CreateEndpointResponse;
class CreateEndpointConfigRequest;
class CreateEndpointConfigResponse;
class CreateHyperParameterTuningJobRequest;
class CreateHyperParameterTuningJobResponse;
class CreateModelRequest;
class CreateModelResponse;
class CreateNotebookInstanceRequest;
class CreateNotebookInstanceResponse;
class CreateNotebookInstanceLifecycleConfigRequest;
class CreateNotebookInstanceLifecycleConfigResponse;
class CreatePresignedNotebookInstanceUrlRequest;
class CreatePresignedNotebookInstanceUrlResponse;
class CreateTrainingJobRequest;
class CreateTrainingJobResponse;
class DeleteEndpointRequest;
class DeleteEndpointResponse;
class DeleteEndpointConfigRequest;
class DeleteEndpointConfigResponse;
class DeleteModelRequest;
class DeleteModelResponse;
class DeleteNotebookInstanceRequest;
class DeleteNotebookInstanceResponse;
class DeleteNotebookInstanceLifecycleConfigRequest;
class DeleteNotebookInstanceLifecycleConfigResponse;
class DeleteTagsRequest;
class DeleteTagsResponse;
class DescribeEndpointRequest;
class DescribeEndpointResponse;
class DescribeEndpointConfigRequest;
class DescribeEndpointConfigResponse;
class DescribeHyperParameterTuningJobRequest;
class DescribeHyperParameterTuningJobResponse;
class DescribeModelRequest;
class DescribeModelResponse;
class DescribeNotebookInstanceRequest;
class DescribeNotebookInstanceResponse;
class DescribeNotebookInstanceLifecycleConfigRequest;
class DescribeNotebookInstanceLifecycleConfigResponse;
class DescribeTrainingJobRequest;
class DescribeTrainingJobResponse;
class ListEndpointConfigsRequest;
class ListEndpointConfigsResponse;
class ListEndpointsRequest;
class ListEndpointsResponse;
class ListHyperParameterTuningJobsRequest;
class ListHyperParameterTuningJobsResponse;
class ListModelsRequest;
class ListModelsResponse;
class ListNotebookInstanceLifecycleConfigsRequest;
class ListNotebookInstanceLifecycleConfigsResponse;
class ListNotebookInstancesRequest;
class ListNotebookInstancesResponse;
class ListTagsRequest;
class ListTagsResponse;
class ListTrainingJobsRequest;
class ListTrainingJobsResponse;
class ListTrainingJobsForHyperParameterTuningJobRequest;
class ListTrainingJobsForHyperParameterTuningJobResponse;
class StartNotebookInstanceRequest;
class StartNotebookInstanceResponse;
class StopHyperParameterTuningJobRequest;
class StopHyperParameterTuningJobResponse;
class StopNotebookInstanceRequest;
class StopNotebookInstanceResponse;
class StopTrainingJobRequest;
class StopTrainingJobResponse;
class UpdateEndpointRequest;
class UpdateEndpointResponse;
class UpdateEndpointWeightsAndCapacitiesRequest;
class UpdateEndpointWeightsAndCapacitiesResponse;
class UpdateNotebookInstanceRequest;
class UpdateNotebookInstanceResponse;
class UpdateNotebookInstanceLifecycleConfigRequest;
class UpdateNotebookInstanceLifecycleConfigResponse;

class QTAWS_EXPORT SageMakerClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    SageMakerClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    SageMakerClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AddTagsResponse * addTags(const AddTagsRequest &request);
    CreateEndpointResponse * createEndpoint(const CreateEndpointRequest &request);
    CreateEndpointConfigResponse * createEndpointConfig(const CreateEndpointConfigRequest &request);
    CreateHyperParameterTuningJobResponse * createHyperParameterTuningJob(const CreateHyperParameterTuningJobRequest &request);
    CreateModelResponse * createModel(const CreateModelRequest &request);
    CreateNotebookInstanceResponse * createNotebookInstance(const CreateNotebookInstanceRequest &request);
    CreateNotebookInstanceLifecycleConfigResponse * createNotebookInstanceLifecycleConfig(const CreateNotebookInstanceLifecycleConfigRequest &request);
    CreatePresignedNotebookInstanceUrlResponse * createPresignedNotebookInstanceUrl(const CreatePresignedNotebookInstanceUrlRequest &request);
    CreateTrainingJobResponse * createTrainingJob(const CreateTrainingJobRequest &request);
    DeleteEndpointResponse * deleteEndpoint(const DeleteEndpointRequest &request);
    DeleteEndpointConfigResponse * deleteEndpointConfig(const DeleteEndpointConfigRequest &request);
    DeleteModelResponse * deleteModel(const DeleteModelRequest &request);
    DeleteNotebookInstanceResponse * deleteNotebookInstance(const DeleteNotebookInstanceRequest &request);
    DeleteNotebookInstanceLifecycleConfigResponse * deleteNotebookInstanceLifecycleConfig(const DeleteNotebookInstanceLifecycleConfigRequest &request);
    DeleteTagsResponse * deleteTags(const DeleteTagsRequest &request);
    DescribeEndpointResponse * describeEndpoint(const DescribeEndpointRequest &request);
    DescribeEndpointConfigResponse * describeEndpointConfig(const DescribeEndpointConfigRequest &request);
    DescribeHyperParameterTuningJobResponse * describeHyperParameterTuningJob(const DescribeHyperParameterTuningJobRequest &request);
    DescribeModelResponse * describeModel(const DescribeModelRequest &request);
    DescribeNotebookInstanceResponse * describeNotebookInstance(const DescribeNotebookInstanceRequest &request);
    DescribeNotebookInstanceLifecycleConfigResponse * describeNotebookInstanceLifecycleConfig(const DescribeNotebookInstanceLifecycleConfigRequest &request);
    DescribeTrainingJobResponse * describeTrainingJob(const DescribeTrainingJobRequest &request);
    ListEndpointConfigsResponse * listEndpointConfigs(const ListEndpointConfigsRequest &request);
    ListEndpointsResponse * listEndpoints(const ListEndpointsRequest &request);
    ListHyperParameterTuningJobsResponse * listHyperParameterTuningJobs(const ListHyperParameterTuningJobsRequest &request);
    ListModelsResponse * listModels(const ListModelsRequest &request);
    ListNotebookInstanceLifecycleConfigsResponse * listNotebookInstanceLifecycleConfigs(const ListNotebookInstanceLifecycleConfigsRequest &request);
    ListNotebookInstancesResponse * listNotebookInstances(const ListNotebookInstancesRequest &request);
    ListTagsResponse * listTags(const ListTagsRequest &request);
    ListTrainingJobsResponse * listTrainingJobs(const ListTrainingJobsRequest &request);
    ListTrainingJobsForHyperParameterTuningJobResponse * listTrainingJobsForHyperParameterTuningJob(const ListTrainingJobsForHyperParameterTuningJobRequest &request);
    StartNotebookInstanceResponse * startNotebookInstance(const StartNotebookInstanceRequest &request);
    StopHyperParameterTuningJobResponse * stopHyperParameterTuningJob(const StopHyperParameterTuningJobRequest &request);
    StopNotebookInstanceResponse * stopNotebookInstance(const StopNotebookInstanceRequest &request);
    StopTrainingJobResponse * stopTrainingJob(const StopTrainingJobRequest &request);
    UpdateEndpointResponse * updateEndpoint(const UpdateEndpointRequest &request);
    UpdateEndpointWeightsAndCapacitiesResponse * updateEndpointWeightsAndCapacities(const UpdateEndpointWeightsAndCapacitiesRequest &request);
    UpdateNotebookInstanceResponse * updateNotebookInstance(const UpdateNotebookInstanceRequest &request);
    UpdateNotebookInstanceLifecycleConfigResponse * updateNotebookInstanceLifecycleConfig(const UpdateNotebookInstanceLifecycleConfigRequest &request);

private:
    Q_DECLARE_PRIVATE(SageMakerClient)
    Q_DISABLE_COPY(SageMakerClient)

};

} // namespace SageMaker
} // namespace QtAws

#endif
