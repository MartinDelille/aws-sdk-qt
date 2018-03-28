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

#include "attachpolicyresponse.h"
#include "attachpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Organizations {

/**
 * @class  AttachPolicyResponse
 *
 * @brief  Handles Organizations AttachPolicy responses.
 *
 * @see    OrganizationsClient::attachPolicy
 */

/**
 * @brief  Constructs a new AttachPolicyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AttachPolicyResponse::AttachPolicyResponse(
        const AttachPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OrganizationsResponse(new AttachPolicyResponsePrivate(this), parent)
{
    setRequest(new AttachPolicyRequest(request));
    setReply(reply);
}

const AttachPolicyRequest * AttachPolicyResponse::request() const
{
    Q_D(const AttachPolicyResponse);
    return static_cast<const AttachPolicyRequest *>(d->request);
}

/**
 * @brief  Parse a Organizations AttachPolicy response.
 *
 * @param  response  Response to parse.
 */
void AttachPolicyResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AttachPolicyResponsePrivate
 *
 * @brief  Private implementation for AttachPolicyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AttachPolicyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AttachPolicyResponse instance.
 */
AttachPolicyResponsePrivate::AttachPolicyResponsePrivate(
    AttachPolicyQueueResponse * const q) : AttachPolicyPrivate(q)
{

}

/**
 * @brief  Parse an Organizations AttachPolicyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AttachPolicyResponsePrivate::AttachPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AttachPolicyResponse"));
    /// @todo
}

} // namespace Organizations
} // namespace AWS