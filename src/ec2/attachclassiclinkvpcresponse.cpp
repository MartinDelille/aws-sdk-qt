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

#include "attachclassiclinkvpcresponse.h"
#include "attachclassiclinkvpcresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::AttachClassicLinkVpcResponse
 * \brief The AttachClassicLinkVpcResponse class provides an interace for EC2 AttachClassicLinkVpc responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::attachClassicLinkVpc
 */

/*!
 * Constructs a AttachClassicLinkVpcResponse object for \a reply to \a request, with parent \a parent.
 */
AttachClassicLinkVpcResponse::AttachClassicLinkVpcResponse(
        const AttachClassicLinkVpcRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new AttachClassicLinkVpcResponsePrivate(this), parent)
{
    setRequest(new AttachClassicLinkVpcRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AttachClassicLinkVpcRequest * AttachClassicLinkVpcResponse::request() const
{
    Q_D(const AttachClassicLinkVpcResponse);
    return static_cast<const AttachClassicLinkVpcRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 AttachClassicLinkVpc \a response.
 */
void AttachClassicLinkVpcResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AttachClassicLinkVpcResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::AttachClassicLinkVpcResponsePrivate
 * \brief The AttachClassicLinkVpcResponsePrivate class provides private implementation for AttachClassicLinkVpcResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a AttachClassicLinkVpcResponsePrivate object with public implementation \a q.
 */
AttachClassicLinkVpcResponsePrivate::AttachClassicLinkVpcResponsePrivate(
    AttachClassicLinkVpcResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 AttachClassicLinkVpc response element from \a xml.
 */
void AttachClassicLinkVpcResponsePrivate::parseAttachClassicLinkVpcResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AttachClassicLinkVpcResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
