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

#include "createdocumentationpartresponse.h"
#include "createdocumentationpartresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace APIGateway {

/**
 * @class  CreateDocumentationPartResponse
 *
 * @brief  Handles APIGateway CreateDocumentationPart responses.
 *
 * @see    APIGatewayClient::createDocumentationPart
 */

/**
 * @brief  Constructs a new CreateDocumentationPartResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateDocumentationPartResponse::CreateDocumentationPartResponse(
        const CreateDocumentationPartRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new CreateDocumentationPartResponsePrivate(this), parent)
{
    setRequest(new CreateDocumentationPartRequest(request));
    setReply(reply);
}

const CreateDocumentationPartRequest * CreateDocumentationPartResponse::request() const
{
    Q_D(const CreateDocumentationPartResponse);
    return static_cast<const CreateDocumentationPartRequest *>(d->request);
}

/**
 * @brief  Parse a APIGateway CreateDocumentationPart response.
 *
 * @param  response  Response to parse.
 */
void CreateDocumentationPartResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateDocumentationPartResponsePrivate
 *
 * @brief  Private implementation for CreateDocumentationPartResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateDocumentationPartResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateDocumentationPartResponse instance.
 */
CreateDocumentationPartResponsePrivate::CreateDocumentationPartResponsePrivate(
    CreateDocumentationPartQueueResponse * const q) : CreateDocumentationPartPrivate(q)
{

}

/**
 * @brief  Parse an APIGateway CreateDocumentationPartResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateDocumentationPartResponsePrivate::CreateDocumentationPartResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDocumentationPartResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace AWS