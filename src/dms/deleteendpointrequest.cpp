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

#include "deleteendpointrequest.h"
#include "deleteendpointrequest_p.h"
#include "deleteendpointresponse.h"
#include "databasemigrationservicerequest_p.h"

namespace AWS {
namespace DatabaseMigrationService {

/**
 * @class  DeleteEndpointRequest
 *
 * @brief  Implements DatabaseMigrationService DeleteEndpoint requests.
 *
 * @see    DatabaseMigrationServiceClient::deleteEndpoint
 */

/**
 * @brief  Constructs a new DeleteEndpointRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteEndpointRequest::DeleteEndpointRequest(const DeleteEndpointRequest &other)
    : DatabaseMigrationServiceRequest(new DeleteEndpointRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteEndpointRequest object.
 */
DeleteEndpointRequest::DeleteEndpointRequest()
    : DatabaseMigrationServiceRequest(new DeleteEndpointRequestPrivate(DatabaseMigrationServiceRequest::DeleteEndpointAction, this))
{

}

bool DeleteEndpointRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteEndpointResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteEndpointResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DatabaseMigrationServiceClient::send
 */
AwsAbstractResponse * DeleteEndpointRequest::response(QNetworkReply * const reply) const
{
    return new DeleteEndpointResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteEndpointRequestPrivate
 *
 * @brief  Private implementation for DeleteEndpointRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteEndpointRequestPrivate object.
 *
 * @param  action  DatabaseMigrationService action being performed.
 * @param  q       Pointer to this object's public DeleteEndpointRequest instance.
 */
DeleteEndpointRequestPrivate::DeleteEndpointRequestPrivate(
    const DatabaseMigrationServiceRequest::Action action, DeleteEndpointRequest * const q)
    : DeleteEndpointPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteEndpointRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteEndpointRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteEndpointRequest instance.
 */
DeleteEndpointRequestPrivate::DeleteEndpointRequestPrivate(
    const DeleteEndpointRequestPrivate &other, DeleteEndpointRequest * const q)
    : DeleteEndpointPrivate(other, q)
{

}

} // namespace DatabaseMigrationService
} // namespace AWS