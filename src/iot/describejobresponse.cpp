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

#include "describejobresponse.h"
#include "describejobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace IoT {

/**
 * @class  DescribeJobResponse
 *
 * @brief  Handles IoT DescribeJob responses.
 *
 * @see    IoTClient::describeJob
 */

/**
 * @brief  Constructs a new DescribeJobResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeJobResponse::DescribeJobResponse(
        const DescribeJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new DescribeJobResponsePrivate(this), parent)
{
    setRequest(new DescribeJobRequest(request));
    setReply(reply);
}

const DescribeJobRequest * DescribeJobResponse::request() const
{
    Q_D(const DescribeJobResponse);
    return static_cast<const DescribeJobRequest *>(d->request);
}

/**
 * @brief  Parse a IoT DescribeJob response.
 *
 * @param  response  Response to parse.
 */
void DescribeJobResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeJobResponsePrivate
 *
 * @brief  Private implementation for DescribeJobResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeJobResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeJobResponse instance.
 */
DescribeJobResponsePrivate::DescribeJobResponsePrivate(
    DescribeJobQueueResponse * const q) : DescribeJobPrivate(q)
{

}

/**
 * @brief  Parse an IoT DescribeJobResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeJobResponsePrivate::DescribeJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeJobResponse"));
    /// @todo
}

} // namespace IoT
} // namespace AWS