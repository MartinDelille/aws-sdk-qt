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

#include "putobjectaclresponse.h"
#include "putobjectaclresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace S3 {

/**
 * @class  PutObjectAclResponse
 *
 * @brief  Handles S3 PutObjectAcl responses.
 *
 * @see    S3Client::putObjectAcl
 */

/**
 * @brief  Constructs a new PutObjectAclResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutObjectAclResponse::PutObjectAclResponse(
        const PutObjectAclRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new PutObjectAclResponsePrivate(this), parent)
{
    setRequest(new PutObjectAclRequest(request));
    setReply(reply);
}

const PutObjectAclRequest * PutObjectAclResponse::request() const
{
    Q_D(const PutObjectAclResponse);
    return static_cast<const PutObjectAclRequest *>(d->request);
}

/**
 * @brief  Parse a S3 PutObjectAcl response.
 *
 * @param  response  Response to parse.
 */
void PutObjectAclResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PutObjectAclResponsePrivate
 *
 * @brief  Private implementation for PutObjectAclResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutObjectAclResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PutObjectAclResponse instance.
 */
PutObjectAclResponsePrivate::PutObjectAclResponsePrivate(
    PutObjectAclQueueResponse * const q) : PutObjectAclPrivate(q)
{

}

/**
 * @brief  Parse an S3 PutObjectAclResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PutObjectAclResponsePrivate::PutObjectAclResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutObjectAclResponse"));
    /// @todo
}

} // namespace S3
} // namespace AWS
