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

#include "suggestresponse.h"
#include "suggestresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudSearchDomain {

/**
 * @class  SuggestResponse
 *
 * @brief  Handles CloudSearchDomain Suggest responses.
 *
 * @see    CloudSearchDomainClient::suggest
 */

/**
 * @brief  Constructs a new SuggestResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SuggestResponse::SuggestResponse(
        const SuggestRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudSearchDomainResponse(new SuggestResponsePrivate(this), parent)
{
    setRequest(new SuggestRequest(request));
    setReply(reply);
}

const SuggestRequest * SuggestResponse::request() const
{
    Q_D(const SuggestResponse);
    return static_cast<const SuggestRequest *>(d->request);
}

/**
 * @brief  Parse a CloudSearchDomain Suggest response.
 *
 * @param  response  Response to parse.
 */
void SuggestResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  SuggestResponsePrivate
 *
 * @brief  Private implementation for SuggestResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SuggestResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SuggestResponse instance.
 */
SuggestResponsePrivate::SuggestResponsePrivate(
    SuggestQueueResponse * const q) : SuggestPrivate(q)
{

}

/**
 * @brief  Parse an CloudSearchDomain SuggestResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void SuggestResponsePrivate::SuggestResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SuggestResponse"));
    /// @todo
}

} // namespace CloudSearchDomain
} // namespace AWS