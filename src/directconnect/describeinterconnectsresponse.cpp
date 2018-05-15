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

#include "describeinterconnectsresponse.h"
#include "describeinterconnectsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::DescribeInterconnectsResponse
 * \brief The DescribeInterconnectsResponse class provides an interace for DirectConnect DescribeInterconnects responses.
 *
 * \inmodule QtAwsDirectConnect
 *
 *  AWS Direct Connect links your internal network to an AWS Direct Connect location over a standard 1 gigabit or 10 gigabit
 *  Ethernet fiber-optic cable. One end of the cable is connected to your router, the other to an AWS Direct Connect router.
 *  With this connection in place, you can create virtual interfaces directly to the AWS cloud (for example, to Amazon
 *  Elastic Compute Cloud (Amazon EC2) and Amazon Simple Storage Service (Amazon S3)) and to Amazon Virtual Private Cloud
 *  (Amazon VPC), bypassing Internet service providers in your network path. An AWS Direct Connect location provides access
 *  to AWS in the region it is associated with, as well as access to other US regions. For example, you can provision a
 *  single connection to any AWS Direct Connect location in the US and use it to access public AWS services in all US
 *  Regions and AWS GovCloud
 *
 * \sa DirectConnectClient::describeInterconnects
 */

/*!
 * Constructs a DescribeInterconnectsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeInterconnectsResponse::DescribeInterconnectsResponse(
        const DescribeInterconnectsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectConnectResponse(new DescribeInterconnectsResponsePrivate(this), parent)
{
    setRequest(new DescribeInterconnectsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeInterconnectsRequest * DescribeInterconnectsResponse::request() const
{
    Q_D(const DescribeInterconnectsResponse);
    return static_cast<const DescribeInterconnectsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DirectConnect DescribeInterconnects \a response.
 */
void DescribeInterconnectsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeInterconnectsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DirectConnect::DescribeInterconnectsResponsePrivate
 * \brief The DescribeInterconnectsResponsePrivate class provides private implementation for DescribeInterconnectsResponse.
 * \internal
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a DescribeInterconnectsResponsePrivate object with public implementation \a q.
 */
DescribeInterconnectsResponsePrivate::DescribeInterconnectsResponsePrivate(
    DescribeInterconnectsResponse * const q) : DirectConnectResponsePrivate(q)
{

}

/*!
 * Parses a DirectConnect DescribeInterconnects response element from \a xml.
 */
void DescribeInterconnectsResponsePrivate::parseDescribeInterconnectsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeInterconnectsResponse"));
    /// @todo
}

} // namespace DirectConnect
} // namespace QtAws
