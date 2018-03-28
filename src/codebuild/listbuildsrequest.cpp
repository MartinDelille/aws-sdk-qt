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

#include "listbuildsrequest.h"
#include "listbuildsrequest_p.h"
#include "listbuildsresponse.h"
#include "codebuildrequest_p.h"

namespace AWS {
namespace CodeBuild {

/**
 * @class  ListBuildsRequest
 *
 * @brief  Implements CodeBuild ListBuilds requests.
 *
 * @see    CodeBuildClient::listBuilds
 */

/**
 * @brief  Constructs a new ListBuildsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListBuildsRequest::ListBuildsRequest(const ListBuildsRequest &other)
    : CodeBuildRequest(new ListBuildsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListBuildsRequest object.
 */
ListBuildsRequest::ListBuildsRequest()
    : CodeBuildRequest(new ListBuildsRequestPrivate(CodeBuildRequest::ListBuildsAction, this))
{

}

bool ListBuildsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListBuildsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListBuildsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CodeBuildClient::send
 */
AwsAbstractResponse * ListBuildsRequest::response(QNetworkReply * const reply) const
{
    return new ListBuildsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListBuildsRequestPrivate
 *
 * @brief  Private implementation for ListBuildsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListBuildsRequestPrivate object.
 *
 * @param  action  CodeBuild action being performed.
 * @param  q       Pointer to this object's public ListBuildsRequest instance.
 */
ListBuildsRequestPrivate::ListBuildsRequestPrivate(
    const CodeBuildRequest::Action action, ListBuildsRequest * const q)
    : ListBuildsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListBuildsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListBuildsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListBuildsRequest instance.
 */
ListBuildsRequestPrivate::ListBuildsRequestPrivate(
    const ListBuildsRequestPrivate &other, ListBuildsRequest * const q)
    : ListBuildsPrivate(other, q)
{

}

} // namespace CodeBuild
} // namespace AWS