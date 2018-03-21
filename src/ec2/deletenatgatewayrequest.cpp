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

#include "deletenatgatewayrequest.h"
#include "deletenatgatewayrequest_p.h"
#include "deletenatgatewayresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  DeleteNatGatewayRequest
 *
 * @brief  Implements EC2 DeleteNatGateway requests.
 *
 * @see    EC2Client::deleteNatGateway
 */

/**
 * @brief  Constructs a new DeleteNatGatewayResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteNatGatewayResponse::DeleteNatGatewayResponse(

/**
 * @brief  Constructs a new DeleteNatGatewayRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteNatGatewayRequest::DeleteNatGatewayRequest(const DeleteNatGatewayRequest &other)
    : EC2Request(new DeleteNatGatewayRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteNatGatewayRequest object.
 */
DeleteNatGatewayRequest::DeleteNatGatewayRequest()
    : EC2Request(new DeleteNatGatewayRequestPrivate(EC2Request::DeleteNatGatewayAction, this))
{

}

bool DeleteNatGatewayRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteNatGatewayResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteNatGatewayResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * DeleteNatGatewayRequest::response(QNetworkReply * const reply) const
{
    return new DeleteNatGatewayResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteNatGatewayRequestPrivate
 *
 * @brief  Private implementation for DeleteNatGatewayRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteNatGatewayRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public DeleteNatGatewayRequest instance.
 */
DeleteNatGatewayRequestPrivate::DeleteNatGatewayRequestPrivate(
    const EC2Request::Action action, DeleteNatGatewayRequest * const q)
    : DeleteNatGatewayPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteNatGatewayRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteNatGatewayRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteNatGatewayRequest instance.
 */
DeleteNatGatewayRequestPrivate::DeleteNatGatewayRequestPrivate(
    const DeleteNatGatewayRequestPrivate &other, DeleteNatGatewayRequest * const q)
    : DeleteNatGatewayPrivate(other, q)
{

}
