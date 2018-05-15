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

#include "describefpgaimagesresponse.h"
#include "describefpgaimagesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DescribeFpgaImagesResponse
 * \brief The DescribeFpgaImagesResponse class provides an interace for EC2 DescribeFpgaImages responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::describeFpgaImages
 */

/*!
 * Constructs a DescribeFpgaImagesResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeFpgaImagesResponse::DescribeFpgaImagesResponse(
        const DescribeFpgaImagesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new DescribeFpgaImagesResponsePrivate(this), parent)
{
    setRequest(new DescribeFpgaImagesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeFpgaImagesRequest * DescribeFpgaImagesResponse::request() const
{
    Q_D(const DescribeFpgaImagesResponse);
    return static_cast<const DescribeFpgaImagesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 DescribeFpgaImages \a response.
 */
void DescribeFpgaImagesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeFpgaImagesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::DescribeFpgaImagesResponsePrivate
 * \brief The DescribeFpgaImagesResponsePrivate class provides private implementation for DescribeFpgaImagesResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a DescribeFpgaImagesResponsePrivate object with public implementation \a q.
 */
DescribeFpgaImagesResponsePrivate::DescribeFpgaImagesResponsePrivate(
    DescribeFpgaImagesResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 DescribeFpgaImages response element from \a xml.
 */
void DescribeFpgaImagesResponsePrivate::parseDescribeFpgaImagesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeFpgaImagesResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
