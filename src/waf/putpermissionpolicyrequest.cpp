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

#include "putpermissionpolicyrequest.h"
#include "putpermissionpolicyrequest_p.h"
#include "putpermissionpolicyresponse.h"
#include "wafrequest_p.h"

namespace AWS {
namespace WAF {

/**
 * @class  PutPermissionPolicyRequest
 *
 * @brief  Implements WAF PutPermissionPolicy requests.
 *
 * @see    WAFClient::putPermissionPolicy
 */

/**
 * @brief  Constructs a new PutPermissionPolicyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutPermissionPolicyRequest::PutPermissionPolicyRequest(const PutPermissionPolicyRequest &other)
    : WAFRequest(new PutPermissionPolicyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PutPermissionPolicyRequest object.
 */
PutPermissionPolicyRequest::PutPermissionPolicyRequest()
    : WAFRequest(new PutPermissionPolicyRequestPrivate(WAFRequest::PutPermissionPolicyAction, this))
{

}

bool PutPermissionPolicyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PutPermissionPolicyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutPermissionPolicyResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  WAFClient::send
 */
AwsAbstractResponse * PutPermissionPolicyRequest::response(QNetworkReply * const reply) const
{
    return new PutPermissionPolicyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PutPermissionPolicyRequestPrivate
 *
 * @brief  Private implementation for PutPermissionPolicyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutPermissionPolicyRequestPrivate object.
 *
 * @param  action  WAF action being performed.
 * @param  q       Pointer to this object's public PutPermissionPolicyRequest instance.
 */
PutPermissionPolicyRequestPrivate::PutPermissionPolicyRequestPrivate(
    const WAFRequest::Action action, PutPermissionPolicyRequest * const q)
    : PutPermissionPolicyPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PutPermissionPolicyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PutPermissionPolicyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PutPermissionPolicyRequest instance.
 */
PutPermissionPolicyRequestPrivate::PutPermissionPolicyRequestPrivate(
    const PutPermissionPolicyRequestPrivate &other, PutPermissionPolicyRequest * const q)
    : PutPermissionPolicyPrivate(other, q)
{

}

} // namespace WAF
} // namespace AWS