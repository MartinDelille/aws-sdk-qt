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

#ifndef QTAWS_DESCRIBETARGETGROUPSREQUEST_P_H
#define QTAWS_DESCRIBETARGETGROUPSREQUEST_P_H

#include "elasticloadbalancingv2_p.h"
#include "describetargetgroupsrequest.h"

namespace AWS {

namespace ElasticLoadBalancingv2 {

class DescribeTargetGroupsRequest;

class QTAWS_EXPORT DescribeTargetGroupsRequestPrivate : public ElasticLoadBalancingv2Private {

public:
    DescribeTargetGroupsRequestPrivate(const ElasticLoadBalancingv2::Action action,
                                   DescribeTargetGroupsRequest * const q);
    DescribeTargetGroupsRequestPrivate(const DescribeTargetGroupsRequestPrivate &other,
                                   DescribeTargetGroupsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeTargetGroupsRequest)

};

} // namespace ElasticLoadBalancingv2
} // namespace AWS

#endif