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

#include "getmaintenancewindowexecutiontaskresponse.h"
#include "getmaintenancewindowexecutiontaskresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SSM {

/**
 * @class  GetMaintenanceWindowExecutionTaskResponse
 *
 * @brief  Handles SSM GetMaintenanceWindowExecutionTask responses.
 *
 * @see    SSMClient::getMaintenanceWindowExecutionTask
 */

/**
 * @brief  Constructs a new GetMaintenanceWindowExecutionTaskResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetMaintenanceWindowExecutionTaskResponse::GetMaintenanceWindowExecutionTaskResponse(
        const GetMaintenanceWindowExecutionTaskRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSMResponse(new GetMaintenanceWindowExecutionTaskResponsePrivate(this), parent)
{
    setRequest(new GetMaintenanceWindowExecutionTaskRequest(request));
    setReply(reply);
}

const GetMaintenanceWindowExecutionTaskRequest * GetMaintenanceWindowExecutionTaskResponse::request() const
{
    Q_D(const GetMaintenanceWindowExecutionTaskResponse);
    return static_cast<const GetMaintenanceWindowExecutionTaskRequest *>(d->request);
}

/**
 * @brief  Parse a SSM GetMaintenanceWindowExecutionTask response.
 *
 * @param  response  Response to parse.
 */
void GetMaintenanceWindowExecutionTaskResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetMaintenanceWindowExecutionTaskResponsePrivate
 *
 * @brief  Private implementation for GetMaintenanceWindowExecutionTaskResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetMaintenanceWindowExecutionTaskResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetMaintenanceWindowExecutionTaskResponse instance.
 */
GetMaintenanceWindowExecutionTaskResponsePrivate::GetMaintenanceWindowExecutionTaskResponsePrivate(
    GetMaintenanceWindowExecutionTaskQueueResponse * const q) : GetMaintenanceWindowExecutionTaskPrivate(q)
{

}

/**
 * @brief  Parse an SSM GetMaintenanceWindowExecutionTaskResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetMaintenanceWindowExecutionTaskResponsePrivate::GetMaintenanceWindowExecutionTaskResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetMaintenanceWindowExecutionTaskResponse"));
    /// @todo
}

} // namespace SSM
} // namespace AWS