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

#include "authorizesecuritygroupingressrequest.h"
#include "authorizesecuritygroupingressrequest_p.h"
#include "authorizesecuritygroupingressresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  AuthorizeSecurityGroupIngressRequest
 *
 * @brief  Implements EC2 AuthorizeSecurityGroupIngress requests.
 *
 * @see    EC2Client::authorizeSecurityGroupIngress
 */

/**
 * @brief  Constructs a new AuthorizeSecurityGroupIngressRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AuthorizeSecurityGroupIngressRequest::AuthorizeSecurityGroupIngressRequest(const AuthorizeSecurityGroupIngressRequest &other)
    : EC2Request(new AuthorizeSecurityGroupIngressRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AuthorizeSecurityGroupIngressRequest object.
 */
AuthorizeSecurityGroupIngressRequest::AuthorizeSecurityGroupIngressRequest()
    : EC2Request(new AuthorizeSecurityGroupIngressRequestPrivate(EC2Request::AuthorizeSecurityGroupIngressAction, this))
{

}

bool AuthorizeSecurityGroupIngressRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AuthorizeSecurityGroupIngressResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AuthorizeSecurityGroupIngressResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * AuthorizeSecurityGroupIngressRequest::response(QNetworkReply * const reply) const
{
    return new AuthorizeSecurityGroupIngressResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AuthorizeSecurityGroupIngressRequestPrivate
 *
 * @brief  Private implementation for AuthorizeSecurityGroupIngressRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AuthorizeSecurityGroupIngressRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public AuthorizeSecurityGroupIngressRequest instance.
 */
AuthorizeSecurityGroupIngressRequestPrivate::AuthorizeSecurityGroupIngressRequestPrivate(
    const EC2Request::Action action, AuthorizeSecurityGroupIngressRequest * const q)
    : AuthorizeSecurityGroupIngressPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AuthorizeSecurityGroupIngressRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AuthorizeSecurityGroupIngressRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AuthorizeSecurityGroupIngressRequest instance.
 */
AuthorizeSecurityGroupIngressRequestPrivate::AuthorizeSecurityGroupIngressRequestPrivate(
    const AuthorizeSecurityGroupIngressRequestPrivate &other, AuthorizeSecurityGroupIngressRequest * const q)
    : AuthorizeSecurityGroupIngressPrivate(other, q)
{

}

} // namespace EC2
} // namespace AWS