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

#include "startstreamprocessorrequest.h"
#include "startstreamprocessorrequest_p.h"
#include "startstreamprocessorresponse.h"
#include "rekognitionrequest_p.h"

namespace AWS {
namespace Rekognition {

/**
 * @class  StartStreamProcessorRequest
 *
 * @brief  Implements Rekognition StartStreamProcessor requests.
 *
 * @see    RekognitionClient::startStreamProcessor
 */

/**
 * @brief  Constructs a new StartStreamProcessorResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StartStreamProcessorResponse::StartStreamProcessorResponse(

/**
 * @brief  Constructs a new StartStreamProcessorRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
StartStreamProcessorRequest::StartStreamProcessorRequest(const StartStreamProcessorRequest &other)
    : RekognitionRequest(new StartStreamProcessorRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new StartStreamProcessorRequest object.
 */
StartStreamProcessorRequest::StartStreamProcessorRequest()
    : RekognitionRequest(new StartStreamProcessorRequestPrivate(RekognitionRequest::StartStreamProcessorAction, this))
{

}

bool StartStreamProcessorRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an StartStreamProcessorResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An StartStreamProcessorResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RekognitionClient::send
 */
AwsAbstractResponse * StartStreamProcessorRequest::response(QNetworkReply * const reply) const
{
    return new StartStreamProcessorResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  StartStreamProcessorRequestPrivate
 *
 * @brief  Private implementation for StartStreamProcessorRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StartStreamProcessorRequestPrivate object.
 *
 * @param  action  Rekognition action being performed.
 * @param  q       Pointer to this object's public StartStreamProcessorRequest instance.
 */
StartStreamProcessorRequestPrivate::StartStreamProcessorRequestPrivate(
    const RekognitionRequest::Action action, StartStreamProcessorRequest * const q)
    : StartStreamProcessorPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new StartStreamProcessorRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the StartStreamProcessorRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public StartStreamProcessorRequest instance.
 */
StartStreamProcessorRequestPrivate::StartStreamProcessorRequestPrivate(
    const StartStreamProcessorRequestPrivate &other, StartStreamProcessorRequest * const q)
    : StartStreamProcessorPrivate(other, q)
{

}
