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

#include "updateapplicationresourcelifecyclerequest.h"
#include "updateapplicationresourcelifecyclerequest_p.h"
#include "updateapplicationresourcelifecycleresponse.h"
#include "elasticbeanstalkrequest_p.h"

namespace AWS {
namespace ElasticBeanstalk {

/**
 * @class  UpdateApplicationResourceLifecycleRequest
 *
 * @brief  Implements ElasticBeanstalk UpdateApplicationResourceLifecycle requests.
 *
 * @see    ElasticBeanstalkClient::updateApplicationResourceLifecycle
 */

/**
 * @brief  Constructs a new UpdateApplicationResourceLifecycleResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateApplicationResourceLifecycleResponse::UpdateApplicationResourceLifecycleResponse(

/**
 * @brief  Constructs a new UpdateApplicationResourceLifecycleRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateApplicationResourceLifecycleRequest::UpdateApplicationResourceLifecycleRequest(const UpdateApplicationResourceLifecycleRequest &other)
    : ElasticBeanstalkRequest(new UpdateApplicationResourceLifecycleRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateApplicationResourceLifecycleRequest object.
 */
UpdateApplicationResourceLifecycleRequest::UpdateApplicationResourceLifecycleRequest()
    : ElasticBeanstalkRequest(new UpdateApplicationResourceLifecycleRequestPrivate(ElasticBeanstalkRequest::UpdateApplicationResourceLifecycleAction, this))
{

}

bool UpdateApplicationResourceLifecycleRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateApplicationResourceLifecycleResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateApplicationResourceLifecycleResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ElasticBeanstalkClient::send
 */
AwsAbstractResponse * UpdateApplicationResourceLifecycleRequest::response(QNetworkReply * const reply) const
{
    return new UpdateApplicationResourceLifecycleResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateApplicationResourceLifecycleRequestPrivate
 *
 * @brief  Private implementation for UpdateApplicationResourceLifecycleRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateApplicationResourceLifecycleRequestPrivate object.
 *
 * @param  action  ElasticBeanstalk action being performed.
 * @param  q       Pointer to this object's public UpdateApplicationResourceLifecycleRequest instance.
 */
UpdateApplicationResourceLifecycleRequestPrivate::UpdateApplicationResourceLifecycleRequestPrivate(
    const ElasticBeanstalkRequest::Action action, UpdateApplicationResourceLifecycleRequest * const q)
    : UpdateApplicationResourceLifecyclePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateApplicationResourceLifecycleRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateApplicationResourceLifecycleRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateApplicationResourceLifecycleRequest instance.
 */
UpdateApplicationResourceLifecycleRequestPrivate::UpdateApplicationResourceLifecycleRequestPrivate(
    const UpdateApplicationResourceLifecycleRequestPrivate &other, UpdateApplicationResourceLifecycleRequest * const q)
    : UpdateApplicationResourceLifecyclePrivate(other, q)
{

}
