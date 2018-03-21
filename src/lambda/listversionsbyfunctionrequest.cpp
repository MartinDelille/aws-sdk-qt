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

#include "listversionsbyfunctionrequest.h"
#include "listversionsbyfunctionrequest_p.h"
#include "listversionsbyfunctionresponse.h"
#include "lambdarequest_p.h"

namespace AWS {
namespace Lambda {

/**
 * @class  ListVersionsByFunctionRequest
 *
 * @brief  Implements Lambda ListVersionsByFunction requests.
 *
 * @see    LambdaClient::listVersionsByFunction
 */

/**
 * @brief  Constructs a new ListVersionsByFunctionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListVersionsByFunctionResponse::ListVersionsByFunctionResponse(

/**
 * @brief  Constructs a new ListVersionsByFunctionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListVersionsByFunctionRequest::ListVersionsByFunctionRequest(const ListVersionsByFunctionRequest &other)
    : LambdaRequest(new ListVersionsByFunctionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListVersionsByFunctionRequest object.
 */
ListVersionsByFunctionRequest::ListVersionsByFunctionRequest()
    : LambdaRequest(new ListVersionsByFunctionRequestPrivate(LambdaRequest::ListVersionsByFunctionAction, this))
{

}

bool ListVersionsByFunctionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListVersionsByFunctionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListVersionsByFunctionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  LambdaClient::send
 */
AwsAbstractResponse * ListVersionsByFunctionRequest::response(QNetworkReply * const reply) const
{
    return new ListVersionsByFunctionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListVersionsByFunctionRequestPrivate
 *
 * @brief  Private implementation for ListVersionsByFunctionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListVersionsByFunctionRequestPrivate object.
 *
 * @param  action  Lambda action being performed.
 * @param  q       Pointer to this object's public ListVersionsByFunctionRequest instance.
 */
ListVersionsByFunctionRequestPrivate::ListVersionsByFunctionRequestPrivate(
    const LambdaRequest::Action action, ListVersionsByFunctionRequest * const q)
    : ListVersionsByFunctionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListVersionsByFunctionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListVersionsByFunctionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListVersionsByFunctionRequest instance.
 */
ListVersionsByFunctionRequestPrivate::ListVersionsByFunctionRequestPrivate(
    const ListVersionsByFunctionRequestPrivate &other, ListVersionsByFunctionRequest * const q)
    : ListVersionsByFunctionPrivate(other, q)
{

}
