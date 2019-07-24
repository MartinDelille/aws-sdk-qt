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

#include "associateconfigurationitemstoapplicationresponse.h"
#include "associateconfigurationitemstoapplicationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApplicationDiscoveryService {

/*!
 * \class QtAws::ApplicationDiscoveryService::AssociateConfigurationItemsToApplicationResponse
 * \brief The AssociateConfigurationItemsToApplicationResponse class provides an interace for ApplicationDiscoveryService AssociateConfigurationItemsToApplication responses.
 *
 * \inmodule QtAwsApplicationDiscoveryService
 *
 *  <fullname>AWS Application Discovery Service</fullname>
 * 
 *  AWS Application Discovery Service helps you plan application migration projects by automatically identifying servers,
 *  virtual machines (VMs), software, and software dependencies running in your on-premises data centers. Application
 *  Discovery Service also collects application performance data, which can help you assess the outcome of your migration.
 *  The data collected by Application Discovery Service is securely retained in an AWS-hosted and managed database in the
 *  cloud. You can export the data as a CSV or XML file into your preferred visualization tool or cloud-migration solution
 *  to plan your migration. For more information, see <a href="http://aws.amazon.com/application-discovery/faqs/">AWS
 *  Application Discovery Service
 * 
 *  FAQ</a>>
 * 
 *  Application Discovery Service offers two modes of
 * 
 *  operation> <ul> <li>
 * 
 *  <b>Agentless discovery</b> mode is recommended for environments that use VMware vCenter Server. This mode doesn't
 *  require you to install an agent on each host. Agentless discovery gathers server information regardless of the operating
 *  systems, which minimizes the time required for initial on-premises infrastructure assessment. Agentless discovery
 *  doesn't collect information about software and software dependencies. It also doesn't work in non-VMware environments.
 * 
 *  </p </li> <li>
 * 
 *  <b>Agent-based discovery</b> mode collects a richer set of data than agentless discovery by using the AWS Application
 *  Discovery Agent, which you install on one or more hosts in your data center. The agent captures infrastructure and
 *  application information, including an inventory of installed software applications, system and process performance,
 *  resource utilization, and network dependencies between workloads. The information collected by agents is secured at rest
 *  and in transit to the Application Discovery Service database in the cloud.
 * 
 *  </p </li> </ul>
 * 
 *  We recommend that you use agent-based discovery for non-VMware environments and to collect information about software
 *  and software dependencies. You can also run agent-based and agentless discovery simultaneously. Use agentless discovery
 *  to quickly complete the initial infrastructure assessment and then install agents on select
 * 
 *  hosts>
 * 
 *  Application Discovery Service integrates with application discovery solutions from AWS Partner Network (APN) partners.
 *  Third-party application discovery tools can query Application Discovery Service and write to the Application Discovery
 *  Service database using a public API. You can then import the data into either a visualization tool or cloud-migration
 * 
 *  solution> <b>
 * 
 *  Application Discovery Service doesn't gather sensitive information. All data is handled according to the <a
 *  href="http://aws.amazon.com/privacy/">AWS Privacy Policy</a>. You can operate Application Discovery Service offline to
 *  inspect collected data before it is shared with the
 * 
 *  service> </b>
 * 
 *  This API reference provides descriptions, syntax, and usage examples for each of the actions and data types for
 *  Application Discovery Service. The topic for each action shows the API request parameters and the response.
 *  Alternatively, you can use one of the AWS SDKs to access an API that is tailored to the programming language or platform
 *  that you're using. For more information, see <a href="http://aws.amazon.com/tools/#SDKs">AWS
 * 
 *  SDKs</a>>
 * 
 *  This guide is intended for use with the <a href="http://docs.aws.amazon.com/application-discovery/latest/userguide/">
 *  <i>AWS Application Discovery Service User Guide</i>
 *
 * \sa ApplicationDiscoveryServiceClient::associateConfigurationItemsToApplication
 */

/*!
 * Constructs a AssociateConfigurationItemsToApplicationResponse object for \a reply to \a request, with parent \a parent.
 */
AssociateConfigurationItemsToApplicationResponse::AssociateConfigurationItemsToApplicationResponse(
        const AssociateConfigurationItemsToApplicationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApplicationDiscoveryServiceResponse(new AssociateConfigurationItemsToApplicationResponsePrivate(this), parent)
{
    setRequest(new AssociateConfigurationItemsToApplicationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AssociateConfigurationItemsToApplicationRequest * AssociateConfigurationItemsToApplicationResponse::request() const
{
    Q_D(const AssociateConfigurationItemsToApplicationResponse);
    return static_cast<const AssociateConfigurationItemsToApplicationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApplicationDiscoveryService AssociateConfigurationItemsToApplication \a response.
 */
void AssociateConfigurationItemsToApplicationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AssociateConfigurationItemsToApplicationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApplicationDiscoveryService::AssociateConfigurationItemsToApplicationResponsePrivate
 * \brief The AssociateConfigurationItemsToApplicationResponsePrivate class provides private implementation for AssociateConfigurationItemsToApplicationResponse.
 * \internal
 *
 * \inmodule QtAwsApplicationDiscoveryService
 */

/*!
 * Constructs a AssociateConfigurationItemsToApplicationResponsePrivate object with public implementation \a q.
 */
AssociateConfigurationItemsToApplicationResponsePrivate::AssociateConfigurationItemsToApplicationResponsePrivate(
    AssociateConfigurationItemsToApplicationResponse * const q) : ApplicationDiscoveryServiceResponsePrivate(q)
{

}

/*!
 * Parses a ApplicationDiscoveryService AssociateConfigurationItemsToApplication response element from \a xml.
 */
void AssociateConfigurationItemsToApplicationResponsePrivate::parseAssociateConfigurationItemsToApplicationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateConfigurationItemsToApplicationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApplicationDiscoveryService
} // namespace QtAws