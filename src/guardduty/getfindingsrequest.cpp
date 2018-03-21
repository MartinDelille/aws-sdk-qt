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

#include "getfindingsrequest.h"
#include "getfindingsrequest_p.h"
#include "getfindingsresponse.h"
#include "guarddutyrequest_p.h"

namespace AWS {
namespace GuardDuty {

/**
 * @class  GetFindingsRequest
 *
 * @brief  Implements GuardDuty GetFindings requests.
 *
 * @see    GuardDutyClient::getFindings
 */

/**
 * @brief  Constructs a new GetFindingsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetFindingsResponse::GetFindingsResponse(

/**
 * @brief  Constructs a new GetFindingsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetFindingsRequest::GetFindingsRequest(const GetFindingsRequest &other)
    : GuardDutyRequest(new GetFindingsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetFindingsRequest object.
 */
GetFindingsRequest::GetFindingsRequest()
    : GuardDutyRequest(new GetFindingsRequestPrivate(GuardDutyRequest::GetFindingsAction, this))
{

}

bool GetFindingsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetFindingsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetFindingsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GuardDutyClient::send
 */
AwsAbstractResponse * GetFindingsRequest::response(QNetworkReply * const reply) const
{
    return new GetFindingsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetFindingsRequestPrivate
 *
 * @brief  Private implementation for GetFindingsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetFindingsRequestPrivate object.
 *
 * @param  action  GuardDuty action being performed.
 * @param  q       Pointer to this object's public GetFindingsRequest instance.
 */
GetFindingsRequestPrivate::GetFindingsRequestPrivate(
    const GuardDutyRequest::Action action, GetFindingsRequest * const q)
    : GetFindingsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetFindingsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetFindingsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetFindingsRequest instance.
 */
GetFindingsRequestPrivate::GetFindingsRequestPrivate(
    const GetFindingsRequestPrivate &other, GetFindingsRequest * const q)
    : GetFindingsPrivate(other, q)
{

}
