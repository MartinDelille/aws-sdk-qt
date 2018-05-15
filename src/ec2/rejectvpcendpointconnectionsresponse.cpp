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

#include "rejectvpcendpointconnectionsresponse.h"
#include "rejectvpcendpointconnectionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::RejectVpcEndpointConnectionsResponse
 * \brief The RejectVpcEndpointConnectionsResponse class provides an interace for EC2 RejectVpcEndpointConnections responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::rejectVpcEndpointConnections
 */

/*!
 * Constructs a RejectVpcEndpointConnectionsResponse object for \a reply to \a request, with parent \a parent.
 */
RejectVpcEndpointConnectionsResponse::RejectVpcEndpointConnectionsResponse(
        const RejectVpcEndpointConnectionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new RejectVpcEndpointConnectionsResponsePrivate(this), parent)
{
    setRequest(new RejectVpcEndpointConnectionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RejectVpcEndpointConnectionsRequest * RejectVpcEndpointConnectionsResponse::request() const
{
    Q_D(const RejectVpcEndpointConnectionsResponse);
    return static_cast<const RejectVpcEndpointConnectionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 RejectVpcEndpointConnections \a response.
 */
void RejectVpcEndpointConnectionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RejectVpcEndpointConnectionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::RejectVpcEndpointConnectionsResponsePrivate
 * \brief The RejectVpcEndpointConnectionsResponsePrivate class provides private implementation for RejectVpcEndpointConnectionsResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a RejectVpcEndpointConnectionsResponsePrivate object with public implementation \a q.
 */
RejectVpcEndpointConnectionsResponsePrivate::RejectVpcEndpointConnectionsResponsePrivate(
    RejectVpcEndpointConnectionsResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 RejectVpcEndpointConnections response element from \a xml.
 */
void RejectVpcEndpointConnectionsResponsePrivate::parseRejectVpcEndpointConnectionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RejectVpcEndpointConnectionsResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
