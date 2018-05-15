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

#include "describevpcclassiclinkdnssupportresponse.h"
#include "describevpcclassiclinkdnssupportresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DescribeVpcClassicLinkDnsSupportResponse
 * \brief The DescribeVpcClassicLinkDnsSupportResponse class provides an interace for EC2 DescribeVpcClassicLinkDnsSupport responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::describeVpcClassicLinkDnsSupport
 */

/*!
 * Constructs a DescribeVpcClassicLinkDnsSupportResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeVpcClassicLinkDnsSupportResponse::DescribeVpcClassicLinkDnsSupportResponse(
        const DescribeVpcClassicLinkDnsSupportRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new DescribeVpcClassicLinkDnsSupportResponsePrivate(this), parent)
{
    setRequest(new DescribeVpcClassicLinkDnsSupportRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeVpcClassicLinkDnsSupportRequest * DescribeVpcClassicLinkDnsSupportResponse::request() const
{
    Q_D(const DescribeVpcClassicLinkDnsSupportResponse);
    return static_cast<const DescribeVpcClassicLinkDnsSupportRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 DescribeVpcClassicLinkDnsSupport \a response.
 */
void DescribeVpcClassicLinkDnsSupportResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeVpcClassicLinkDnsSupportResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::DescribeVpcClassicLinkDnsSupportResponsePrivate
 * \brief The DescribeVpcClassicLinkDnsSupportResponsePrivate class provides private implementation for DescribeVpcClassicLinkDnsSupportResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a DescribeVpcClassicLinkDnsSupportResponsePrivate object with public implementation \a q.
 */
DescribeVpcClassicLinkDnsSupportResponsePrivate::DescribeVpcClassicLinkDnsSupportResponsePrivate(
    DescribeVpcClassicLinkDnsSupportResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 DescribeVpcClassicLinkDnsSupport response element from \a xml.
 */
void DescribeVpcClassicLinkDnsSupportResponsePrivate::parseDescribeVpcClassicLinkDnsSupportResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeVpcClassicLinkDnsSupportResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
