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

#include "updatechannelresponse.h"
#include "updatechannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace MediaPackage {

/**
 * @class  UpdateChannelResponse
 *
 * @brief  Handles MediaPackage UpdateChannel responses.
 *
 * @see    MediaPackageClient::updateChannel
 */

/**
 * @brief  Constructs a new UpdateChannelResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateChannelResponse::UpdateChannelResponse(
        const UpdateChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaPackageResponse(new UpdateChannelResponsePrivate(this), parent)
{
    setRequest(new UpdateChannelRequest(request));
    setReply(reply);
}

const UpdateChannelRequest * UpdateChannelResponse::request() const
{
    Q_D(const UpdateChannelResponse);
    return static_cast<const UpdateChannelRequest *>(d->request);
}

/**
 * @brief  Parse a MediaPackage UpdateChannel response.
 *
 * @param  response  Response to parse.
 */
void UpdateChannelResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateChannelResponsePrivate
 *
 * @brief  Private implementation for UpdateChannelResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateChannelResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateChannelResponse instance.
 */
UpdateChannelResponsePrivate::UpdateChannelResponsePrivate(
    UpdateChannelQueueResponse * const q) : UpdateChannelPrivate(q)
{

}

/**
 * @brief  Parse an MediaPackage UpdateChannelResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateChannelResponsePrivate::UpdateChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateChannelResponse"));
    /// @todo
}

} // namespace MediaPackage
} // namespace AWS
