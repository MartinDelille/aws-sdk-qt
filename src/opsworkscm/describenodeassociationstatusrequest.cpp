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

#include "describenodeassociationstatusrequest.h"
#include "describenodeassociationstatusrequest_p.h"
#include "describenodeassociationstatusresponse.h"
#include "opsworkscmrequest_p.h"

namespace AWS {
namespace OpsWorksCM {

/**
 * @class  DescribeNodeAssociationStatusRequest
 *
 * @brief  Implements OpsWorksCM DescribeNodeAssociationStatus requests.
 *
 * @see    OpsWorksCMClient::describeNodeAssociationStatus
 */

/**
 * @brief  Constructs a new DescribeNodeAssociationStatusRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeNodeAssociationStatusRequest::DescribeNodeAssociationStatusRequest(const DescribeNodeAssociationStatusRequest &other)
    : OpsWorksCMRequest(new DescribeNodeAssociationStatusRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeNodeAssociationStatusRequest object.
 */
DescribeNodeAssociationStatusRequest::DescribeNodeAssociationStatusRequest()
    : OpsWorksCMRequest(new DescribeNodeAssociationStatusRequestPrivate(OpsWorksCMRequest::DescribeNodeAssociationStatusAction, this))
{

}

bool DescribeNodeAssociationStatusRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeNodeAssociationStatusResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeNodeAssociationStatusResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  OpsWorksCMClient::send
 */
AwsAbstractResponse * DescribeNodeAssociationStatusRequest::response(QNetworkReply * const reply) const
{
    return new DescribeNodeAssociationStatusResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeNodeAssociationStatusRequestPrivate
 *
 * @brief  Private implementation for DescribeNodeAssociationStatusRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeNodeAssociationStatusRequestPrivate object.
 *
 * @param  action  OpsWorksCM action being performed.
 * @param  q       Pointer to this object's public DescribeNodeAssociationStatusRequest instance.
 */
DescribeNodeAssociationStatusRequestPrivate::DescribeNodeAssociationStatusRequestPrivate(
    const OpsWorksCMRequest::Action action, DescribeNodeAssociationStatusRequest * const q)
    : DescribeNodeAssociationStatusPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeNodeAssociationStatusRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeNodeAssociationStatusRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeNodeAssociationStatusRequest instance.
 */
DescribeNodeAssociationStatusRequestPrivate::DescribeNodeAssociationStatusRequestPrivate(
    const DescribeNodeAssociationStatusRequestPrivate &other, DescribeNodeAssociationStatusRequest * const q)
    : DescribeNodeAssociationStatusPrivate(other, q)
{

}

} // namespace OpsWorksCM
} // namespace AWS