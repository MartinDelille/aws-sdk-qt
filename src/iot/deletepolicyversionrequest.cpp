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

#include "deletepolicyversionrequest.h"
#include "deletepolicyversionrequest_p.h"
#include "deletepolicyversionresponse.h"
#include "iotrequest_p.h"

namespace AWS {
namespace IoT {

/**
 * @class  DeletePolicyVersionRequest
 *
 * @brief  Implements IoT DeletePolicyVersion requests.
 *
 * @see    IoTClient::deletePolicyVersion
 */

/**
 * @brief  Constructs a new DeletePolicyVersionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeletePolicyVersionRequest::DeletePolicyVersionRequest(const DeletePolicyVersionRequest &other)
    : IoTRequest(new DeletePolicyVersionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeletePolicyVersionRequest object.
 */
DeletePolicyVersionRequest::DeletePolicyVersionRequest()
    : IoTRequest(new DeletePolicyVersionRequestPrivate(IoTRequest::DeletePolicyVersionAction, this))
{

}

bool DeletePolicyVersionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeletePolicyVersionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeletePolicyVersionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IoTClient::send
 */
AwsAbstractResponse * DeletePolicyVersionRequest::response(QNetworkReply * const reply) const
{
    return new DeletePolicyVersionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeletePolicyVersionRequestPrivate
 *
 * @brief  Private implementation for DeletePolicyVersionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeletePolicyVersionRequestPrivate object.
 *
 * @param  action  IoT action being performed.
 * @param  q       Pointer to this object's public DeletePolicyVersionRequest instance.
 */
DeletePolicyVersionRequestPrivate::DeletePolicyVersionRequestPrivate(
    const IoTRequest::Action action, DeletePolicyVersionRequest * const q)
    : DeletePolicyVersionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeletePolicyVersionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeletePolicyVersionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeletePolicyVersionRequest instance.
 */
DeletePolicyVersionRequestPrivate::DeletePolicyVersionRequestPrivate(
    const DeletePolicyVersionRequestPrivate &other, DeletePolicyVersionRequest * const q)
    : DeletePolicyVersionPrivate(other, q)
{

}

} // namespace IoT
} // namespace AWS