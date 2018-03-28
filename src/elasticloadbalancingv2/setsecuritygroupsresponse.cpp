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

#include "setsecuritygroupsresponse.h"
#include "setsecuritygroupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ElasticLoadBalancingv2 {

/**
 * @class  SetSecurityGroupsResponse
 *
 * @brief  Handles ElasticLoadBalancingv2 SetSecurityGroups responses.
 *
 * @see    ElasticLoadBalancingv2Client::setSecurityGroups
 */

/**
 * @brief  Constructs a new SetSecurityGroupsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SetSecurityGroupsResponse::SetSecurityGroupsResponse(
        const SetSecurityGroupsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticLoadBalancingv2Response(new SetSecurityGroupsResponsePrivate(this), parent)
{
    setRequest(new SetSecurityGroupsRequest(request));
    setReply(reply);
}

const SetSecurityGroupsRequest * SetSecurityGroupsResponse::request() const
{
    Q_D(const SetSecurityGroupsResponse);
    return static_cast<const SetSecurityGroupsRequest *>(d->request);
}

/**
 * @brief  Parse a ElasticLoadBalancingv2 SetSecurityGroups response.
 *
 * @param  response  Response to parse.
 */
void SetSecurityGroupsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  SetSecurityGroupsResponsePrivate
 *
 * @brief  Private implementation for SetSecurityGroupsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SetSecurityGroupsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SetSecurityGroupsResponse instance.
 */
SetSecurityGroupsResponsePrivate::SetSecurityGroupsResponsePrivate(
    SetSecurityGroupsQueueResponse * const q) : SetSecurityGroupsPrivate(q)
{

}

/**
 * @brief  Parse an ElasticLoadBalancingv2 SetSecurityGroupsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void SetSecurityGroupsResponsePrivate::SetSecurityGroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SetSecurityGroupsResponse"));
    /// @todo
}

} // namespace ElasticLoadBalancingv2
} // namespace AWS