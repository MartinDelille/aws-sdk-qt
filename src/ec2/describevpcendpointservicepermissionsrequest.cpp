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

#include "describevpcendpointservicepermissionsrequest.h"
#include "describevpcendpointservicepermissionsrequest_p.h"
#include "describevpcendpointservicepermissionsresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  DescribeVpcEndpointServicePermissionsRequest
 *
 * @brief  Implements EC2 DescribeVpcEndpointServicePermissions requests.
 *
 * @see    EC2Client::describeVpcEndpointServicePermissions
 */

/**
 * @brief  Constructs a new DescribeVpcEndpointServicePermissionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeVpcEndpointServicePermissionsRequest::DescribeVpcEndpointServicePermissionsRequest(const DescribeVpcEndpointServicePermissionsRequest &other)
    : EC2Request(new DescribeVpcEndpointServicePermissionsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeVpcEndpointServicePermissionsRequest object.
 */
DescribeVpcEndpointServicePermissionsRequest::DescribeVpcEndpointServicePermissionsRequest()
    : EC2Request(new DescribeVpcEndpointServicePermissionsRequestPrivate(EC2Request::DescribeVpcEndpointServicePermissionsAction, this))
{

}

bool DescribeVpcEndpointServicePermissionsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeVpcEndpointServicePermissionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeVpcEndpointServicePermissionsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * DescribeVpcEndpointServicePermissionsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeVpcEndpointServicePermissionsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeVpcEndpointServicePermissionsRequestPrivate
 *
 * @brief  Private implementation for DescribeVpcEndpointServicePermissionsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeVpcEndpointServicePermissionsRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public DescribeVpcEndpointServicePermissionsRequest instance.
 */
DescribeVpcEndpointServicePermissionsRequestPrivate::DescribeVpcEndpointServicePermissionsRequestPrivate(
    const EC2Request::Action action, DescribeVpcEndpointServicePermissionsRequest * const q)
    : DescribeVpcEndpointServicePermissionsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeVpcEndpointServicePermissionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeVpcEndpointServicePermissionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeVpcEndpointServicePermissionsRequest instance.
 */
DescribeVpcEndpointServicePermissionsRequestPrivate::DescribeVpcEndpointServicePermissionsRequestPrivate(
    const DescribeVpcEndpointServicePermissionsRequestPrivate &other, DescribeVpcEndpointServicePermissionsRequest * const q)
    : DescribeVpcEndpointServicePermissionsPrivate(other, q)
{

}

} // namespace EC2
} // namespace AWS