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

#include "listteammembersrequest.h"
#include "listteammembersrequest_p.h"
#include "listteammembersresponse.h"
#include "codestarrequest_p.h"

namespace AWS {
namespace CodeStar {

/**
 * @class  ListTeamMembersRequest
 *
 * @brief  Implements CodeStar ListTeamMembers requests.
 *
 * @see    CodeStarClient::listTeamMembers
 */

/**
 * @brief  Constructs a new ListTeamMembersRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListTeamMembersRequest::ListTeamMembersRequest(const ListTeamMembersRequest &other)
    : CodeStarRequest(new ListTeamMembersRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListTeamMembersRequest object.
 */
ListTeamMembersRequest::ListTeamMembersRequest()
    : CodeStarRequest(new ListTeamMembersRequestPrivate(CodeStarRequest::ListTeamMembersAction, this))
{

}

bool ListTeamMembersRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListTeamMembersResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListTeamMembersResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CodeStarClient::send
 */
AwsAbstractResponse * ListTeamMembersRequest::response(QNetworkReply * const reply) const
{
    return new ListTeamMembersResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListTeamMembersRequestPrivate
 *
 * @brief  Private implementation for ListTeamMembersRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListTeamMembersRequestPrivate object.
 *
 * @param  action  CodeStar action being performed.
 * @param  q       Pointer to this object's public ListTeamMembersRequest instance.
 */
ListTeamMembersRequestPrivate::ListTeamMembersRequestPrivate(
    const CodeStarRequest::Action action, ListTeamMembersRequest * const q)
    : ListTeamMembersPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListTeamMembersRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListTeamMembersRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListTeamMembersRequest instance.
 */
ListTeamMembersRequestPrivate::ListTeamMembersRequestPrivate(
    const ListTeamMembersRequestPrivate &other, ListTeamMembersRequest * const q)
    : ListTeamMembersPrivate(other, q)
{

}

} // namespace CodeStar
} // namespace AWS