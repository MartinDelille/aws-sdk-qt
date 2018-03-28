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

#ifndef QTAWS_DESCRIBESTACKSETOPERATIONREQUEST_P_H
#define QTAWS_DESCRIBESTACKSETOPERATIONREQUEST_P_H

#include "cloudformation_p.h"
#include "describestacksetoperationrequest.h"

namespace AWS {

namespace CloudFormation {

class DescribeStackSetOperationRequest;

class QTAWS_EXPORT DescribeStackSetOperationRequestPrivate : public CloudFormationPrivate {

public:
    DescribeStackSetOperationRequestPrivate(const CloudFormation::Action action,
                                   DescribeStackSetOperationRequest * const q);
    DescribeStackSetOperationRequestPrivate(const DescribeStackSetOperationRequestPrivate &other,
                                   DescribeStackSetOperationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeStackSetOperationRequest)

};

} // namespace CloudFormation
} // namespace AWS

#endif