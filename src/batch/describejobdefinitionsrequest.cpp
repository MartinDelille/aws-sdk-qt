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

#include "describejobdefinitionsrequest.h"
#include "describejobdefinitionsrequest_p.h"
#include "describejobdefinitionsresponse.h"
#include "batchrequest_p.h"

namespace AWS {
namespace Batch {

/**
 * @class  DescribeJobDefinitionsRequest
 *
 * @brief  Implements Batch DescribeJobDefinitions requests.
 *
 * @see    BatchClient::describeJobDefinitions
 */

/**
 * @brief  Constructs a new DescribeJobDefinitionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeJobDefinitionsResponse::DescribeJobDefinitionsResponse(

/**
 * @brief  Constructs a new DescribeJobDefinitionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeJobDefinitionsRequest::DescribeJobDefinitionsRequest(const DescribeJobDefinitionsRequest &other)
    : BatchRequest(new DescribeJobDefinitionsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeJobDefinitionsRequest object.
 */
DescribeJobDefinitionsRequest::DescribeJobDefinitionsRequest()
    : BatchRequest(new DescribeJobDefinitionsRequestPrivate(BatchRequest::DescribeJobDefinitionsAction, this))
{

}

bool DescribeJobDefinitionsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeJobDefinitionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeJobDefinitionsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  BatchClient::send
 */
AwsAbstractResponse * DescribeJobDefinitionsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeJobDefinitionsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeJobDefinitionsRequestPrivate
 *
 * @brief  Private implementation for DescribeJobDefinitionsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeJobDefinitionsRequestPrivate object.
 *
 * @param  action  Batch action being performed.
 * @param  q       Pointer to this object's public DescribeJobDefinitionsRequest instance.
 */
DescribeJobDefinitionsRequestPrivate::DescribeJobDefinitionsRequestPrivate(
    const BatchRequest::Action action, DescribeJobDefinitionsRequest * const q)
    : DescribeJobDefinitionsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeJobDefinitionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeJobDefinitionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeJobDefinitionsRequest instance.
 */
DescribeJobDefinitionsRequestPrivate::DescribeJobDefinitionsRequestPrivate(
    const DescribeJobDefinitionsRequestPrivate &other, DescribeJobDefinitionsRequest * const q)
    : DescribeJobDefinitionsPrivate(other, q)
{

}
