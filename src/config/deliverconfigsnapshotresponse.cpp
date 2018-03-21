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

#include "deliverconfigsnapshotresponse.h"
#include "deliverconfigsnapshotresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ConfigService {

/**
 * @class  DeliverConfigSnapshotResponse
 *
 * @brief  Handles ConfigService DeliverConfigSnapshot responses.
 *
 * @see    ConfigServiceClient::deliverConfigSnapshot
 */

/**
 * @brief  Constructs a new DeliverConfigSnapshotResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeliverConfigSnapshotResponse::DeliverConfigSnapshotResponse(
        const DeliverConfigSnapshotRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ConfigServiceResponse(new DeliverConfigSnapshotResponsePrivate(this), parent)
{
    setRequest(new DeliverConfigSnapshotRequest(request));
    setReply(reply);
}

const DeliverConfigSnapshotRequest * DeliverConfigSnapshotResponse::request() const
{
    Q_D(const DeliverConfigSnapshotResponse);
    return static_cast<const DeliverConfigSnapshotRequest *>(d->request);
}

/**
 * @brief  Parse a ConfigService DeliverConfigSnapshot response.
 *
 * @param  response  Response to parse.
 */
void DeliverConfigSnapshotResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeliverConfigSnapshotResponsePrivate
 *
 * @brief  Private implementation for DeliverConfigSnapshotResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeliverConfigSnapshotResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeliverConfigSnapshotResponse instance.
 */
DeliverConfigSnapshotResponsePrivate::DeliverConfigSnapshotResponsePrivate(
    DeliverConfigSnapshotQueueResponse * const q) : DeliverConfigSnapshotPrivate(q)
{

}

/**
 * @brief  Parse an ConfigService DeliverConfigSnapshotResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeliverConfigSnapshotResponsePrivate::DeliverConfigSnapshotResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeliverConfigSnapshotResponse"));
    /// @todo
}

} // namespace ConfigService
} // namespace AWS
