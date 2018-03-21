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

#ifndef QTAWS_DESCRIBEINSTANCECREDITSPECIFICATIONSREQUEST_P_H
#define QTAWS_DESCRIBEINSTANCECREDITSPECIFICATIONSREQUEST_P_H

#include "ec2_p.h"
#include "describeinstancecreditspecificationsrequest.h"

namespace AWS {

namespace EC2 {

class DescribeInstanceCreditSpecificationsRequest;

class QTAWS_EXPORT DescribeInstanceCreditSpecificationsRequestPrivate : public EC2Private {

public:
    DescribeInstanceCreditSpecificationsRequestPrivate(const EC2::Action action,
                                   DescribeInstanceCreditSpecificationsRequest * const q);
    DescribeInstanceCreditSpecificationsRequestPrivate(const DescribeInstanceCreditSpecificationsRequestPrivate &other,
                                   DescribeInstanceCreditSpecificationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeInstanceCreditSpecificationsRequest)

};

} // namespace EC2
} // namespace AWS

#endif
