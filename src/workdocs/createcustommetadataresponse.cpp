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

#include "createcustommetadataresponse.h"
#include "createcustommetadataresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace WorkDocs {

/**
 * @class  CreateCustomMetadataResponse
 *
 * @brief  Handles WorkDocs CreateCustomMetadata responses.
 *
 * @see    WorkDocsClient::createCustomMetadata
 */

/**
 * @brief  Constructs a new CreateCustomMetadataResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateCustomMetadataResponse::CreateCustomMetadataResponse(
        const CreateCustomMetadataRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkDocsResponse(new CreateCustomMetadataResponsePrivate(this), parent)
{
    setRequest(new CreateCustomMetadataRequest(request));
    setReply(reply);
}

const CreateCustomMetadataRequest * CreateCustomMetadataResponse::request() const
{
    Q_D(const CreateCustomMetadataResponse);
    return static_cast<const CreateCustomMetadataRequest *>(d->request);
}

/**
 * @brief  Parse a WorkDocs CreateCustomMetadata response.
 *
 * @param  response  Response to parse.
 */
void CreateCustomMetadataResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateCustomMetadataResponsePrivate
 *
 * @brief  Private implementation for CreateCustomMetadataResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateCustomMetadataResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateCustomMetadataResponse instance.
 */
CreateCustomMetadataResponsePrivate::CreateCustomMetadataResponsePrivate(
    CreateCustomMetadataQueueResponse * const q) : CreateCustomMetadataPrivate(q)
{

}

/**
 * @brief  Parse an WorkDocs CreateCustomMetadataResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateCustomMetadataResponsePrivate::CreateCustomMetadataResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateCustomMetadataResponse"));
    /// @todo
}

} // namespace WorkDocs
} // namespace AWS
