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

#include "rebootworkspacesrequest.h"
#include "rebootworkspacesrequest_p.h"
#include "rebootworkspacesresponse.h"
#include "workspacesrequest_p.h"

namespace AWS {
namespace WorkSpaces {

/**
 * @class  RebootWorkspacesRequest
 *
 * @brief  Implements WorkSpaces RebootWorkspaces requests.
 *
 * @see    WorkSpacesClient::rebootWorkspaces
 */

/**
 * @brief  Constructs a new RebootWorkspacesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RebootWorkspacesResponse::RebootWorkspacesResponse(

/**
 * @brief  Constructs a new RebootWorkspacesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RebootWorkspacesRequest::RebootWorkspacesRequest(const RebootWorkspacesRequest &other)
    : WorkSpacesRequest(new RebootWorkspacesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RebootWorkspacesRequest object.
 */
RebootWorkspacesRequest::RebootWorkspacesRequest()
    : WorkSpacesRequest(new RebootWorkspacesRequestPrivate(WorkSpacesRequest::RebootWorkspacesAction, this))
{

}

bool RebootWorkspacesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RebootWorkspacesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RebootWorkspacesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  WorkSpacesClient::send
 */
AwsAbstractResponse * RebootWorkspacesRequest::response(QNetworkReply * const reply) const
{
    return new RebootWorkspacesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RebootWorkspacesRequestPrivate
 *
 * @brief  Private implementation for RebootWorkspacesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RebootWorkspacesRequestPrivate object.
 *
 * @param  action  WorkSpaces action being performed.
 * @param  q       Pointer to this object's public RebootWorkspacesRequest instance.
 */
RebootWorkspacesRequestPrivate::RebootWorkspacesRequestPrivate(
    const WorkSpacesRequest::Action action, RebootWorkspacesRequest * const q)
    : RebootWorkspacesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RebootWorkspacesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RebootWorkspacesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RebootWorkspacesRequest instance.
 */
RebootWorkspacesRequestPrivate::RebootWorkspacesRequestPrivate(
    const RebootWorkspacesRequestPrivate &other, RebootWorkspacesRequest * const q)
    : RebootWorkspacesPrivate(other, q)
{

}
