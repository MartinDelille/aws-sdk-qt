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

#include "cancelspotfleetrequestsresponse.h"
#include "cancelspotfleetrequestsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::CancelSpotFleetRequestsResponse
 * \brief The CancelSpotFleetRequestsResponse class provides an interace for EC2 CancelSpotFleetRequests responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::cancelSpotFleetRequests
 */

/*!
 * Constructs a CancelSpotFleetRequestsResponse object for \a reply to \a request, with parent \a parent.
 */
CancelSpotFleetRequestsResponse::CancelSpotFleetRequestsResponse(
        const CancelSpotFleetRequestsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new CancelSpotFleetRequestsResponsePrivate(this), parent)
{
    setRequest(new CancelSpotFleetRequestsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CancelSpotFleetRequestsRequest * CancelSpotFleetRequestsResponse::request() const
{
    Q_D(const CancelSpotFleetRequestsResponse);
    return static_cast<const CancelSpotFleetRequestsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 CancelSpotFleetRequests \a response.
 */
void CancelSpotFleetRequestsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CancelSpotFleetRequestsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::CancelSpotFleetRequestsResponsePrivate
 * \brief The CancelSpotFleetRequestsResponsePrivate class provides private implementation for CancelSpotFleetRequestsResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a CancelSpotFleetRequestsResponsePrivate object with public implementation \a q.
 */
CancelSpotFleetRequestsResponsePrivate::CancelSpotFleetRequestsResponsePrivate(
    CancelSpotFleetRequestsResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 CancelSpotFleetRequests response element from \a xml.
 */
void CancelSpotFleetRequestsResponsePrivate::parseCancelSpotFleetRequestsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CancelSpotFleetRequestsResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
