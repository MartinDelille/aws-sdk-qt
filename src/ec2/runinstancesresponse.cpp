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

#include "runinstancesresponse.h"
#include "runinstancesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::RunInstancesResponse
 * \brief The RunInstancesResponse class provides an interace for EC2 RunInstances responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::runInstances
 */

/*!
 * Constructs a RunInstancesResponse object for \a reply to \a request, with parent \a parent.
 */
RunInstancesResponse::RunInstancesResponse(
        const RunInstancesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new RunInstancesResponsePrivate(this), parent)
{
    setRequest(new RunInstancesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RunInstancesRequest * RunInstancesResponse::request() const
{
    Q_D(const RunInstancesResponse);
    return static_cast<const RunInstancesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 RunInstances \a response.
 */
void RunInstancesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RunInstancesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::RunInstancesResponsePrivate
 * \brief The RunInstancesResponsePrivate class provides private implementation for RunInstancesResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a RunInstancesResponsePrivate object with public implementation \a q.
 */
RunInstancesResponsePrivate::RunInstancesResponsePrivate(
    RunInstancesResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 RunInstances response element from \a xml.
 */
void RunInstancesResponsePrivate::parseRunInstancesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RunInstancesResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
