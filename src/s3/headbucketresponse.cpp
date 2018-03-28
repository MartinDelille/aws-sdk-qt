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

#include "headbucketresponse.h"
#include "headbucketresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace S3 {

/**
 * @class  HeadBucketResponse
 *
 * @brief  Handles S3 HeadBucket responses.
 *
 * @see    S3Client::headBucket
 */

/**
 * @brief  Constructs a new HeadBucketResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
HeadBucketResponse::HeadBucketResponse(
        const HeadBucketRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new HeadBucketResponsePrivate(this), parent)
{
    setRequest(new HeadBucketRequest(request));
    setReply(reply);
}

const HeadBucketRequest * HeadBucketResponse::request() const
{
    Q_D(const HeadBucketResponse);
    return static_cast<const HeadBucketRequest *>(d->request);
}

/**
 * @brief  Parse a S3 HeadBucket response.
 *
 * @param  response  Response to parse.
 */
void HeadBucketResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  HeadBucketResponsePrivate
 *
 * @brief  Private implementation for HeadBucketResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new HeadBucketResponsePrivate object.
 *
 * @param  q  Pointer to this object's public HeadBucketResponse instance.
 */
HeadBucketResponsePrivate::HeadBucketResponsePrivate(
    HeadBucketQueueResponse * const q) : HeadBucketPrivate(q)
{

}

/**
 * @brief  Parse an S3 HeadBucketResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void HeadBucketResponsePrivate::HeadBucketResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("HeadBucketResponse"));
    /// @todo
}

} // namespace S3
} // namespace AWS