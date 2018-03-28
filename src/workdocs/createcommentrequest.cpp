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

#include "createcommentrequest.h"
#include "createcommentrequest_p.h"
#include "createcommentresponse.h"
#include "workdocsrequest_p.h"

namespace AWS {
namespace WorkDocs {

/**
 * @class  CreateCommentRequest
 *
 * @brief  Implements WorkDocs CreateComment requests.
 *
 * @see    WorkDocsClient::createComment
 */

/**
 * @brief  Constructs a new CreateCommentRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateCommentRequest::CreateCommentRequest(const CreateCommentRequest &other)
    : WorkDocsRequest(new CreateCommentRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateCommentRequest object.
 */
CreateCommentRequest::CreateCommentRequest()
    : WorkDocsRequest(new CreateCommentRequestPrivate(WorkDocsRequest::CreateCommentAction, this))
{

}

bool CreateCommentRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateCommentResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateCommentResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  WorkDocsClient::send
 */
AwsAbstractResponse * CreateCommentRequest::response(QNetworkReply * const reply) const
{
    return new CreateCommentResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateCommentRequestPrivate
 *
 * @brief  Private implementation for CreateCommentRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateCommentRequestPrivate object.
 *
 * @param  action  WorkDocs action being performed.
 * @param  q       Pointer to this object's public CreateCommentRequest instance.
 */
CreateCommentRequestPrivate::CreateCommentRequestPrivate(
    const WorkDocsRequest::Action action, CreateCommentRequest * const q)
    : CreateCommentPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateCommentRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateCommentRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateCommentRequest instance.
 */
CreateCommentRequestPrivate::CreateCommentRequestPrivate(
    const CreateCommentRequestPrivate &other, CreateCommentRequest * const q)
    : CreateCommentPrivate(other, q)
{

}

} // namespace WorkDocs
} // namespace AWS