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

#include "updateroomresponse.h"
#include "updateroomresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace AlexaForBusiness {

/**
 * @class  UpdateRoomResponse
 *
 * @brief  Handles AlexaForBusiness UpdateRoom responses.
 *
 * @see    AlexaForBusinessClient::updateRoom
 */

/**
 * @brief  Constructs a new UpdateRoomResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateRoomResponse::UpdateRoomResponse(
        const UpdateRoomRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new UpdateRoomResponsePrivate(this), parent)
{
    setRequest(new UpdateRoomRequest(request));
    setReply(reply);
}

const UpdateRoomRequest * UpdateRoomResponse::request() const
{
    Q_D(const UpdateRoomResponse);
    return static_cast<const UpdateRoomRequest *>(d->request);
}

/**
 * @brief  Parse a AlexaForBusiness UpdateRoom response.
 *
 * @param  response  Response to parse.
 */
void UpdateRoomResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateRoomResponsePrivate
 *
 * @brief  Private implementation for UpdateRoomResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateRoomResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateRoomResponse instance.
 */
UpdateRoomResponsePrivate::UpdateRoomResponsePrivate(
    UpdateRoomQueueResponse * const q) : UpdateRoomPrivate(q)
{

}

/**
 * @brief  Parse an AlexaForBusiness UpdateRoomResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateRoomResponsePrivate::UpdateRoomResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateRoomResponse"));
    /// @todo
}

} // namespace AlexaForBusiness
} // namespace AWS