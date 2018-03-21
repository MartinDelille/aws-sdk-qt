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

#include "restartappserverrequest.h"
#include "restartappserverrequest_p.h"
#include "restartappserverresponse.h"
#include "elasticbeanstalkrequest_p.h"

namespace AWS {
namespace ElasticBeanstalk {

/**
 * @class  RestartAppServerRequest
 *
 * @brief  Implements ElasticBeanstalk RestartAppServer requests.
 *
 * @see    ElasticBeanstalkClient::restartAppServer
 */

/**
 * @brief  Constructs a new RestartAppServerResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RestartAppServerResponse::RestartAppServerResponse(

/**
 * @brief  Constructs a new RestartAppServerRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RestartAppServerRequest::RestartAppServerRequest(const RestartAppServerRequest &other)
    : ElasticBeanstalkRequest(new RestartAppServerRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RestartAppServerRequest object.
 */
RestartAppServerRequest::RestartAppServerRequest()
    : ElasticBeanstalkRequest(new RestartAppServerRequestPrivate(ElasticBeanstalkRequest::RestartAppServerAction, this))
{

}

bool RestartAppServerRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RestartAppServerResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RestartAppServerResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ElasticBeanstalkClient::send
 */
AwsAbstractResponse * RestartAppServerRequest::response(QNetworkReply * const reply) const
{
    return new RestartAppServerResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RestartAppServerRequestPrivate
 *
 * @brief  Private implementation for RestartAppServerRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RestartAppServerRequestPrivate object.
 *
 * @param  action  ElasticBeanstalk action being performed.
 * @param  q       Pointer to this object's public RestartAppServerRequest instance.
 */
RestartAppServerRequestPrivate::RestartAppServerRequestPrivate(
    const ElasticBeanstalkRequest::Action action, RestartAppServerRequest * const q)
    : RestartAppServerPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RestartAppServerRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RestartAppServerRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RestartAppServerRequest instance.
 */
RestartAppServerRequestPrivate::RestartAppServerRequestPrivate(
    const RestartAppServerRequestPrivate &other, RestartAppServerRequest * const q)
    : RestartAppServerPrivate(other, q)
{

}
