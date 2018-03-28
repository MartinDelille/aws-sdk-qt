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

#include "untagstreamrequest.h"
#include "untagstreamrequest_p.h"
#include "untagstreamresponse.h"
#include "kinesisvideorequest_p.h"

namespace AWS {
namespace KinesisVideo {

/**
 * @class  UntagStreamRequest
 *
 * @brief  Implements KinesisVideo UntagStream requests.
 *
 * @see    KinesisVideoClient::untagStream
 */

/**
 * @brief  Constructs a new UntagStreamRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UntagStreamRequest::UntagStreamRequest(const UntagStreamRequest &other)
    : KinesisVideoRequest(new UntagStreamRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UntagStreamRequest object.
 */
UntagStreamRequest::UntagStreamRequest()
    : KinesisVideoRequest(new UntagStreamRequestPrivate(KinesisVideoRequest::UntagStreamAction, this))
{

}

bool UntagStreamRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UntagStreamResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UntagStreamResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  KinesisVideoClient::send
 */
AwsAbstractResponse * UntagStreamRequest::response(QNetworkReply * const reply) const
{
    return new UntagStreamResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UntagStreamRequestPrivate
 *
 * @brief  Private implementation for UntagStreamRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UntagStreamRequestPrivate object.
 *
 * @param  action  KinesisVideo action being performed.
 * @param  q       Pointer to this object's public UntagStreamRequest instance.
 */
UntagStreamRequestPrivate::UntagStreamRequestPrivate(
    const KinesisVideoRequest::Action action, UntagStreamRequest * const q)
    : UntagStreamPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UntagStreamRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UntagStreamRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UntagStreamRequest instance.
 */
UntagStreamRequestPrivate::UntagStreamRequestPrivate(
    const UntagStreamRequestPrivate &other, UntagStreamRequest * const q)
    : UntagStreamPrivate(other, q)
{

}

} // namespace KinesisVideo
} // namespace AWS