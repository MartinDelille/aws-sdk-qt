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

#include "updateserviceresponse.h"
#include "updateserviceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceDiscovery {

/*!
 * \class QtAws::ServiceDiscovery::UpdateServiceResponse
 * \brief The UpdateServiceResponse class provides an interace for ServiceDiscovery UpdateService responses.
 *
 * \inmodule QtAwsServiceDiscovery
 *
 *  Amazon Route 53 auto naming lets you configure public or private namespaces that your microservice applications run in.
 *  When instances of the service become available, you can call the auto naming API to register the instance, and Route 53
 *  automatically creates up to five DNS records and an optional health check. Clients that submit DNS queries for the
 *  service receive an answer that contains up to eight healthy
 *
 * \sa ServiceDiscoveryClient::updateService
 */

/*!
 * Constructs a UpdateServiceResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateServiceResponse::UpdateServiceResponse(
        const UpdateServiceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceDiscoveryResponse(new UpdateServiceResponsePrivate(this), parent)
{
    setRequest(new UpdateServiceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateServiceRequest * UpdateServiceResponse::request() const
{
    Q_D(const UpdateServiceResponse);
    return static_cast<const UpdateServiceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceDiscovery UpdateService \a response.
 */
void UpdateServiceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateServiceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceDiscovery::UpdateServiceResponsePrivate
 * \brief The UpdateServiceResponsePrivate class provides private implementation for UpdateServiceResponse.
 * \internal
 *
 * \inmodule QtAwsServiceDiscovery
 */

/*!
 * Constructs a UpdateServiceResponsePrivate object with public implementation \a q.
 */
UpdateServiceResponsePrivate::UpdateServiceResponsePrivate(
    UpdateServiceResponse * const q) : ServiceDiscoveryResponsePrivate(q)
{

}

/*!
 * Parses a ServiceDiscovery UpdateService response element from \a xml.
 */
void UpdateServiceResponsePrivate::parseUpdateServiceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateServiceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceDiscovery
} // namespace QtAws
