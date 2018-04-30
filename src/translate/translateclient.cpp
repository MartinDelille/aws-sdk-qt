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

#include "translateclient.h"
#include "translateclient_p.h"

#include "core/awssignaturev4.h"
#include "translatetextrequest.h"
#include "translatetextresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::Translate
 * \brief Contains classess for accessing Amazon Translate.
 *
 * \inmodule QtAwsTranslate
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace Translate {

/*!
 * \class QtAws::Translate::TranslateClient
 * \brief The TranslateClient class provides access to the Amazon Translate service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsTranslate
 *
 *  Provides translation between English and one of six languages, or between one of the six languages and
 */

/*!
 * \brief Constructs a TranslateClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
TranslateClient::TranslateClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new TranslateClientPrivate(this), parent)
{
    Q_D(TranslateClient);
    d->apiVersion = QStringLiteral("2017-07-01");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("translate");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon Translate");
    d->serviceName = QStringLiteral("translate");
}

/*!
 * \overload TranslateClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
TranslateClient::TranslateClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new TranslateClientPrivate(this), parent)
{
    Q_D(TranslateClient);
    d->apiVersion = QStringLiteral("2017-07-01");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("translate");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon Translate");
    d->serviceName = QStringLiteral("translate");
}

/*!
 * Sends \a request to the TranslateClient service, and returns a pointer to an
 * TranslateTextResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Translates input text from the source language to the target language. You can translate between English (en) and one of
 * the following languages, or between one of the following languages and
 *
 * English> <ul> <li>
 *
 * Arabic
 *
 * (ar> </li> <li>
 *
 * Chinese (Simplified)
 *
 * (zh> </li> <li>
 *
 * French
 *
 * (fr> </li> <li>
 *
 * German
 *
 * (de> </li> <li>
 *
 * Portuguese
 *
 * (pt> </li> <li>
 *
 * Spanish
 *
 * (es> </li> </ul>
 *
 * To have Amazon Translate determine the source language of your text, you can specify <code>auto</code> in the
 * <code>SourceLanguageCode</code> field. If you specify <code>auto</code>, Amazon Translate will call Amazon Comprehend to
 * determine the source
 */
TranslateTextResponse * TranslateClient::translateText(const TranslateTextRequest &request)
{
    return qobject_cast<TranslateTextResponse *>(send(request));
}

/*!
 * \class QtAws::Translate::TranslateClientPrivate
 * \brief The TranslateClientPrivate class provides private implementation for TranslateClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsTranslate
 */

/*!
 * Constructs a TranslateClientPrivate object with public implementation \a q.
 */
TranslateClientPrivate::TranslateClientPrivate(TranslateClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace Translate
} // namespace QtAws
