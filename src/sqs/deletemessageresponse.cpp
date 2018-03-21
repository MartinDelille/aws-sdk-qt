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

#include "deletemessageresponse.h"
#include "deletemessageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SQS {

/**
 * @class  DeleteMessageResponse
 *
 * @brief  Handles SQS DeleteMessage responses.
 *
 * @see    SQSClient::deleteMessage
 */

/**
 * @brief  Constructs a new DeleteMessageResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteMessageResponse::DeleteMessageResponse(
        const DeleteMessageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SQSResponse(new DeleteMessageResponsePrivate(this), parent)
{
    setRequest(new DeleteMessageRequest(request));
    setReply(reply);
}

const DeleteMessageRequest * DeleteMessageResponse::request() const
{
    Q_D(const DeleteMessageResponse);
    return static_cast<const DeleteMessageRequest *>(d->request);
}

/**
 * @brief  Parse a SQS DeleteMessage response.
 *
 * @param  response  Response to parse.
 */
void DeleteMessageResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteMessageResponsePrivate
 *
 * @brief  Private implementation for DeleteMessageResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteMessageResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteMessageResponse instance.
 */
DeleteMessageResponsePrivate::DeleteMessageResponsePrivate(
    DeleteMessageQueueResponse * const q) : DeleteMessagePrivate(q)
{

}

/**
 * @brief  Parse an SQS DeleteMessageResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteMessageResponsePrivate::DeleteMessageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteMessageResponse"));
    /// @todo
}

} // namespace SQS
} // namespace AWS
