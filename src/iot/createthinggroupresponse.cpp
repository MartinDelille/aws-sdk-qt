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

#include "createthinggroupresponse.h"
#include "createthinggroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace IoT {

/**
 * @class  CreateThingGroupResponse
 *
 * @brief  Handles IoT CreateThingGroup responses.
 *
 * @see    IoTClient::createThingGroup
 */

/**
 * @brief  Constructs a new CreateThingGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateThingGroupResponse::CreateThingGroupResponse(
        const CreateThingGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new CreateThingGroupResponsePrivate(this), parent)
{
    setRequest(new CreateThingGroupRequest(request));
    setReply(reply);
}

const CreateThingGroupRequest * CreateThingGroupResponse::request() const
{
    Q_D(const CreateThingGroupResponse);
    return static_cast<const CreateThingGroupRequest *>(d->request);
}

/**
 * @brief  Parse a IoT CreateThingGroup response.
 *
 * @param  response  Response to parse.
 */
void CreateThingGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateThingGroupResponsePrivate
 *
 * @brief  Private implementation for CreateThingGroupResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateThingGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateThingGroupResponse instance.
 */
CreateThingGroupResponsePrivate::CreateThingGroupResponsePrivate(
    CreateThingGroupQueueResponse * const q) : CreateThingGroupPrivate(q)
{

}

/**
 * @brief  Parse an IoT CreateThingGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateThingGroupResponsePrivate::CreateThingGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateThingGroupResponse"));
    /// @todo
}

} // namespace IoT
} // namespace AWS