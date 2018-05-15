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

#include "assignipv6addressesresponse.h"
#include "assignipv6addressesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::AssignIpv6AddressesResponse
 * \brief The AssignIpv6AddressesResponse class provides an interace for EC2 AssignIpv6Addresses responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::assignIpv6Addresses
 */

/*!
 * Constructs a AssignIpv6AddressesResponse object for \a reply to \a request, with parent \a parent.
 */
AssignIpv6AddressesResponse::AssignIpv6AddressesResponse(
        const AssignIpv6AddressesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new AssignIpv6AddressesResponsePrivate(this), parent)
{
    setRequest(new AssignIpv6AddressesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AssignIpv6AddressesRequest * AssignIpv6AddressesResponse::request() const
{
    Q_D(const AssignIpv6AddressesResponse);
    return static_cast<const AssignIpv6AddressesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 AssignIpv6Addresses \a response.
 */
void AssignIpv6AddressesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AssignIpv6AddressesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::AssignIpv6AddressesResponsePrivate
 * \brief The AssignIpv6AddressesResponsePrivate class provides private implementation for AssignIpv6AddressesResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a AssignIpv6AddressesResponsePrivate object with public implementation \a q.
 */
AssignIpv6AddressesResponsePrivate::AssignIpv6AddressesResponsePrivate(
    AssignIpv6AddressesResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 AssignIpv6Addresses response element from \a xml.
 */
void AssignIpv6AddressesResponsePrivate::parseAssignIpv6AddressesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssignIpv6AddressesResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
