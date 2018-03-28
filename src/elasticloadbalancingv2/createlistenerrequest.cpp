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

#include "createlistenerrequest.h"
#include "createlistenerrequest_p.h"
#include "createlistenerresponse.h"
#include "elasticloadbalancingv2request_p.h"

namespace AWS {
namespace ElasticLoadBalancingv2 {

/**
 * @class  CreateListenerRequest
 *
 * @brief  Implements ElasticLoadBalancingv2 CreateListener requests.
 *
 * @see    ElasticLoadBalancingv2Client::createListener
 */

/**
 * @brief  Constructs a new CreateListenerRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateListenerRequest::CreateListenerRequest(const CreateListenerRequest &other)
    : ElasticLoadBalancingv2Request(new CreateListenerRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateListenerRequest object.
 */
CreateListenerRequest::CreateListenerRequest()
    : ElasticLoadBalancingv2Request(new CreateListenerRequestPrivate(ElasticLoadBalancingv2Request::CreateListenerAction, this))
{

}

bool CreateListenerRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateListenerResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateListenerResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ElasticLoadBalancingv2Client::send
 */
AwsAbstractResponse * CreateListenerRequest::response(QNetworkReply * const reply) const
{
    return new CreateListenerResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateListenerRequestPrivate
 *
 * @brief  Private implementation for CreateListenerRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateListenerRequestPrivate object.
 *
 * @param  action  ElasticLoadBalancingv2 action being performed.
 * @param  q       Pointer to this object's public CreateListenerRequest instance.
 */
CreateListenerRequestPrivate::CreateListenerRequestPrivate(
    const ElasticLoadBalancingv2Request::Action action, CreateListenerRequest * const q)
    : CreateListenerPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateListenerRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateListenerRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateListenerRequest instance.
 */
CreateListenerRequestPrivate::CreateListenerRequestPrivate(
    const CreateListenerRequestPrivate &other, CreateListenerRequest * const q)
    : CreateListenerPrivate(other, q)
{

}

} // namespace ElasticLoadBalancingv2
} // namespace AWS