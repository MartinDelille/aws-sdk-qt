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

#ifndef QTAWS_DESCRIBETRAILSREQUEST_P_H
#define QTAWS_DESCRIBETRAILSREQUEST_P_H

#include "cloudtrail_p.h"
#include "describetrailsrequest.h"

namespace AWS {

namespace CloudTrail {

class DescribeTrailsRequest;

class QTAWS_EXPORT DescribeTrailsRequestPrivate : public CloudTrailPrivate {

public:
    DescribeTrailsRequestPrivate(const CloudTrail::Action action,
                                   DescribeTrailsRequest * const q);
    DescribeTrailsRequestPrivate(const DescribeTrailsRequestPrivate &other,
                                   DescribeTrailsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeTrailsRequest)

};

} // namespace CloudTrail
} // namespace AWS

#endif
