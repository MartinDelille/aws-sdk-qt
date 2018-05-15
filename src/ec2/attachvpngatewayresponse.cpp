/*
    Copyright 2013-2018 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "attachvpngatewayresponse.h"
#include "attachvpngatewayresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::AttachVpnGatewayResponse
 * \brief The AttachVpnGatewayResponse class provides an interace for EC2 AttachVpnGateway responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::attachVpnGateway
 */

/*!
 * Constructs a AttachVpnGatewayResponse object for \a reply to \a request, with parent \a parent.
 */
AttachVpnGatewayResponse::AttachVpnGatewayResponse(
        const AttachVpnGatewayRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new AttachVpnGatewayResponsePrivate(this), parent)
{
    setRequest(new AttachVpnGatewayRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AttachVpnGatewayRequest * AttachVpnGatewayResponse::request() const
{
    Q_D(const AttachVpnGatewayResponse);
    return static_cast<const AttachVpnGatewayRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 AttachVpnGateway \a response.
 */
void AttachVpnGatewayResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AttachVpnGatewayResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::AttachVpnGatewayResponsePrivate
 * \brief The AttachVpnGatewayResponsePrivate class provides private implementation for AttachVpnGatewayResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a AttachVpnGatewayResponsePrivate object with public implementation \a q.
 */
AttachVpnGatewayResponsePrivate::AttachVpnGatewayResponsePrivate(
    AttachVpnGatewayResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 AttachVpnGateway response element from \a xml.
 */
void AttachVpnGatewayResponsePrivate::parseAttachVpnGatewayResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AttachVpnGatewayResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
