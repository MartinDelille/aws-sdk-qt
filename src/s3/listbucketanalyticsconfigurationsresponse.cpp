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

#include "listbucketanalyticsconfigurationsresponse.h"
#include "listbucketanalyticsconfigurationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace S3 {

/**
 * @class  ListBucketAnalyticsConfigurationsResponse
 *
 * @brief  Handles S3 ListBucketAnalyticsConfigurations responses.
 *
 * @see    S3Client::listBucketAnalyticsConfigurations
 */

/**
 * @brief  Constructs a new ListBucketAnalyticsConfigurationsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListBucketAnalyticsConfigurationsResponse::ListBucketAnalyticsConfigurationsResponse(
        const ListBucketAnalyticsConfigurationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new ListBucketAnalyticsConfigurationsResponsePrivate(this), parent)
{
    setRequest(new ListBucketAnalyticsConfigurationsRequest(request));
    setReply(reply);
}

const ListBucketAnalyticsConfigurationsRequest * ListBucketAnalyticsConfigurationsResponse::request() const
{
    Q_D(const ListBucketAnalyticsConfigurationsResponse);
    return static_cast<const ListBucketAnalyticsConfigurationsRequest *>(d->request);
}

/**
 * @brief  Parse a S3 ListBucketAnalyticsConfigurations response.
 *
 * @param  response  Response to parse.
 */
void ListBucketAnalyticsConfigurationsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListBucketAnalyticsConfigurationsResponsePrivate
 *
 * @brief  Private implementation for ListBucketAnalyticsConfigurationsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListBucketAnalyticsConfigurationsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListBucketAnalyticsConfigurationsResponse instance.
 */
ListBucketAnalyticsConfigurationsResponsePrivate::ListBucketAnalyticsConfigurationsResponsePrivate(
    ListBucketAnalyticsConfigurationsQueueResponse * const q) : ListBucketAnalyticsConfigurationsPrivate(q)
{

}

/**
 * @brief  Parse an S3 ListBucketAnalyticsConfigurationsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListBucketAnalyticsConfigurationsResponsePrivate::ListBucketAnalyticsConfigurationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListBucketAnalyticsConfigurationsResponse"));
    /// @todo
}

} // namespace S3
} // namespace AWS