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

#include "deleteserviceresponse.h"
#include "deleteserviceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ECS {

/**
 * @class  DeleteServiceResponse
 *
 * @brief  Handles ECS DeleteService responses.
 *
 * @see    ECSClient::deleteService
 */

/**
 * @brief  Constructs a new DeleteServiceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteServiceResponse::DeleteServiceResponse(
        const DeleteServiceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ECSResponse(new DeleteServiceResponsePrivate(this), parent)
{
    setRequest(new DeleteServiceRequest(request));
    setReply(reply);
}

const DeleteServiceRequest * DeleteServiceResponse::request() const
{
    Q_D(const DeleteServiceResponse);
    return static_cast<const DeleteServiceRequest *>(d->request);
}

/**
 * @brief  Parse a ECS DeleteService response.
 *
 * @param  response  Response to parse.
 */
void DeleteServiceResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteServiceResponsePrivate
 *
 * @brief  Private implementation for DeleteServiceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteServiceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteServiceResponse instance.
 */
DeleteServiceResponsePrivate::DeleteServiceResponsePrivate(
    DeleteServiceQueueResponse * const q) : DeleteServicePrivate(q)
{

}

/**
 * @brief  Parse an ECS DeleteServiceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteServiceResponsePrivate::DeleteServiceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteServiceResponse"));
    /// @todo
}

} // namespace ECS
} // namespace AWS