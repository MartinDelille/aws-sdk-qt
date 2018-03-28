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

#include "stopfleetresponse.h"
#include "stopfleetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace AppStream {

/**
 * @class  StopFleetResponse
 *
 * @brief  Handles AppStream StopFleet responses.
 *
 * @see    AppStreamClient::stopFleet
 */

/**
 * @brief  Constructs a new StopFleetResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StopFleetResponse::StopFleetResponse(
        const StopFleetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppStreamResponse(new StopFleetResponsePrivate(this), parent)
{
    setRequest(new StopFleetRequest(request));
    setReply(reply);
}

const StopFleetRequest * StopFleetResponse::request() const
{
    Q_D(const StopFleetResponse);
    return static_cast<const StopFleetRequest *>(d->request);
}

/**
 * @brief  Parse a AppStream StopFleet response.
 *
 * @param  response  Response to parse.
 */
void StopFleetResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  StopFleetResponsePrivate
 *
 * @brief  Private implementation for StopFleetResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StopFleetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public StopFleetResponse instance.
 */
StopFleetResponsePrivate::StopFleetResponsePrivate(
    StopFleetQueueResponse * const q) : StopFleetPrivate(q)
{

}

/**
 * @brief  Parse an AppStream StopFleetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void StopFleetResponsePrivate::StopFleetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopFleetResponse"));
    /// @todo
}

} // namespace AppStream
} // namespace AWS