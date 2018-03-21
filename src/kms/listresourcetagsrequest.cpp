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

#include "listresourcetagsrequest.h"
#include "listresourcetagsrequest_p.h"
#include "listresourcetagsresponse.h"
#include "kmsrequest_p.h"

namespace AWS {
namespace KMS {

/**
 * @class  ListResourceTagsRequest
 *
 * @brief  Implements KMS ListResourceTags requests.
 *
 * @see    KMSClient::listResourceTags
 */

/**
 * @brief  Constructs a new ListResourceTagsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListResourceTagsResponse::ListResourceTagsResponse(

/**
 * @brief  Constructs a new ListResourceTagsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListResourceTagsRequest::ListResourceTagsRequest(const ListResourceTagsRequest &other)
    : KMSRequest(new ListResourceTagsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListResourceTagsRequest object.
 */
ListResourceTagsRequest::ListResourceTagsRequest()
    : KMSRequest(new ListResourceTagsRequestPrivate(KMSRequest::ListResourceTagsAction, this))
{

}

bool ListResourceTagsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListResourceTagsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListResourceTagsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  KMSClient::send
 */
AwsAbstractResponse * ListResourceTagsRequest::response(QNetworkReply * const reply) const
{
    return new ListResourceTagsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListResourceTagsRequestPrivate
 *
 * @brief  Private implementation for ListResourceTagsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListResourceTagsRequestPrivate object.
 *
 * @param  action  KMS action being performed.
 * @param  q       Pointer to this object's public ListResourceTagsRequest instance.
 */
ListResourceTagsRequestPrivate::ListResourceTagsRequestPrivate(
    const KMSRequest::Action action, ListResourceTagsRequest * const q)
    : ListResourceTagsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListResourceTagsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListResourceTagsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListResourceTagsRequest instance.
 */
ListResourceTagsRequestPrivate::ListResourceTagsRequestPrivate(
    const ListResourceTagsRequestPrivate &other, ListResourceTagsRequest * const q)
    : ListResourceTagsPrivate(other, q)
{

}
