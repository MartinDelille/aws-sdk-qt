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

#include "updateevaluationresponse.h"
#include "updateevaluationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace MachineLearning {

/**
 * @class  UpdateEvaluationResponse
 *
 * @brief  Handles MachineLearning UpdateEvaluation responses.
 *
 * @see    MachineLearningClient::updateEvaluation
 */

/**
 * @brief  Constructs a new UpdateEvaluationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateEvaluationResponse::UpdateEvaluationResponse(
        const UpdateEvaluationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MachineLearningResponse(new UpdateEvaluationResponsePrivate(this), parent)
{
    setRequest(new UpdateEvaluationRequest(request));
    setReply(reply);
}

const UpdateEvaluationRequest * UpdateEvaluationResponse::request() const
{
    Q_D(const UpdateEvaluationResponse);
    return static_cast<const UpdateEvaluationRequest *>(d->request);
}

/**
 * @brief  Parse a MachineLearning UpdateEvaluation response.
 *
 * @param  response  Response to parse.
 */
void UpdateEvaluationResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateEvaluationResponsePrivate
 *
 * @brief  Private implementation for UpdateEvaluationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateEvaluationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateEvaluationResponse instance.
 */
UpdateEvaluationResponsePrivate::UpdateEvaluationResponsePrivate(
    UpdateEvaluationQueueResponse * const q) : UpdateEvaluationPrivate(q)
{

}

/**
 * @brief  Parse an MachineLearning UpdateEvaluationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateEvaluationResponsePrivate::UpdateEvaluationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateEvaluationResponse"));
    /// @todo
}

} // namespace MachineLearning
} // namespace AWS
