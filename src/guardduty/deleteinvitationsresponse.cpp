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

#include "deleteinvitationsresponse.h"
#include "deleteinvitationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace GuardDuty {

/**
 * @class  DeleteInvitationsResponse
 *
 * @brief  Handles GuardDuty DeleteInvitations responses.
 *
 * @see    GuardDutyClient::deleteInvitations
 */

/**
 * @brief  Constructs a new DeleteInvitationsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteInvitationsResponse::DeleteInvitationsResponse(
        const DeleteInvitationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GuardDutyResponse(new DeleteInvitationsResponsePrivate(this), parent)
{
    setRequest(new DeleteInvitationsRequest(request));
    setReply(reply);
}

const DeleteInvitationsRequest * DeleteInvitationsResponse::request() const
{
    Q_D(const DeleteInvitationsResponse);
    return static_cast<const DeleteInvitationsRequest *>(d->request);
}

/**
 * @brief  Parse a GuardDuty DeleteInvitations response.
 *
 * @param  response  Response to parse.
 */
void DeleteInvitationsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteInvitationsResponsePrivate
 *
 * @brief  Private implementation for DeleteInvitationsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteInvitationsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteInvitationsResponse instance.
 */
DeleteInvitationsResponsePrivate::DeleteInvitationsResponsePrivate(
    DeleteInvitationsQueueResponse * const q) : DeleteInvitationsPrivate(q)
{

}

/**
 * @brief  Parse an GuardDuty DeleteInvitationsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteInvitationsResponsePrivate::DeleteInvitationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteInvitationsResponse"));
    /// @todo
}

} // namespace GuardDuty
} // namespace AWS
