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

#include "resetsnapshotattributeresponse.h"
#include "resetsnapshotattributeresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::ResetSnapshotAttributeResponse
 * \brief The ResetSnapshotAttributeResponse class provides an interace for EC2 ResetSnapshotAttribute responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::resetSnapshotAttribute
 */

/*!
 * Constructs a ResetSnapshotAttributeResponse object for \a reply to \a request, with parent \a parent.
 */
ResetSnapshotAttributeResponse::ResetSnapshotAttributeResponse(
        const ResetSnapshotAttributeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new ResetSnapshotAttributeResponsePrivate(this), parent)
{
    setRequest(new ResetSnapshotAttributeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ResetSnapshotAttributeRequest * ResetSnapshotAttributeResponse::request() const
{
    Q_D(const ResetSnapshotAttributeResponse);
    return static_cast<const ResetSnapshotAttributeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 ResetSnapshotAttribute \a response.
 */
void ResetSnapshotAttributeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ResetSnapshotAttributeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::ResetSnapshotAttributeResponsePrivate
 * \brief The ResetSnapshotAttributeResponsePrivate class provides private implementation for ResetSnapshotAttributeResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a ResetSnapshotAttributeResponsePrivate object with public implementation \a q.
 */
ResetSnapshotAttributeResponsePrivate::ResetSnapshotAttributeResponsePrivate(
    ResetSnapshotAttributeResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 ResetSnapshotAttribute response element from \a xml.
 */
void ResetSnapshotAttributeResponsePrivate::parseResetSnapshotAttributeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ResetSnapshotAttributeResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
