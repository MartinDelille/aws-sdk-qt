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

#include "getparametersrequest.h"
#include "getparametersrequest_p.h"
#include "getparametersresponse.h"
#include "ssmrequest_p.h"

namespace AWS {
namespace SSM {

/**
 * @class  GetParametersRequest
 *
 * @brief  Implements SSM GetParameters requests.
 *
 * @see    SSMClient::getParameters
 */

/**
 * @brief  Constructs a new GetParametersRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetParametersRequest::GetParametersRequest(const GetParametersRequest &other)
    : SSMRequest(new GetParametersRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetParametersRequest object.
 */
GetParametersRequest::GetParametersRequest()
    : SSMRequest(new GetParametersRequestPrivate(SSMRequest::GetParametersAction, this))
{

}

bool GetParametersRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetParametersResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetParametersResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SSMClient::send
 */
AwsAbstractResponse * GetParametersRequest::response(QNetworkReply * const reply) const
{
    return new GetParametersResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetParametersRequestPrivate
 *
 * @brief  Private implementation for GetParametersRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetParametersRequestPrivate object.
 *
 * @param  action  SSM action being performed.
 * @param  q       Pointer to this object's public GetParametersRequest instance.
 */
GetParametersRequestPrivate::GetParametersRequestPrivate(
    const SSMRequest::Action action, GetParametersRequest * const q)
    : GetParametersPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetParametersRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetParametersRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetParametersRequest instance.
 */
GetParametersRequestPrivate::GetParametersRequestPrivate(
    const GetParametersRequestPrivate &other, GetParametersRequest * const q)
    : GetParametersPrivate(other, q)
{

}

} // namespace SSM
} // namespace AWS