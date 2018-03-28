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

#include "describebuildrequest.h"
#include "describebuildrequest_p.h"
#include "describebuildresponse.h"
#include "gameliftrequest_p.h"

namespace AWS {
namespace GameLift {

/**
 * @class  DescribeBuildRequest
 *
 * @brief  Implements GameLift DescribeBuild requests.
 *
 * @see    GameLiftClient::describeBuild
 */

/**
 * @brief  Constructs a new DescribeBuildRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeBuildRequest::DescribeBuildRequest(const DescribeBuildRequest &other)
    : GameLiftRequest(new DescribeBuildRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeBuildRequest object.
 */
DescribeBuildRequest::DescribeBuildRequest()
    : GameLiftRequest(new DescribeBuildRequestPrivate(GameLiftRequest::DescribeBuildAction, this))
{

}

bool DescribeBuildRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeBuildResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeBuildResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GameLiftClient::send
 */
AwsAbstractResponse * DescribeBuildRequest::response(QNetworkReply * const reply) const
{
    return new DescribeBuildResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeBuildRequestPrivate
 *
 * @brief  Private implementation for DescribeBuildRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeBuildRequestPrivate object.
 *
 * @param  action  GameLift action being performed.
 * @param  q       Pointer to this object's public DescribeBuildRequest instance.
 */
DescribeBuildRequestPrivate::DescribeBuildRequestPrivate(
    const GameLiftRequest::Action action, DescribeBuildRequest * const q)
    : DescribeBuildPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeBuildRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeBuildRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeBuildRequest instance.
 */
DescribeBuildRequestPrivate::DescribeBuildRequestPrivate(
    const DescribeBuildRequestPrivate &other, DescribeBuildRequest * const q)
    : DescribeBuildPrivate(other, q)
{

}

} // namespace GameLift
} // namespace AWS