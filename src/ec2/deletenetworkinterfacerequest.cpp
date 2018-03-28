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

#include "deletenetworkinterfacerequest.h"
#include "deletenetworkinterfacerequest_p.h"
#include "deletenetworkinterfaceresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  DeleteNetworkInterfaceRequest
 *
 * @brief  Implements EC2 DeleteNetworkInterface requests.
 *
 * @see    EC2Client::deleteNetworkInterface
 */

/**
 * @brief  Constructs a new DeleteNetworkInterfaceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteNetworkInterfaceRequest::DeleteNetworkInterfaceRequest(const DeleteNetworkInterfaceRequest &other)
    : EC2Request(new DeleteNetworkInterfaceRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteNetworkInterfaceRequest object.
 */
DeleteNetworkInterfaceRequest::DeleteNetworkInterfaceRequest()
    : EC2Request(new DeleteNetworkInterfaceRequestPrivate(EC2Request::DeleteNetworkInterfaceAction, this))
{

}

bool DeleteNetworkInterfaceRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteNetworkInterfaceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteNetworkInterfaceResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * DeleteNetworkInterfaceRequest::response(QNetworkReply * const reply) const
{
    return new DeleteNetworkInterfaceResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteNetworkInterfaceRequestPrivate
 *
 * @brief  Private implementation for DeleteNetworkInterfaceRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteNetworkInterfaceRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public DeleteNetworkInterfaceRequest instance.
 */
DeleteNetworkInterfaceRequestPrivate::DeleteNetworkInterfaceRequestPrivate(
    const EC2Request::Action action, DeleteNetworkInterfaceRequest * const q)
    : DeleteNetworkInterfacePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteNetworkInterfaceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteNetworkInterfaceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteNetworkInterfaceRequest instance.
 */
DeleteNetworkInterfaceRequestPrivate::DeleteNetworkInterfaceRequestPrivate(
    const DeleteNetworkInterfaceRequestPrivate &other, DeleteNetworkInterfaceRequest * const q)
    : DeleteNetworkInterfacePrivate(other, q)
{

}

} // namespace EC2
} // namespace AWS