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

#include "getinvitationscountresponse.h"
#include "getinvitationscountresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SecurityHub {

/*!
 * \class QtAws::SecurityHub::GetInvitationsCountResponse
 * \brief The GetInvitationsCountResponse class provides an interace for SecurityHub GetInvitationsCount responses.
 *
 * \inmodule QtAwsSecurityHub
 *
 *  AWS Security Hub provides you with a comprehensive view of your security state within AWS and your compliance with the
 *  security industry standards and best practices. Security Hub collects security data from across AWS accounts, services,
 *  and supported third-party partners and helps you analyze your security trends and identify the highest priority security
 *  issues. For more information, see <a href="">AWS Security Hub User Guide</a>.
 *
 * \sa SecurityHubClient::getInvitationsCount
 */

/*!
 * Constructs a GetInvitationsCountResponse object for \a reply to \a request, with parent \a parent.
 */
GetInvitationsCountResponse::GetInvitationsCountResponse(
        const GetInvitationsCountRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SecurityHubResponse(new GetInvitationsCountResponsePrivate(this), parent)
{
    setRequest(new GetInvitationsCountRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetInvitationsCountRequest * GetInvitationsCountResponse::request() const
{
    Q_D(const GetInvitationsCountResponse);
    return static_cast<const GetInvitationsCountRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SecurityHub GetInvitationsCount \a response.
 */
void GetInvitationsCountResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetInvitationsCountResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SecurityHub::GetInvitationsCountResponsePrivate
 * \brief The GetInvitationsCountResponsePrivate class provides private implementation for GetInvitationsCountResponse.
 * \internal
 *
 * \inmodule QtAwsSecurityHub
 */

/*!
 * Constructs a GetInvitationsCountResponsePrivate object with public implementation \a q.
 */
GetInvitationsCountResponsePrivate::GetInvitationsCountResponsePrivate(
    GetInvitationsCountResponse * const q) : SecurityHubResponsePrivate(q)
{

}

/*!
 * Parses a SecurityHub GetInvitationsCount response element from \a xml.
 */
void GetInvitationsCountResponsePrivate::parseGetInvitationsCountResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetInvitationsCountResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SecurityHub
} // namespace QtAws
