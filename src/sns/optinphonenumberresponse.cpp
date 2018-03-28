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

#include "optinphonenumberresponse.h"
#include "optinphonenumberresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SNS {

/**
 * @class  OptInPhoneNumberResponse
 *
 * @brief  Handles SNS OptInPhoneNumber responses.
 *
 * @see    SNSClient::optInPhoneNumber
 */

/**
 * @brief  Constructs a new OptInPhoneNumberResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
OptInPhoneNumberResponse::OptInPhoneNumberResponse(
        const OptInPhoneNumberRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SNSResponse(new OptInPhoneNumberResponsePrivate(this), parent)
{
    setRequest(new OptInPhoneNumberRequest(request));
    setReply(reply);
}

const OptInPhoneNumberRequest * OptInPhoneNumberResponse::request() const
{
    Q_D(const OptInPhoneNumberResponse);
    return static_cast<const OptInPhoneNumberRequest *>(d->request);
}

/**
 * @brief  Parse a SNS OptInPhoneNumber response.
 *
 * @param  response  Response to parse.
 */
void OptInPhoneNumberResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  OptInPhoneNumberResponsePrivate
 *
 * @brief  Private implementation for OptInPhoneNumberResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new OptInPhoneNumberResponsePrivate object.
 *
 * @param  q  Pointer to this object's public OptInPhoneNumberResponse instance.
 */
OptInPhoneNumberResponsePrivate::OptInPhoneNumberResponsePrivate(
    OptInPhoneNumberQueueResponse * const q) : OptInPhoneNumberPrivate(q)
{

}

/**
 * @brief  Parse an SNS OptInPhoneNumberResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void OptInPhoneNumberResponsePrivate::OptInPhoneNumberResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("OptInPhoneNumberResponse"));
    /// @todo
}

} // namespace SNS
} // namespace AWS