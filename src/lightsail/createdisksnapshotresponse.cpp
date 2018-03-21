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

#include "createdisksnapshotresponse.h"
#include "createdisksnapshotresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Lightsail {

/**
 * @class  CreateDiskSnapshotResponse
 *
 * @brief  Handles Lightsail CreateDiskSnapshot responses.
 *
 * @see    LightsailClient::createDiskSnapshot
 */

/**
 * @brief  Constructs a new CreateDiskSnapshotResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateDiskSnapshotResponse::CreateDiskSnapshotResponse(
        const CreateDiskSnapshotRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LightsailResponse(new CreateDiskSnapshotResponsePrivate(this), parent)
{
    setRequest(new CreateDiskSnapshotRequest(request));
    setReply(reply);
}

const CreateDiskSnapshotRequest * CreateDiskSnapshotResponse::request() const
{
    Q_D(const CreateDiskSnapshotResponse);
    return static_cast<const CreateDiskSnapshotRequest *>(d->request);
}

/**
 * @brief  Parse a Lightsail CreateDiskSnapshot response.
 *
 * @param  response  Response to parse.
 */
void CreateDiskSnapshotResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateDiskSnapshotResponsePrivate
 *
 * @brief  Private implementation for CreateDiskSnapshotResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateDiskSnapshotResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateDiskSnapshotResponse instance.
 */
CreateDiskSnapshotResponsePrivate::CreateDiskSnapshotResponsePrivate(
    CreateDiskSnapshotQueueResponse * const q) : CreateDiskSnapshotPrivate(q)
{

}

/**
 * @brief  Parse an Lightsail CreateDiskSnapshotResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateDiskSnapshotResponsePrivate::CreateDiskSnapshotResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDiskSnapshotResponse"));
    /// @todo
}

} // namespace Lightsail
} // namespace AWS
