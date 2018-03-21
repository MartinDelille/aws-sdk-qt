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

#include "updateorganizationalunitrequest.h"
#include "updateorganizationalunitrequest_p.h"
#include "updateorganizationalunitresponse.h"
#include "organizationsrequest_p.h"

namespace AWS {
namespace Organizations {

/**
 * @class  UpdateOrganizationalUnitRequest
 *
 * @brief  Implements Organizations UpdateOrganizationalUnit requests.
 *
 * @see    OrganizationsClient::updateOrganizationalUnit
 */

/**
 * @brief  Constructs a new UpdateOrganizationalUnitResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateOrganizationalUnitResponse::UpdateOrganizationalUnitResponse(

/**
 * @brief  Constructs a new UpdateOrganizationalUnitRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateOrganizationalUnitRequest::UpdateOrganizationalUnitRequest(const UpdateOrganizationalUnitRequest &other)
    : OrganizationsRequest(new UpdateOrganizationalUnitRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateOrganizationalUnitRequest object.
 */
UpdateOrganizationalUnitRequest::UpdateOrganizationalUnitRequest()
    : OrganizationsRequest(new UpdateOrganizationalUnitRequestPrivate(OrganizationsRequest::UpdateOrganizationalUnitAction, this))
{

}

bool UpdateOrganizationalUnitRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateOrganizationalUnitResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateOrganizationalUnitResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  OrganizationsClient::send
 */
AwsAbstractResponse * UpdateOrganizationalUnitRequest::response(QNetworkReply * const reply) const
{
    return new UpdateOrganizationalUnitResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateOrganizationalUnitRequestPrivate
 *
 * @brief  Private implementation for UpdateOrganizationalUnitRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateOrganizationalUnitRequestPrivate object.
 *
 * @param  action  Organizations action being performed.
 * @param  q       Pointer to this object's public UpdateOrganizationalUnitRequest instance.
 */
UpdateOrganizationalUnitRequestPrivate::UpdateOrganizationalUnitRequestPrivate(
    const OrganizationsRequest::Action action, UpdateOrganizationalUnitRequest * const q)
    : UpdateOrganizationalUnitPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateOrganizationalUnitRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateOrganizationalUnitRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateOrganizationalUnitRequest instance.
 */
UpdateOrganizationalUnitRequestPrivate::UpdateOrganizationalUnitRequestPrivate(
    const UpdateOrganizationalUnitRequestPrivate &other, UpdateOrganizationalUnitRequest * const q)
    : UpdateOrganizationalUnitPrivate(other, q)
{

}
