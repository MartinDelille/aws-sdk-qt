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

#include "deleteintentversionresponse.h"
#include "deleteintentversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace LexModelBuildingService {

/**
 * @class  DeleteIntentVersionResponse
 *
 * @brief  Handles LexModelBuildingService DeleteIntentVersion responses.
 *
 * @see    LexModelBuildingServiceClient::deleteIntentVersion
 */

/**
 * @brief  Constructs a new DeleteIntentVersionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteIntentVersionResponse::DeleteIntentVersionResponse(
        const DeleteIntentVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelBuildingServiceResponse(new DeleteIntentVersionResponsePrivate(this), parent)
{
    setRequest(new DeleteIntentVersionRequest(request));
    setReply(reply);
}

const DeleteIntentVersionRequest * DeleteIntentVersionResponse::request() const
{
    Q_D(const DeleteIntentVersionResponse);
    return static_cast<const DeleteIntentVersionRequest *>(d->request);
}

/**
 * @brief  Parse a LexModelBuildingService DeleteIntentVersion response.
 *
 * @param  response  Response to parse.
 */
void DeleteIntentVersionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteIntentVersionResponsePrivate
 *
 * @brief  Private implementation for DeleteIntentVersionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteIntentVersionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteIntentVersionResponse instance.
 */
DeleteIntentVersionResponsePrivate::DeleteIntentVersionResponsePrivate(
    DeleteIntentVersionQueueResponse * const q) : DeleteIntentVersionPrivate(q)
{

}

/**
 * @brief  Parse an LexModelBuildingService DeleteIntentVersionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteIntentVersionResponsePrivate::DeleteIntentVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteIntentVersionResponse"));
    /// @todo
}

} // namespace LexModelBuildingService
} // namespace AWS