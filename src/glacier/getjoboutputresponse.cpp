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

#include "getjoboutputresponse.h"
#include "getjoboutputresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Glacier {

/**
 * @class  GetJobOutputResponse
 *
 * @brief  Handles Glacier GetJobOutput responses.
 *
 * @see    GlacierClient::getJobOutput
 */

/**
 * @brief  Constructs a new GetJobOutputResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetJobOutputResponse::GetJobOutputResponse(
        const GetJobOutputRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlacierResponse(new GetJobOutputResponsePrivate(this), parent)
{
    setRequest(new GetJobOutputRequest(request));
    setReply(reply);
}

const GetJobOutputRequest * GetJobOutputResponse::request() const
{
    Q_D(const GetJobOutputResponse);
    return static_cast<const GetJobOutputRequest *>(d->request);
}

/**
 * @brief  Parse a Glacier GetJobOutput response.
 *
 * @param  response  Response to parse.
 */
void GetJobOutputResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetJobOutputResponsePrivate
 *
 * @brief  Private implementation for GetJobOutputResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetJobOutputResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetJobOutputResponse instance.
 */
GetJobOutputResponsePrivate::GetJobOutputResponsePrivate(
    GetJobOutputQueueResponse * const q) : GetJobOutputPrivate(q)
{

}

/**
 * @brief  Parse an Glacier GetJobOutputResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetJobOutputResponsePrivate::GetJobOutputResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetJobOutputResponse"));
    /// @todo
}

} // namespace Glacier
} // namespace AWS
