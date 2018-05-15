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

#include "resetinstanceattributeresponse.h"
#include "resetinstanceattributeresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::ResetInstanceAttributeResponse
 * \brief The ResetInstanceAttributeResponse class provides an interace for EC2 ResetInstanceAttribute responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::resetInstanceAttribute
 */

/*!
 * Constructs a ResetInstanceAttributeResponse object for \a reply to \a request, with parent \a parent.
 */
ResetInstanceAttributeResponse::ResetInstanceAttributeResponse(
        const ResetInstanceAttributeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new ResetInstanceAttributeResponsePrivate(this), parent)
{
    setRequest(new ResetInstanceAttributeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ResetInstanceAttributeRequest * ResetInstanceAttributeResponse::request() const
{
    Q_D(const ResetInstanceAttributeResponse);
    return static_cast<const ResetInstanceAttributeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 ResetInstanceAttribute \a response.
 */
void ResetInstanceAttributeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ResetInstanceAttributeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::ResetInstanceAttributeResponsePrivate
 * \brief The ResetInstanceAttributeResponsePrivate class provides private implementation for ResetInstanceAttributeResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a ResetInstanceAttributeResponsePrivate object with public implementation \a q.
 */
ResetInstanceAttributeResponsePrivate::ResetInstanceAttributeResponsePrivate(
    ResetInstanceAttributeResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 ResetInstanceAttribute response element from \a xml.
 */
void ResetInstanceAttributeResponsePrivate::parseResetInstanceAttributeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ResetInstanceAttributeResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
