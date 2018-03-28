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

#include "getdetectorresponse.h"
#include "getdetectorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace GuardDuty {

/**
 * @class  GetDetectorResponse
 *
 * @brief  Handles GuardDuty GetDetector responses.
 *
 * @see    GuardDutyClient::getDetector
 */

/**
 * @brief  Constructs a new GetDetectorResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetDetectorResponse::GetDetectorResponse(
        const GetDetectorRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GuardDutyResponse(new GetDetectorResponsePrivate(this), parent)
{
    setRequest(new GetDetectorRequest(request));
    setReply(reply);
}

const GetDetectorRequest * GetDetectorResponse::request() const
{
    Q_D(const GetDetectorResponse);
    return static_cast<const GetDetectorRequest *>(d->request);
}

/**
 * @brief  Parse a GuardDuty GetDetector response.
 *
 * @param  response  Response to parse.
 */
void GetDetectorResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetDetectorResponsePrivate
 *
 * @brief  Private implementation for GetDetectorResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetDetectorResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetDetectorResponse instance.
 */
GetDetectorResponsePrivate::GetDetectorResponsePrivate(
    GetDetectorQueueResponse * const q) : GetDetectorPrivate(q)
{

}

/**
 * @brief  Parse an GuardDuty GetDetectorResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetDetectorResponsePrivate::GetDetectorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDetectorResponse"));
    /// @todo
}

} // namespace GuardDuty
} // namespace AWS