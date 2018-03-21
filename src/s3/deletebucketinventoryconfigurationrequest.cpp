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

#include "deletebucketinventoryconfigurationrequest.h"
#include "deletebucketinventoryconfigurationrequest_p.h"
#include "deletebucketinventoryconfigurationresponse.h"
#include "s3request_p.h"

namespace AWS {
namespace S3 {

/**
 * @class  DeleteBucketInventoryConfigurationRequest
 *
 * @brief  Implements S3 DeleteBucketInventoryConfiguration requests.
 *
 * @see    S3Client::deleteBucketInventoryConfiguration
 */

/**
 * @brief  Constructs a new DeleteBucketInventoryConfigurationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteBucketInventoryConfigurationResponse::DeleteBucketInventoryConfigurationResponse(

/**
 * @brief  Constructs a new DeleteBucketInventoryConfigurationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteBucketInventoryConfigurationRequest::DeleteBucketInventoryConfigurationRequest(const DeleteBucketInventoryConfigurationRequest &other)
    : S3Request(new DeleteBucketInventoryConfigurationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteBucketInventoryConfigurationRequest object.
 */
DeleteBucketInventoryConfigurationRequest::DeleteBucketInventoryConfigurationRequest()
    : S3Request(new DeleteBucketInventoryConfigurationRequestPrivate(S3Request::DeleteBucketInventoryConfigurationAction, this))
{

}

bool DeleteBucketInventoryConfigurationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteBucketInventoryConfigurationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteBucketInventoryConfigurationResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  S3Client::send
 */
AwsAbstractResponse * DeleteBucketInventoryConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new DeleteBucketInventoryConfigurationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteBucketInventoryConfigurationRequestPrivate
 *
 * @brief  Private implementation for DeleteBucketInventoryConfigurationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteBucketInventoryConfigurationRequestPrivate object.
 *
 * @param  action  S3 action being performed.
 * @param  q       Pointer to this object's public DeleteBucketInventoryConfigurationRequest instance.
 */
DeleteBucketInventoryConfigurationRequestPrivate::DeleteBucketInventoryConfigurationRequestPrivate(
    const S3Request::Action action, DeleteBucketInventoryConfigurationRequest * const q)
    : DeleteBucketInventoryConfigurationPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteBucketInventoryConfigurationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteBucketInventoryConfigurationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteBucketInventoryConfigurationRequest instance.
 */
DeleteBucketInventoryConfigurationRequestPrivate::DeleteBucketInventoryConfigurationRequestPrivate(
    const DeleteBucketInventoryConfigurationRequestPrivate &other, DeleteBucketInventoryConfigurationRequest * const q)
    : DeleteBucketInventoryConfigurationPrivate(other, q)
{

}
