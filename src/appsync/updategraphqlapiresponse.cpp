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

#include "updategraphqlapiresponse.h"
#include "updategraphqlapiresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace AppSync {

/**
 * @class  UpdateGraphqlApiResponse
 *
 * @brief  Handles AppSync UpdateGraphqlApi responses.
 *
 * @see    AppSyncClient::updateGraphqlApi
 */

/**
 * @brief  Constructs a new UpdateGraphqlApiResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateGraphqlApiResponse::UpdateGraphqlApiResponse(
        const UpdateGraphqlApiRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppSyncResponse(new UpdateGraphqlApiResponsePrivate(this), parent)
{
    setRequest(new UpdateGraphqlApiRequest(request));
    setReply(reply);
}

const UpdateGraphqlApiRequest * UpdateGraphqlApiResponse::request() const
{
    Q_D(const UpdateGraphqlApiResponse);
    return static_cast<const UpdateGraphqlApiRequest *>(d->request);
}

/**
 * @brief  Parse a AppSync UpdateGraphqlApi response.
 *
 * @param  response  Response to parse.
 */
void UpdateGraphqlApiResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateGraphqlApiResponsePrivate
 *
 * @brief  Private implementation for UpdateGraphqlApiResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateGraphqlApiResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateGraphqlApiResponse instance.
 */
UpdateGraphqlApiResponsePrivate::UpdateGraphqlApiResponsePrivate(
    UpdateGraphqlApiQueueResponse * const q) : UpdateGraphqlApiPrivate(q)
{

}

/**
 * @brief  Parse an AppSync UpdateGraphqlApiResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateGraphqlApiResponsePrivate::UpdateGraphqlApiResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateGraphqlApiResponse"));
    /// @todo
}

} // namespace AppSync
} // namespace AWS