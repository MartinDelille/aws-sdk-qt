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

#include "getdirectoryrequest.h"
#include "getdirectoryrequest_p.h"
#include "getdirectoryresponse.h"
#include "clouddirectoryrequest_p.h"

namespace AWS {
namespace CloudDirectory {

/**
 * @class  GetDirectoryRequest
 *
 * @brief  Implements CloudDirectory GetDirectory requests.
 *
 * @see    CloudDirectoryClient::getDirectory
 */

/**
 * @brief  Constructs a new GetDirectoryResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetDirectoryResponse::GetDirectoryResponse(

/**
 * @brief  Constructs a new GetDirectoryRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetDirectoryRequest::GetDirectoryRequest(const GetDirectoryRequest &other)
    : CloudDirectoryRequest(new GetDirectoryRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetDirectoryRequest object.
 */
GetDirectoryRequest::GetDirectoryRequest()
    : CloudDirectoryRequest(new GetDirectoryRequestPrivate(CloudDirectoryRequest::GetDirectoryAction, this))
{

}

bool GetDirectoryRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetDirectoryResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetDirectoryResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudDirectoryClient::send
 */
AwsAbstractResponse * GetDirectoryRequest::response(QNetworkReply * const reply) const
{
    return new GetDirectoryResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetDirectoryRequestPrivate
 *
 * @brief  Private implementation for GetDirectoryRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetDirectoryRequestPrivate object.
 *
 * @param  action  CloudDirectory action being performed.
 * @param  q       Pointer to this object's public GetDirectoryRequest instance.
 */
GetDirectoryRequestPrivate::GetDirectoryRequestPrivate(
    const CloudDirectoryRequest::Action action, GetDirectoryRequest * const q)
    : GetDirectoryPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetDirectoryRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetDirectoryRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetDirectoryRequest instance.
 */
GetDirectoryRequestPrivate::GetDirectoryRequestPrivate(
    const GetDirectoryRequestPrivate &other, GetDirectoryRequest * const q)
    : GetDirectoryPrivate(other, q)
{

}
