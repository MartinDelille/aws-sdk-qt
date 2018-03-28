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

#include "describeeventsrequest.h"
#include "describeeventsrequest_p.h"
#include "describeeventsresponse.h"
#include "opsworkscmrequest_p.h"

namespace AWS {
namespace OpsWorksCM {

/**
 * @class  DescribeEventsRequest
 *
 * @brief  Implements OpsWorksCM DescribeEvents requests.
 *
 * @see    OpsWorksCMClient::describeEvents
 */

/**
 * @brief  Constructs a new DescribeEventsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeEventsRequest::DescribeEventsRequest(const DescribeEventsRequest &other)
    : OpsWorksCMRequest(new DescribeEventsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeEventsRequest object.
 */
DescribeEventsRequest::DescribeEventsRequest()
    : OpsWorksCMRequest(new DescribeEventsRequestPrivate(OpsWorksCMRequest::DescribeEventsAction, this))
{

}

bool DescribeEventsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeEventsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeEventsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  OpsWorksCMClient::send
 */
AwsAbstractResponse * DescribeEventsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeEventsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeEventsRequestPrivate
 *
 * @brief  Private implementation for DescribeEventsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeEventsRequestPrivate object.
 *
 * @param  action  OpsWorksCM action being performed.
 * @param  q       Pointer to this object's public DescribeEventsRequest instance.
 */
DescribeEventsRequestPrivate::DescribeEventsRequestPrivate(
    const OpsWorksCMRequest::Action action, DescribeEventsRequest * const q)
    : DescribeEventsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeEventsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeEventsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeEventsRequest instance.
 */
DescribeEventsRequestPrivate::DescribeEventsRequestPrivate(
    const DescribeEventsRequestPrivate &other, DescribeEventsRequest * const q)
    : DescribeEventsPrivate(other, q)
{

}

} // namespace OpsWorksCM
} // namespace AWS