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

#include "createapplicationrequest.h"
#include "createapplicationrequest_p.h"
#include "createapplicationresponse.h"
#include "elasticbeanstalkrequest_p.h"

namespace AWS {
namespace ElasticBeanstalk {

/**
 * @class  CreateApplicationRequest
 *
 * @brief  Implements ElasticBeanstalk CreateApplication requests.
 *
 * @see    ElasticBeanstalkClient::createApplication
 */

/**
 * @brief  Constructs a new CreateApplicationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateApplicationRequest::CreateApplicationRequest(const CreateApplicationRequest &other)
    : ElasticBeanstalkRequest(new CreateApplicationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateApplicationRequest object.
 */
CreateApplicationRequest::CreateApplicationRequest()
    : ElasticBeanstalkRequest(new CreateApplicationRequestPrivate(ElasticBeanstalkRequest::CreateApplicationAction, this))
{

}

bool CreateApplicationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateApplicationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateApplicationResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ElasticBeanstalkClient::send
 */
AwsAbstractResponse * CreateApplicationRequest::response(QNetworkReply * const reply) const
{
    return new CreateApplicationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateApplicationRequestPrivate
 *
 * @brief  Private implementation for CreateApplicationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateApplicationRequestPrivate object.
 *
 * @param  action  ElasticBeanstalk action being performed.
 * @param  q       Pointer to this object's public CreateApplicationRequest instance.
 */
CreateApplicationRequestPrivate::CreateApplicationRequestPrivate(
    const ElasticBeanstalkRequest::Action action, CreateApplicationRequest * const q)
    : CreateApplicationPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateApplicationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateApplicationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateApplicationRequest instance.
 */
CreateApplicationRequestPrivate::CreateApplicationRequestPrivate(
    const CreateApplicationRequestPrivate &other, CreateApplicationRequest * const q)
    : CreateApplicationPrivate(other, q)
{

}

} // namespace ElasticBeanstalk
} // namespace AWS