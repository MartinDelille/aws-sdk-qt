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

#include "enablevolumeioresponse.h"
#include "enablevolumeioresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::EnableVolumeIOResponse
 * \brief The EnableVolumeIOResponse class provides an interace for EC2 EnableVolumeIO responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::enableVolumeIO
 */

/*!
 * Constructs a EnableVolumeIOResponse object for \a reply to \a request, with parent \a parent.
 */
EnableVolumeIOResponse::EnableVolumeIOResponse(
        const EnableVolumeIORequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new EnableVolumeIOResponsePrivate(this), parent)
{
    setRequest(new EnableVolumeIORequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const EnableVolumeIORequest * EnableVolumeIOResponse::request() const
{
    Q_D(const EnableVolumeIOResponse);
    return static_cast<const EnableVolumeIORequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 EnableVolumeIO \a response.
 */
void EnableVolumeIOResponse::parseSuccess(QIODevice &response)
{
    //Q_D(EnableVolumeIOResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::EnableVolumeIOResponsePrivate
 * \brief The EnableVolumeIOResponsePrivate class provides private implementation for EnableVolumeIOResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a EnableVolumeIOResponsePrivate object with public implementation \a q.
 */
EnableVolumeIOResponsePrivate::EnableVolumeIOResponsePrivate(
    EnableVolumeIOResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 EnableVolumeIO response element from \a xml.
 */
void EnableVolumeIOResponsePrivate::parseEnableVolumeIOResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("EnableVolumeIOResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
