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

#ifndef QTAWS_CREATEPIPELINEREQUEST_P_H
#define QTAWS_CREATEPIPELINEREQUEST_P_H

#include "iotanalyticsrequest_p.h"
#include "createpipelinerequest.h"

namespace QtAws {
namespace IoTAnalytics {

class CreatePipelineRequest;

class QTAWS_EXPORT CreatePipelineRequestPrivate : public IoTAnalyticsRequestPrivate {

public:
    CreatePipelineRequestPrivate(const IoTAnalyticsRequest::Action action,
                                   CreatePipelineRequest * const q);
    CreatePipelineRequestPrivate(const CreatePipelineRequestPrivate &other,
                                   CreatePipelineRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreatePipelineRequest)

};

} // namespace IoTAnalytics
} // namespace QtAws

#endif