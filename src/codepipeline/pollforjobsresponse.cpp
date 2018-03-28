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

#include "pollforjobsresponse.h"
#include "pollforjobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CodePipeline {

/**
 * @class  PollForJobsResponse
 *
 * @brief  Handles CodePipeline PollForJobs responses.
 *
 * @see    CodePipelineClient::pollForJobs
 */

/**
 * @brief  Constructs a new PollForJobsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PollForJobsResponse::PollForJobsResponse(
        const PollForJobsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodePipelineResponse(new PollForJobsResponsePrivate(this), parent)
{
    setRequest(new PollForJobsRequest(request));
    setReply(reply);
}

const PollForJobsRequest * PollForJobsResponse::request() const
{
    Q_D(const PollForJobsResponse);
    return static_cast<const PollForJobsRequest *>(d->request);
}

/**
 * @brief  Parse a CodePipeline PollForJobs response.
 *
 * @param  response  Response to parse.
 */
void PollForJobsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PollForJobsResponsePrivate
 *
 * @brief  Private implementation for PollForJobsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PollForJobsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PollForJobsResponse instance.
 */
PollForJobsResponsePrivate::PollForJobsResponsePrivate(
    PollForJobsQueueResponse * const q) : PollForJobsPrivate(q)
{

}

/**
 * @brief  Parse an CodePipeline PollForJobsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PollForJobsResponsePrivate::PollForJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PollForJobsResponse"));
    /// @todo
}

} // namespace CodePipeline
} // namespace AWS