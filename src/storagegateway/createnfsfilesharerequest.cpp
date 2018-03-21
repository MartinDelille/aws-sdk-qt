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

#include "createnfsfilesharerequest.h"
#include "createnfsfilesharerequest_p.h"
#include "createnfsfileshareresponse.h"
#include "storagegatewayrequest_p.h"

namespace AWS {
namespace StorageGateway {

/**
 * @class  CreateNFSFileShareRequest
 *
 * @brief  Implements StorageGateway CreateNFSFileShare requests.
 *
 * @see    StorageGatewayClient::createNFSFileShare
 */

/**
 * @brief  Constructs a new CreateNFSFileShareResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateNFSFileShareResponse::CreateNFSFileShareResponse(

/**
 * @brief  Constructs a new CreateNFSFileShareRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateNFSFileShareRequest::CreateNFSFileShareRequest(const CreateNFSFileShareRequest &other)
    : StorageGatewayRequest(new CreateNFSFileShareRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateNFSFileShareRequest object.
 */
CreateNFSFileShareRequest::CreateNFSFileShareRequest()
    : StorageGatewayRequest(new CreateNFSFileShareRequestPrivate(StorageGatewayRequest::CreateNFSFileShareAction, this))
{

}

bool CreateNFSFileShareRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateNFSFileShareResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateNFSFileShareResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  StorageGatewayClient::send
 */
AwsAbstractResponse * CreateNFSFileShareRequest::response(QNetworkReply * const reply) const
{
    return new CreateNFSFileShareResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateNFSFileShareRequestPrivate
 *
 * @brief  Private implementation for CreateNFSFileShareRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateNFSFileShareRequestPrivate object.
 *
 * @param  action  StorageGateway action being performed.
 * @param  q       Pointer to this object's public CreateNFSFileShareRequest instance.
 */
CreateNFSFileShareRequestPrivate::CreateNFSFileShareRequestPrivate(
    const StorageGatewayRequest::Action action, CreateNFSFileShareRequest * const q)
    : CreateNFSFileSharePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateNFSFileShareRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateNFSFileShareRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateNFSFileShareRequest instance.
 */
CreateNFSFileShareRequestPrivate::CreateNFSFileShareRequestPrivate(
    const CreateNFSFileShareRequestPrivate &other, CreateNFSFileShareRequest * const q)
    : CreateNFSFileSharePrivate(other, q)
{

}
