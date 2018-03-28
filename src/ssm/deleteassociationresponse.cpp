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

#include "deleteassociationresponse.h"
#include "deleteassociationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SSM {

/**
 * @class  DeleteAssociationResponse
 *
 * @brief  Handles SSM DeleteAssociation responses.
 *
 * @see    SSMClient::deleteAssociation
 */

/**
 * @brief  Constructs a new DeleteAssociationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteAssociationResponse::DeleteAssociationResponse(
        const DeleteAssociationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSMResponse(new DeleteAssociationResponsePrivate(this), parent)
{
    setRequest(new DeleteAssociationRequest(request));
    setReply(reply);
}

const DeleteAssociationRequest * DeleteAssociationResponse::request() const
{
    Q_D(const DeleteAssociationResponse);
    return static_cast<const DeleteAssociationRequest *>(d->request);
}

/**
 * @brief  Parse a SSM DeleteAssociation response.
 *
 * @param  response  Response to parse.
 */
void DeleteAssociationResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteAssociationResponsePrivate
 *
 * @brief  Private implementation for DeleteAssociationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteAssociationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteAssociationResponse instance.
 */
DeleteAssociationResponsePrivate::DeleteAssociationResponsePrivate(
    DeleteAssociationQueueResponse * const q) : DeleteAssociationPrivate(q)
{

}

/**
 * @brief  Parse an SSM DeleteAssociationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteAssociationResponsePrivate::DeleteAssociationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteAssociationResponse"));
    /// @todo
}

} // namespace SSM
} // namespace AWS