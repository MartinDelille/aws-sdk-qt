/*
    Copyright 2013-2019 Paul Colby

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

#include "describeworkteamresponse.h"
#include "describeworkteamresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeWorkteamResponse
 * \brief The DescribeWorkteamResponse class provides an interace for SageMaker DescribeWorkteam responses.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing Amazon SageMaker
 *
 * \sa SageMakerClient::describeWorkteam
 */

/*!
 * Constructs a DescribeWorkteamResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeWorkteamResponse::DescribeWorkteamResponse(
        const DescribeWorkteamRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DescribeWorkteamResponsePrivate(this), parent)
{
    setRequest(new DescribeWorkteamRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeWorkteamRequest * DescribeWorkteamResponse::request() const
{
    Q_D(const DescribeWorkteamResponse);
    return static_cast<const DescribeWorkteamRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DescribeWorkteam \a response.
 */
void DescribeWorkteamResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeWorkteamResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DescribeWorkteamResponsePrivate
 * \brief The DescribeWorkteamResponsePrivate class provides private implementation for DescribeWorkteamResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeWorkteamResponsePrivate object with public implementation \a q.
 */
DescribeWorkteamResponsePrivate::DescribeWorkteamResponsePrivate(
    DescribeWorkteamResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DescribeWorkteam response element from \a xml.
 */
void DescribeWorkteamResponsePrivate::parseDescribeWorkteamResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeWorkteamResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws