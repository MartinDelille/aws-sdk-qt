/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_DESCRIBESUBSCRIPTIONFILTERSREQUEST_P_H
#define QTAWS_DESCRIBESUBSCRIPTIONFILTERSREQUEST_P_H

#include "cloudwatchlogs_p.h"
#include "describesubscriptionfiltersrequest.h"

namespace AWS {

namespace CloudWatchLogs {

class DescribeSubscriptionFiltersRequest;

class QTAWS_EXPORT DescribeSubscriptionFiltersRequestPrivate : public CloudWatchLogsPrivate {

public:
    DescribeSubscriptionFiltersRequestPrivate(const CloudWatchLogs::Action action,
                                   DescribeSubscriptionFiltersRequest * const q);
    DescribeSubscriptionFiltersRequestPrivate(const DescribeSubscriptionFiltersRequestPrivate &other,
                                   DescribeSubscriptionFiltersRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeSubscriptionFiltersRequest)

};

} // namespace CloudWatchLogs
} // namespace AWS

#endif