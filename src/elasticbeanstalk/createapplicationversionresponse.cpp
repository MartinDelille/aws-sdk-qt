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

#include "createapplicationversionresponse.h"
#include "createapplicationversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ElasticBeanstalk {

/**
 * @class  CreateApplicationVersionResponse
 *
 * @brief  Handles ElasticBeanstalk CreateApplicationVersion responses.
 *
 * @see    ElasticBeanstalkClient::createApplicationVersion
 */

/**
 * @brief  Constructs a new CreateApplicationVersionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateApplicationVersionResponse::CreateApplicationVersionResponse(
        const CreateApplicationVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticBeanstalkResponse(new CreateApplicationVersionResponsePrivate(this), parent)
{
    setRequest(new CreateApplicationVersionRequest(request));
    setReply(reply);
}

const CreateApplicationVersionRequest * CreateApplicationVersionResponse::request() const
{
    Q_D(const CreateApplicationVersionResponse);
    return static_cast<const CreateApplicationVersionRequest *>(d->request);
}

/**
 * @brief  Parse a ElasticBeanstalk CreateApplicationVersion response.
 *
 * @param  response  Response to parse.
 */
void CreateApplicationVersionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateApplicationVersionResponsePrivate
 *
 * @brief  Private implementation for CreateApplicationVersionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateApplicationVersionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateApplicationVersionResponse instance.
 */
CreateApplicationVersionResponsePrivate::CreateApplicationVersionResponsePrivate(
    CreateApplicationVersionQueueResponse * const q) : CreateApplicationVersionPrivate(q)
{

}

/**
 * @brief  Parse an ElasticBeanstalk CreateApplicationVersionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateApplicationVersionResponsePrivate::CreateApplicationVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateApplicationVersionResponse"));
    /// @todo
}

} // namespace ElasticBeanstalk
} // namespace AWS