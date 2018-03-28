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

#include "createqueuerequest.h"
#include "createqueuerequest_p.h"
#include "createqueueresponse.h"
#include "mediaconvertrequest_p.h"

namespace AWS {
namespace MediaConvert {

/**
 * @class  CreateQueueRequest
 *
 * @brief  Implements MediaConvert CreateQueue requests.
 *
 * @see    MediaConvertClient::createQueue
 */

/**
 * @brief  Constructs a new CreateQueueRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateQueueRequest::CreateQueueRequest(const CreateQueueRequest &other)
    : MediaConvertRequest(new CreateQueueRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateQueueRequest object.
 */
CreateQueueRequest::CreateQueueRequest()
    : MediaConvertRequest(new CreateQueueRequestPrivate(MediaConvertRequest::CreateQueueAction, this))
{

}

bool CreateQueueRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateQueueResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateQueueResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  MediaConvertClient::send
 */
AwsAbstractResponse * CreateQueueRequest::response(QNetworkReply * const reply) const
{
    return new CreateQueueResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateQueueRequestPrivate
 *
 * @brief  Private implementation for CreateQueueRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateQueueRequestPrivate object.
 *
 * @param  action  MediaConvert action being performed.
 * @param  q       Pointer to this object's public CreateQueueRequest instance.
 */
CreateQueueRequestPrivate::CreateQueueRequestPrivate(
    const MediaConvertRequest::Action action, CreateQueueRequest * const q)
    : CreateQueuePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateQueueRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateQueueRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateQueueRequest instance.
 */
CreateQueueRequestPrivate::CreateQueueRequestPrivate(
    const CreateQueueRequestPrivate &other, CreateQueueRequest * const q)
    : CreateQueuePrivate(other, q)
{

}

} // namespace MediaConvert
} // namespace AWS