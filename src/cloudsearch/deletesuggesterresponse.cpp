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

#include "deletesuggesterresponse.h"
#include "deletesuggesterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudSearch {

/**
 * @class  DeleteSuggesterResponse
 *
 * @brief  Handles CloudSearch DeleteSuggester responses.
 *
 * @see    CloudSearchClient::deleteSuggester
 */

/**
 * @brief  Constructs a new DeleteSuggesterResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteSuggesterResponse::DeleteSuggesterResponse(
        const DeleteSuggesterRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudSearchResponse(new DeleteSuggesterResponsePrivate(this), parent)
{
    setRequest(new DeleteSuggesterRequest(request));
    setReply(reply);
}

const DeleteSuggesterRequest * DeleteSuggesterResponse::request() const
{
    Q_D(const DeleteSuggesterResponse);
    return static_cast<const DeleteSuggesterRequest *>(d->request);
}

/**
 * @brief  Parse a CloudSearch DeleteSuggester response.
 *
 * @param  response  Response to parse.
 */
void DeleteSuggesterResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteSuggesterResponsePrivate
 *
 * @brief  Private implementation for DeleteSuggesterResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteSuggesterResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteSuggesterResponse instance.
 */
DeleteSuggesterResponsePrivate::DeleteSuggesterResponsePrivate(
    DeleteSuggesterQueueResponse * const q) : DeleteSuggesterPrivate(q)
{

}

/**
 * @brief  Parse an CloudSearch DeleteSuggesterResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteSuggesterResponsePrivate::DeleteSuggesterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteSuggesterResponse"));
    /// @todo
}

} // namespace CloudSearch
} // namespace AWS