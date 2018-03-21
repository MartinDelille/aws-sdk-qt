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

#include "addpermissionrequest.h"
#include "addpermissionrequest_p.h"
#include "addpermissionresponse.h"
#include "snsrequest_p.h"

namespace AWS {
namespace SNS {

/**
 * @class  AddPermissionRequest
 *
 * @brief  Implements SNS AddPermission requests.
 *
 * @see    SNSClient::addPermission
 */

/**
 * @brief  Constructs a new AddPermissionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AddPermissionResponse::AddPermissionResponse(

/**
 * @brief  Constructs a new AddPermissionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AddPermissionRequest::AddPermissionRequest(const AddPermissionRequest &other)
    : SNSRequest(new AddPermissionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AddPermissionRequest object.
 */
AddPermissionRequest::AddPermissionRequest()
    : SNSRequest(new AddPermissionRequestPrivate(SNSRequest::AddPermissionAction, this))
{

}

bool AddPermissionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AddPermissionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AddPermissionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SNSClient::send
 */
AwsAbstractResponse * AddPermissionRequest::response(QNetworkReply * const reply) const
{
    return new AddPermissionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AddPermissionRequestPrivate
 *
 * @brief  Private implementation for AddPermissionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AddPermissionRequestPrivate object.
 *
 * @param  action  SNS action being performed.
 * @param  q       Pointer to this object's public AddPermissionRequest instance.
 */
AddPermissionRequestPrivate::AddPermissionRequestPrivate(
    const SNSRequest::Action action, AddPermissionRequest * const q)
    : AddPermissionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AddPermissionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AddPermissionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AddPermissionRequest instance.
 */
AddPermissionRequestPrivate::AddPermissionRequestPrivate(
    const AddPermissionRequestPrivate &other, AddPermissionRequest * const q)
    : AddPermissionPrivate(other, q)
{

}
