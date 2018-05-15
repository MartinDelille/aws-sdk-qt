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

#include "gettagvaluesresponse.h"
#include "gettagvaluesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ResourceGroupsTaggingAPI {

/*!
 * \class QtAws::ResourceGroupsTaggingAPI::GetTagValuesResponse
 * \brief The GetTagValuesResponse class provides an interace for ResourceGroupsTaggingAPI GetTagValues responses.
 *
 * \inmodule QtAwsResourceGroupsTaggingAPI
 *
 *  <fullname>Resource Groups Tagging API</fullname>
 * 
 *  This guide describes the API operations for the resource groups
 * 
 *  tagging>
 * 
 *  A tag is a label that you assign to an AWS resource. A tag consists of a key and a value, both of which you define. For
 *  example, if you have two Amazon EC2 instances, you might assign both a tag key of "Stack." But the value of "Stack"
 *  might be "Testing" for one and "Production" for the
 * 
 *  other>
 * 
 *  Tagging can help you organize your resources and enables you to simplify resource management, access management and cost
 *  allocation. For more information about tagging, see <a
 *  href="http://docs.aws.amazon.com/awsconsolehelpdocs/latest/gsg/tag-editor.html">Working with Tag Editor</a> and <a
 *  href="http://docs.aws.amazon.com/awsconsolehelpdocs/latest/gsg/resource-groups.html">Working with Resource Groups</a>.
 *  For more information about permissions you need to use the resource groups tagging APIs, see <a
 *  href="http://docs.aws.amazon.com/awsconsolehelpdocs/latest/gsg/obtaining-permissions-for-resource-groups.html">Obtaining
 *  Permissions for Resource Groups </a> and <a
 *  href="http://docs.aws.amazon.com/awsconsolehelpdocs/latest/gsg/obtaining-permissions-for-tagging.html">Obtaining
 *  Permissions for Tagging
 * 
 *  </a>>
 * 
 *  You can use the resource groups tagging APIs to complete the following
 * 
 *  tasks> <ul> <li>
 * 
 *  Tag and untag supported resources located in the specified region for the AWS
 * 
 *  accoun> </li> <li>
 * 
 *  Use tag-based filters to search for resources located in the specified region for the AWS
 * 
 *  accoun> </li> <li>
 * 
 *  List all existing tag keys in the specified region for the AWS
 * 
 *  accoun> </li> <li>
 * 
 *  List all existing values for the specified key in the specified region for the AWS
 * 
 *  accoun> </li> </ul>
 * 
 *  Not all resources can have tags. For a lists of resources that you can tag, see <a
 *  href="http://docs.aws.amazon.com/awsconsolehelpdocs/latest/gsg/supported-resources.html">Supported Resources</a> in the
 *  <i>AWS Resource Groups and Tag Editor User
 * 
 *  Guide</i>>
 * 
 *  To make full use of the resource groups tagging APIs, you might need additional IAM permissions, including permission to
 *  access the resources of individual services as well as permission to view and apply tags to those resources. For more
 *  information, see <a
 *  href="http://docs.aws.amazon.com/awsconsolehelpdocs/latest/gsg/obtaining-permissions-for-tagging.html">Obtaining
 *  Permissions for Tagging</a> in the <i>AWS Resource Groups and Tag Editor User
 *
 * \sa ResourceGroupsTaggingAPIClient::getTagValues
 */

/*!
 * Constructs a GetTagValuesResponse object for \a reply to \a request, with parent \a parent.
 */
GetTagValuesResponse::GetTagValuesResponse(
        const GetTagValuesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ResourceGroupsTaggingAPIResponse(new GetTagValuesResponsePrivate(this), parent)
{
    setRequest(new GetTagValuesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetTagValuesRequest * GetTagValuesResponse::request() const
{
    Q_D(const GetTagValuesResponse);
    return static_cast<const GetTagValuesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ResourceGroupsTaggingAPI GetTagValues \a response.
 */
void GetTagValuesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetTagValuesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ResourceGroupsTaggingAPI::GetTagValuesResponsePrivate
 * \brief The GetTagValuesResponsePrivate class provides private implementation for GetTagValuesResponse.
 * \internal
 *
 * \inmodule QtAwsResourceGroupsTaggingAPI
 */

/*!
 * Constructs a GetTagValuesResponsePrivate object with public implementation \a q.
 */
GetTagValuesResponsePrivate::GetTagValuesResponsePrivate(
    GetTagValuesResponse * const q) : ResourceGroupsTaggingAPIResponsePrivate(q)
{

}

/*!
 * Parses a ResourceGroupsTaggingAPI GetTagValues response element from \a xml.
 */
void GetTagValuesResponsePrivate::parseGetTagValuesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetTagValuesResponse"));
    /// @todo
}

} // namespace ResourceGroupsTaggingAPI
} // namespace QtAws
