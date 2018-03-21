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

#include "addtagstoresourcerequest.h"
#include "addtagstoresourcerequest_p.h"
#include "addtagstoresourceresponse.h"
#include "storagegatewayrequest_p.h"

namespace AWS {
namespace StorageGateway {

/**
 * @class  AddTagsToResourceRequest
 *
 * @brief  Implements StorageGateway AddTagsToResource requests.
 *
 * @see    StorageGatewayClient::addTagsToResource
 */

/**
 * @brief  Constructs a new AddTagsToResourceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AddTagsToResourceResponse::AddTagsToResourceResponse(

/**
 * @brief  Constructs a new AddTagsToResourceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AddTagsToResourceRequest::AddTagsToResourceRequest(const AddTagsToResourceRequest &other)
    : StorageGatewayRequest(new AddTagsToResourceRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AddTagsToResourceRequest object.
 */
AddTagsToResourceRequest::AddTagsToResourceRequest()
    : StorageGatewayRequest(new AddTagsToResourceRequestPrivate(StorageGatewayRequest::AddTagsToResourceAction, this))
{

}

bool AddTagsToResourceRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AddTagsToResourceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AddTagsToResourceResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  StorageGatewayClient::send
 */
AwsAbstractResponse * AddTagsToResourceRequest::response(QNetworkReply * const reply) const
{
    return new AddTagsToResourceResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AddTagsToResourceRequestPrivate
 *
 * @brief  Private implementation for AddTagsToResourceRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AddTagsToResourceRequestPrivate object.
 *
 * @param  action  StorageGateway action being performed.
 * @param  q       Pointer to this object's public AddTagsToResourceRequest instance.
 */
AddTagsToResourceRequestPrivate::AddTagsToResourceRequestPrivate(
    const StorageGatewayRequest::Action action, AddTagsToResourceRequest * const q)
    : AddTagsToResourcePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AddTagsToResourceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AddTagsToResourceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AddTagsToResourceRequest instance.
 */
AddTagsToResourceRequestPrivate::AddTagsToResourceRequestPrivate(
    const AddTagsToResourceRequestPrivate &other, AddTagsToResourceRequest * const q)
    : AddTagsToResourcePrivate(other, q)
{

}
