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

#include "describereplicationinstancetasklogsrequest.h"
#include "describereplicationinstancetasklogsrequest_p.h"
#include "describereplicationinstancetasklogsresponse.h"
#include "databasemigrationservicerequest_p.h"

namespace AWS {
namespace DatabaseMigrationService {

/**
 * @class  DescribeReplicationInstanceTaskLogsRequest
 *
 * @brief  Implements DatabaseMigrationService DescribeReplicationInstanceTaskLogs requests.
 *
 * @see    DatabaseMigrationServiceClient::describeReplicationInstanceTaskLogs
 */

/**
 * @brief  Constructs a new DescribeReplicationInstanceTaskLogsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeReplicationInstanceTaskLogsRequest::DescribeReplicationInstanceTaskLogsRequest(const DescribeReplicationInstanceTaskLogsRequest &other)
    : DatabaseMigrationServiceRequest(new DescribeReplicationInstanceTaskLogsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeReplicationInstanceTaskLogsRequest object.
 */
DescribeReplicationInstanceTaskLogsRequest::DescribeReplicationInstanceTaskLogsRequest()
    : DatabaseMigrationServiceRequest(new DescribeReplicationInstanceTaskLogsRequestPrivate(DatabaseMigrationServiceRequest::DescribeReplicationInstanceTaskLogsAction, this))
{

}

bool DescribeReplicationInstanceTaskLogsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeReplicationInstanceTaskLogsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeReplicationInstanceTaskLogsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DatabaseMigrationServiceClient::send
 */
AwsAbstractResponse * DescribeReplicationInstanceTaskLogsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeReplicationInstanceTaskLogsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeReplicationInstanceTaskLogsRequestPrivate
 *
 * @brief  Private implementation for DescribeReplicationInstanceTaskLogsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeReplicationInstanceTaskLogsRequestPrivate object.
 *
 * @param  action  DatabaseMigrationService action being performed.
 * @param  q       Pointer to this object's public DescribeReplicationInstanceTaskLogsRequest instance.
 */
DescribeReplicationInstanceTaskLogsRequestPrivate::DescribeReplicationInstanceTaskLogsRequestPrivate(
    const DatabaseMigrationServiceRequest::Action action, DescribeReplicationInstanceTaskLogsRequest * const q)
    : DescribeReplicationInstanceTaskLogsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeReplicationInstanceTaskLogsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeReplicationInstanceTaskLogsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeReplicationInstanceTaskLogsRequest instance.
 */
DescribeReplicationInstanceTaskLogsRequestPrivate::DescribeReplicationInstanceTaskLogsRequestPrivate(
    const DescribeReplicationInstanceTaskLogsRequestPrivate &other, DescribeReplicationInstanceTaskLogsRequest * const q)
    : DescribeReplicationInstanceTaskLogsPrivate(other, q)
{

}

} // namespace DatabaseMigrationService
} // namespace AWS