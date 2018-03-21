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

#include "associatequalificationwithworkerresponse.h"
#include "associatequalificationwithworkerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace MTurk {

/**
 * @class  AssociateQualificationWithWorkerResponse
 *
 * @brief  Handles MTurk AssociateQualificationWithWorker responses.
 *
 * @see    MTurkClient::associateQualificationWithWorker
 */

/**
 * @brief  Constructs a new AssociateQualificationWithWorkerResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AssociateQualificationWithWorkerResponse::AssociateQualificationWithWorkerResponse(
        const AssociateQualificationWithWorkerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MTurkResponse(new AssociateQualificationWithWorkerResponsePrivate(this), parent)
{
    setRequest(new AssociateQualificationWithWorkerRequest(request));
    setReply(reply);
}

const AssociateQualificationWithWorkerRequest * AssociateQualificationWithWorkerResponse::request() const
{
    Q_D(const AssociateQualificationWithWorkerResponse);
    return static_cast<const AssociateQualificationWithWorkerRequest *>(d->request);
}

/**
 * @brief  Parse a MTurk AssociateQualificationWithWorker response.
 *
 * @param  response  Response to parse.
 */
void AssociateQualificationWithWorkerResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AssociateQualificationWithWorkerResponsePrivate
 *
 * @brief  Private implementation for AssociateQualificationWithWorkerResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AssociateQualificationWithWorkerResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AssociateQualificationWithWorkerResponse instance.
 */
AssociateQualificationWithWorkerResponsePrivate::AssociateQualificationWithWorkerResponsePrivate(
    AssociateQualificationWithWorkerQueueResponse * const q) : AssociateQualificationWithWorkerPrivate(q)
{

}

/**
 * @brief  Parse an MTurk AssociateQualificationWithWorkerResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AssociateQualificationWithWorkerResponsePrivate::AssociateQualificationWithWorkerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateQualificationWithWorkerResponse"));
    /// @todo
}

} // namespace MTurk
} // namespace AWS
