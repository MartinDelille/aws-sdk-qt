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

#include "rejectassignmentrequest.h"
#include "rejectassignmentrequest_p.h"
#include "rejectassignmentresponse.h"
#include "mturkrequest_p.h"

namespace AWS {
namespace MTurk {

/**
 * @class  RejectAssignmentRequest
 *
 * @brief  Implements MTurk RejectAssignment requests.
 *
 * @see    MTurkClient::rejectAssignment
 */

/**
 * @brief  Constructs a new RejectAssignmentRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RejectAssignmentRequest::RejectAssignmentRequest(const RejectAssignmentRequest &other)
    : MTurkRequest(new RejectAssignmentRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RejectAssignmentRequest object.
 */
RejectAssignmentRequest::RejectAssignmentRequest()
    : MTurkRequest(new RejectAssignmentRequestPrivate(MTurkRequest::RejectAssignmentAction, this))
{

}

bool RejectAssignmentRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RejectAssignmentResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RejectAssignmentResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  MTurkClient::send
 */
AwsAbstractResponse * RejectAssignmentRequest::response(QNetworkReply * const reply) const
{
    return new RejectAssignmentResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RejectAssignmentRequestPrivate
 *
 * @brief  Private implementation for RejectAssignmentRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RejectAssignmentRequestPrivate object.
 *
 * @param  action  MTurk action being performed.
 * @param  q       Pointer to this object's public RejectAssignmentRequest instance.
 */
RejectAssignmentRequestPrivate::RejectAssignmentRequestPrivate(
    const MTurkRequest::Action action, RejectAssignmentRequest * const q)
    : RejectAssignmentPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RejectAssignmentRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RejectAssignmentRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RejectAssignmentRequest instance.
 */
RejectAssignmentRequestPrivate::RejectAssignmentRequestPrivate(
    const RejectAssignmentRequestPrivate &other, RejectAssignmentRequest * const q)
    : RejectAssignmentPrivate(other, q)
{

}

} // namespace MTurk
} // namespace AWS