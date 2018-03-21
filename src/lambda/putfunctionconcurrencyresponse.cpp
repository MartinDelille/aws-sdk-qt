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

#include "putfunctionconcurrencyresponse.h"
#include "putfunctionconcurrencyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Lambda {

/**
 * @class  PutFunctionConcurrencyResponse
 *
 * @brief  Handles Lambda PutFunctionConcurrency responses.
 *
 * @see    LambdaClient::putFunctionConcurrency
 */

/**
 * @brief  Constructs a new PutFunctionConcurrencyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutFunctionConcurrencyResponse::PutFunctionConcurrencyResponse(
        const PutFunctionConcurrencyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LambdaResponse(new PutFunctionConcurrencyResponsePrivate(this), parent)
{
    setRequest(new PutFunctionConcurrencyRequest(request));
    setReply(reply);
}

const PutFunctionConcurrencyRequest * PutFunctionConcurrencyResponse::request() const
{
    Q_D(const PutFunctionConcurrencyResponse);
    return static_cast<const PutFunctionConcurrencyRequest *>(d->request);
}

/**
 * @brief  Parse a Lambda PutFunctionConcurrency response.
 *
 * @param  response  Response to parse.
 */
void PutFunctionConcurrencyResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PutFunctionConcurrencyResponsePrivate
 *
 * @brief  Private implementation for PutFunctionConcurrencyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutFunctionConcurrencyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PutFunctionConcurrencyResponse instance.
 */
PutFunctionConcurrencyResponsePrivate::PutFunctionConcurrencyResponsePrivate(
    PutFunctionConcurrencyQueueResponse * const q) : PutFunctionConcurrencyPrivate(q)
{

}

/**
 * @brief  Parse an Lambda PutFunctionConcurrencyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PutFunctionConcurrencyResponsePrivate::PutFunctionConcurrencyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutFunctionConcurrencyResponse"));
    /// @todo
}

} // namespace Lambda
} // namespace AWS
