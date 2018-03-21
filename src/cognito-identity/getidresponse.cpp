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

#include "getidresponse.h"
#include "getidresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CognitoIdentity {

/**
 * @class  GetIdResponse
 *
 * @brief  Handles CognitoIdentity GetId responses.
 *
 * @see    CognitoIdentityClient::getId
 */

/**
 * @brief  Constructs a new GetIdResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetIdResponse::GetIdResponse(
        const GetIdRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityResponse(new GetIdResponsePrivate(this), parent)
{
    setRequest(new GetIdRequest(request));
    setReply(reply);
}

const GetIdRequest * GetIdResponse::request() const
{
    Q_D(const GetIdResponse);
    return static_cast<const GetIdRequest *>(d->request);
}

/**
 * @brief  Parse a CognitoIdentity GetId response.
 *
 * @param  response  Response to parse.
 */
void GetIdResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetIdResponsePrivate
 *
 * @brief  Private implementation for GetIdResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetIdResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetIdResponse instance.
 */
GetIdResponsePrivate::GetIdResponsePrivate(
    GetIdQueueResponse * const q) : GetIdPrivate(q)
{

}

/**
 * @brief  Parse an CognitoIdentity GetIdResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetIdResponsePrivate::GetIdResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetIdResponse"));
    /// @todo
}

} // namespace CognitoIdentity
} // namespace AWS
