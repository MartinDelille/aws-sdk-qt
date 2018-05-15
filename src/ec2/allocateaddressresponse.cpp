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

#include "allocateaddressresponse.h"
#include "allocateaddressresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::AllocateAddressResponse
 * \brief The AllocateAddressResponse class provides an interace for EC2 AllocateAddress responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::allocateAddress
 */

/*!
 * Constructs a AllocateAddressResponse object for \a reply to \a request, with parent \a parent.
 */
AllocateAddressResponse::AllocateAddressResponse(
        const AllocateAddressRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new AllocateAddressResponsePrivate(this), parent)
{
    setRequest(new AllocateAddressRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AllocateAddressRequest * AllocateAddressResponse::request() const
{
    Q_D(const AllocateAddressResponse);
    return static_cast<const AllocateAddressRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 AllocateAddress \a response.
 */
void AllocateAddressResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AllocateAddressResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::AllocateAddressResponsePrivate
 * \brief The AllocateAddressResponsePrivate class provides private implementation for AllocateAddressResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a AllocateAddressResponsePrivate object with public implementation \a q.
 */
AllocateAddressResponsePrivate::AllocateAddressResponsePrivate(
    AllocateAddressResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 AllocateAddress response element from \a xml.
 */
void AllocateAddressResponsePrivate::parseAllocateAddressResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AllocateAddressResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
