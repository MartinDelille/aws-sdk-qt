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

#include "createfleetrequest.h"
#include "createfleetrequest_p.h"
#include "createfleetresponse.h"
#include "gameliftrequest_p.h"

namespace AWS {
namespace GameLift {

/**
 * @class  CreateFleetRequest
 *
 * @brief  Implements GameLift CreateFleet requests.
 *
 * @see    GameLiftClient::createFleet
 */

/**
 * @brief  Constructs a new CreateFleetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateFleetRequest::CreateFleetRequest(const CreateFleetRequest &other)
    : GameLiftRequest(new CreateFleetRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateFleetRequest object.
 */
CreateFleetRequest::CreateFleetRequest()
    : GameLiftRequest(new CreateFleetRequestPrivate(GameLiftRequest::CreateFleetAction, this))
{

}

bool CreateFleetRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateFleetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateFleetResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GameLiftClient::send
 */
AwsAbstractResponse * CreateFleetRequest::response(QNetworkReply * const reply) const
{
    return new CreateFleetResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateFleetRequestPrivate
 *
 * @brief  Private implementation for CreateFleetRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateFleetRequestPrivate object.
 *
 * @param  action  GameLift action being performed.
 * @param  q       Pointer to this object's public CreateFleetRequest instance.
 */
CreateFleetRequestPrivate::CreateFleetRequestPrivate(
    const GameLiftRequest::Action action, CreateFleetRequest * const q)
    : CreateFleetPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateFleetRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateFleetRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateFleetRequest instance.
 */
CreateFleetRequestPrivate::CreateFleetRequestPrivate(
    const CreateFleetRequestPrivate &other, CreateFleetRequest * const q)
    : CreateFleetPrivate(other, q)
{

}

} // namespace GameLift
} // namespace AWS