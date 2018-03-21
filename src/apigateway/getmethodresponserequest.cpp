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

#include "getmethodresponserequest.h"
#include "getmethodresponserequest_p.h"
#include "getmethodresponseresponse.h"
#include "apigatewayrequest_p.h"

namespace AWS {
namespace APIGateway {

/**
 * @class  GetMethodResponseRequest
 *
 * @brief  Implements APIGateway GetMethodResponse requests.
 *
 * @see    APIGatewayClient::getMethodResponse
 */

/**
 * @brief  Constructs a new GetMethodResponseResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetMethodResponseResponse::GetMethodResponseResponse(

/**
 * @brief  Constructs a new GetMethodResponseRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetMethodResponseRequest::GetMethodResponseRequest(const GetMethodResponseRequest &other)
    : APIGatewayRequest(new GetMethodResponseRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetMethodResponseRequest object.
 */
GetMethodResponseRequest::GetMethodResponseRequest()
    : APIGatewayRequest(new GetMethodResponseRequestPrivate(APIGatewayRequest::GetMethodResponseAction, this))
{

}

bool GetMethodResponseRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetMethodResponseResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetMethodResponseResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  APIGatewayClient::send
 */
AwsAbstractResponse * GetMethodResponseRequest::response(QNetworkReply * const reply) const
{
    return new GetMethodResponseResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetMethodResponseRequestPrivate
 *
 * @brief  Private implementation for GetMethodResponseRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetMethodResponseRequestPrivate object.
 *
 * @param  action  APIGateway action being performed.
 * @param  q       Pointer to this object's public GetMethodResponseRequest instance.
 */
GetMethodResponseRequestPrivate::GetMethodResponseRequestPrivate(
    const APIGatewayRequest::Action action, GetMethodResponseRequest * const q)
    : GetMethodResponsePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetMethodResponseRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetMethodResponseRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetMethodResponseRequest instance.
 */
GetMethodResponseRequestPrivate::GetMethodResponseRequestPrivate(
    const GetMethodResponseRequestPrivate &other, GetMethodResponseRequest * const q)
    : GetMethodResponsePrivate(other, q)
{

}
