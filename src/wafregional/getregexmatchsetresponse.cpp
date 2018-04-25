/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getregexmatchsetresponse.h"
#include "getregexmatchsetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WAFRegional {

/*!
 * \class QtAws::WAFRegional::GetRegexMatchSetResponse
 * \brief The GetRegexMatchSetResponse class provides an interace for WAFRegional GetRegexMatchSet responses.
 *
 * \inmodule QtAwsWAFRegional
 *
 *  This is the <i>AWS WAF Regional API Reference</i> for using AWS WAF with Elastic Load Balancing (ELB) Application Load
 *  Balancers. The AWS WAF actions and data types listed in the reference are available for protecting Application Load
 *  Balancers. You can use these actions and data types by means of the endpoints listed in <a
 *  href="http://docs.aws.amazon.com/general/latest/gr/rande.html#waf_region">AWS Regions and Endpoints</a>. This guide is
 *  for developers who need detailed information about the AWS WAF API actions, data types, and errors. For detailed
 *  information about AWS WAF features and an overview of how to use the AWS WAF API, see the <a
 *  href="http://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
 *
 * \sa WAFRegionalClient::getRegexMatchSet
 */

/*!
 * Constructs a GetRegexMatchSetResponse object for \a reply to \a request, with parent \a parent.
 */
GetRegexMatchSetResponse::GetRegexMatchSetResponse(
        const GetRegexMatchSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WAFRegionalResponse(new GetRegexMatchSetResponsePrivate(this), parent)
{
    setRequest(new GetRegexMatchSetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetRegexMatchSetRequest * GetRegexMatchSetResponse::request() const
{
    Q_D(const GetRegexMatchSetResponse);
    return static_cast<const GetRegexMatchSetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WAFRegional GetRegexMatchSet \a response.
 */
void GetRegexMatchSetResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetRegexMatchSetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WAFRegional::GetRegexMatchSetResponsePrivate
 * \brief The GetRegexMatchSetResponsePrivate class provides private implementation for GetRegexMatchSetResponse.
 * \internal
 *
 * \inmodule QtAwsWAFRegional
 */

/*!
 * Constructs a GetRegexMatchSetResponsePrivate object with public implementation \a q.
 */
GetRegexMatchSetResponsePrivate::GetRegexMatchSetResponsePrivate(
    GetRegexMatchSetResponse * const q) : WAFRegionalResponsePrivate(q)
{

}

/*!
 * Parses a WAFRegional GetRegexMatchSet response element from \a xml.
 */
void GetRegexMatchSetResponsePrivate::parseGetRegexMatchSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetRegexMatchSetResponse"));
    /// @todo
}

} // namespace WAFRegional
} // namespace QtAws