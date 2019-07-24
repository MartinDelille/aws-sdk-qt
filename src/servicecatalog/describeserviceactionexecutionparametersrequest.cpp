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

#include "describeserviceactionexecutionparametersrequest.h"
#include "describeserviceactionexecutionparametersrequest_p.h"
#include "describeserviceactionexecutionparametersresponse.h"
#include "servicecatalogrequest_p.h"

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::DescribeServiceActionExecutionParametersRequest
 * \brief The DescribeServiceActionExecutionParametersRequest class provides an interface for ServiceCatalog DescribeServiceActionExecutionParameters requests.
 *
 * \inmodule QtAwsServiceCatalog
 *
 *  <fullname>AWS Service Catalog</fullname>
 * 
 *  <a href="https://aws.amazon.com/servicecatalog/">AWS Service Catalog</a> enables organizations to create and manage
 *  catalogs of IT services that are approved for use on AWS. To get the most out of this documentation, you should be
 *  familiar with the terminology discussed in <a
 *  href="http://docs.aws.amazon.com/servicecatalog/latest/adminguide/what-is_concepts.html">AWS Service Catalog
 *
 * \sa ServiceCatalogClient::describeServiceActionExecutionParameters
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeServiceActionExecutionParametersRequest::DescribeServiceActionExecutionParametersRequest(const DescribeServiceActionExecutionParametersRequest &other)
    : ServiceCatalogRequest(new DescribeServiceActionExecutionParametersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeServiceActionExecutionParametersRequest object.
 */
DescribeServiceActionExecutionParametersRequest::DescribeServiceActionExecutionParametersRequest()
    : ServiceCatalogRequest(new DescribeServiceActionExecutionParametersRequestPrivate(ServiceCatalogRequest::DescribeServiceActionExecutionParametersAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeServiceActionExecutionParametersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeServiceActionExecutionParametersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeServiceActionExecutionParametersRequest::response(QNetworkReply * const reply) const
{
    return new DescribeServiceActionExecutionParametersResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceCatalog::DescribeServiceActionExecutionParametersRequestPrivate
 * \brief The DescribeServiceActionExecutionParametersRequestPrivate class provides private implementation for DescribeServiceActionExecutionParametersRequest.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a DescribeServiceActionExecutionParametersRequestPrivate object for ServiceCatalog \a action,
 * with public implementation \a q.
 */
DescribeServiceActionExecutionParametersRequestPrivate::DescribeServiceActionExecutionParametersRequestPrivate(
    const ServiceCatalogRequest::Action action, DescribeServiceActionExecutionParametersRequest * const q)
    : ServiceCatalogRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeServiceActionExecutionParametersRequest
 * class' copy constructor.
 */
DescribeServiceActionExecutionParametersRequestPrivate::DescribeServiceActionExecutionParametersRequestPrivate(
    const DescribeServiceActionExecutionParametersRequestPrivate &other, DescribeServiceActionExecutionParametersRequest * const q)
    : ServiceCatalogRequestPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace QtAws