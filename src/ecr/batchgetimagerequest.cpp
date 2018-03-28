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

#include "batchgetimagerequest.h"
#include "batchgetimagerequest_p.h"
#include "batchgetimageresponse.h"
#include "ecrrequest_p.h"

namespace AWS {
namespace ECR {

/**
 * @class  BatchGetImageRequest
 *
 * @brief  Implements ECR BatchGetImage requests.
 *
 * @see    ECRClient::batchGetImage
 */

/**
 * @brief  Constructs a new BatchGetImageRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
BatchGetImageRequest::BatchGetImageRequest(const BatchGetImageRequest &other)
    : ECRRequest(new BatchGetImageRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new BatchGetImageRequest object.
 */
BatchGetImageRequest::BatchGetImageRequest()
    : ECRRequest(new BatchGetImageRequestPrivate(ECRRequest::BatchGetImageAction, this))
{

}

bool BatchGetImageRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an BatchGetImageResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An BatchGetImageResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ECRClient::send
 */
AwsAbstractResponse * BatchGetImageRequest::response(QNetworkReply * const reply) const
{
    return new BatchGetImageResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  BatchGetImageRequestPrivate
 *
 * @brief  Private implementation for BatchGetImageRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new BatchGetImageRequestPrivate object.
 *
 * @param  action  ECR action being performed.
 * @param  q       Pointer to this object's public BatchGetImageRequest instance.
 */
BatchGetImageRequestPrivate::BatchGetImageRequestPrivate(
    const ECRRequest::Action action, BatchGetImageRequest * const q)
    : BatchGetImagePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new BatchGetImageRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the BatchGetImageRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public BatchGetImageRequest instance.
 */
BatchGetImageRequestPrivate::BatchGetImageRequestPrivate(
    const BatchGetImageRequestPrivate &other, BatchGetImageRequest * const q)
    : BatchGetImagePrivate(other, q)
{

}

} // namespace ECR
} // namespace AWS