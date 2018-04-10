/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "deletefieldlevelencryptionprofilerequest.h"
#include "deletefieldlevelencryptionprofilerequest_p.h"
#include "deletefieldlevelencryptionprofileresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/**
 * @class  DeleteFieldLevelEncryptionProfileRequest
 *
 * @brief  Implements CloudFront DeleteFieldLevelEncryptionProfile requests.
 *
 * @see    CloudFrontClient::deleteFieldLevelEncryptionProfile
 */

/**
 * @brief  Constructs a new DeleteFieldLevelEncryptionProfileRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteFieldLevelEncryptionProfileRequest::DeleteFieldLevelEncryptionProfileRequest(const DeleteFieldLevelEncryptionProfileRequest &other)
    : CloudFrontRequest(new DeleteFieldLevelEncryptionProfileRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteFieldLevelEncryptionProfileRequest object.
 */
DeleteFieldLevelEncryptionProfileRequest::DeleteFieldLevelEncryptionProfileRequest()
    : CloudFrontRequest(new DeleteFieldLevelEncryptionProfileRequestPrivate(CloudFrontRequest::DeleteFieldLevelEncryptionProfileAction, this))
{

}

bool DeleteFieldLevelEncryptionProfileRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteFieldLevelEncryptionProfileResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteFieldLevelEncryptionProfileResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CloudFrontClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteFieldLevelEncryptionProfileRequest::response(QNetworkReply * const reply) const
{
    return new DeleteFieldLevelEncryptionProfileResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteFieldLevelEncryptionProfileRequestPrivate
 *
 * @brief  Private implementation for DeleteFieldLevelEncryptionProfileRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteFieldLevelEncryptionProfileRequestPrivate object.
 *
 * @param  action  CloudFront action being performed.
 * @param  q       Pointer to this object's public DeleteFieldLevelEncryptionProfileRequest instance.
 */
DeleteFieldLevelEncryptionProfileRequestPrivate::DeleteFieldLevelEncryptionProfileRequestPrivate(
    const CloudFrontRequest::Action action, DeleteFieldLevelEncryptionProfileRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteFieldLevelEncryptionProfileRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteFieldLevelEncryptionProfileRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteFieldLevelEncryptionProfileRequest instance.
 */
DeleteFieldLevelEncryptionProfileRequestPrivate::DeleteFieldLevelEncryptionProfileRequestPrivate(
    const DeleteFieldLevelEncryptionProfileRequestPrivate &other, DeleteFieldLevelEncryptionProfileRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws