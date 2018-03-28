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

#include "deletesamlproviderrequest.h"
#include "deletesamlproviderrequest_p.h"
#include "deletesamlproviderresponse.h"
#include "iamrequest_p.h"

namespace AWS {
namespace IAM {

/**
 * @class  DeleteSAMLProviderRequest
 *
 * @brief  Implements IAM DeleteSAMLProvider requests.
 *
 * @see    IAMClient::deleteSAMLProvider
 */

/**
 * @brief  Constructs a new DeleteSAMLProviderRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteSAMLProviderRequest::DeleteSAMLProviderRequest(const DeleteSAMLProviderRequest &other)
    : IAMRequest(new DeleteSAMLProviderRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteSAMLProviderRequest object.
 */
DeleteSAMLProviderRequest::DeleteSAMLProviderRequest()
    : IAMRequest(new DeleteSAMLProviderRequestPrivate(IAMRequest::DeleteSAMLProviderAction, this))
{

}

bool DeleteSAMLProviderRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteSAMLProviderResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteSAMLProviderResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IAMClient::send
 */
AwsAbstractResponse * DeleteSAMLProviderRequest::response(QNetworkReply * const reply) const
{
    return new DeleteSAMLProviderResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteSAMLProviderRequestPrivate
 *
 * @brief  Private implementation for DeleteSAMLProviderRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteSAMLProviderRequestPrivate object.
 *
 * @param  action  IAM action being performed.
 * @param  q       Pointer to this object's public DeleteSAMLProviderRequest instance.
 */
DeleteSAMLProviderRequestPrivate::DeleteSAMLProviderRequestPrivate(
    const IAMRequest::Action action, DeleteSAMLProviderRequest * const q)
    : DeleteSAMLProviderPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteSAMLProviderRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteSAMLProviderRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteSAMLProviderRequest instance.
 */
DeleteSAMLProviderRequestPrivate::DeleteSAMLProviderRequestPrivate(
    const DeleteSAMLProviderRequestPrivate &other, DeleteSAMLProviderRequest * const q)
    : DeleteSAMLProviderPrivate(other, q)
{

}

} // namespace IAM
} // namespace AWS