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

#include "createspotdatafeedsubscriptionresponse.h"
#include "createspotdatafeedsubscriptionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  CreateSpotDatafeedSubscriptionResponse
 *
 * @brief  Handles EC2 CreateSpotDatafeedSubscription responses.
 *
 * @see    EC2Client::createSpotDatafeedSubscription
 */

/**
 * @brief  Constructs a new CreateSpotDatafeedSubscriptionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateSpotDatafeedSubscriptionResponse::CreateSpotDatafeedSubscriptionResponse(
        const CreateSpotDatafeedSubscriptionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new CreateSpotDatafeedSubscriptionResponsePrivate(this), parent)
{
    setRequest(new CreateSpotDatafeedSubscriptionRequest(request));
    setReply(reply);
}

const CreateSpotDatafeedSubscriptionRequest * CreateSpotDatafeedSubscriptionResponse::request() const
{
    Q_D(const CreateSpotDatafeedSubscriptionResponse);
    return static_cast<const CreateSpotDatafeedSubscriptionRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 CreateSpotDatafeedSubscription response.
 *
 * @param  response  Response to parse.
 */
void CreateSpotDatafeedSubscriptionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateSpotDatafeedSubscriptionResponsePrivate
 *
 * @brief  Private implementation for CreateSpotDatafeedSubscriptionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateSpotDatafeedSubscriptionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateSpotDatafeedSubscriptionResponse instance.
 */
CreateSpotDatafeedSubscriptionResponsePrivate::CreateSpotDatafeedSubscriptionResponsePrivate(
    CreateSpotDatafeedSubscriptionQueueResponse * const q) : CreateSpotDatafeedSubscriptionPrivate(q)
{

}

/**
 * @brief  Parse an EC2 CreateSpotDatafeedSubscriptionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateSpotDatafeedSubscriptionResponsePrivate::CreateSpotDatafeedSubscriptionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateSpotDatafeedSubscriptionResponse"));
    /// @todo
}

} // namespace EC2
} // namespace AWS