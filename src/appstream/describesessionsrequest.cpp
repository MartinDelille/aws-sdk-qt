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

#include "describesessionsrequest.h"
#include "describesessionsrequest_p.h"
#include "describesessionsresponse.h"
#include "appstreamrequest_p.h"

namespace QtAws {
namespace AppStream {

/*!
 * \class QtAws::AppStream::DescribeSessionsRequest
 * \brief The DescribeSessionsRequest class provides an interface for AppStream DescribeSessions requests.
 *
 * \inmodule QtAwsAppStream
 *
 *  <fullname>Amazon AppStream 2.0</fullname>
 * 
 *  You can use Amazon AppStream 2.0 to stream desktop applications to any device running a web browser, without rewriting
 *
 * \sa AppStreamClient::describeSessions
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeSessionsRequest::DescribeSessionsRequest(const DescribeSessionsRequest &other)
    : AppStreamRequest(new DescribeSessionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeSessionsRequest object.
 */
DescribeSessionsRequest::DescribeSessionsRequest()
    : AppStreamRequest(new DescribeSessionsRequestPrivate(AppStreamRequest::DescribeSessionsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeSessionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeSessionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeSessionsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeSessionsResponse(*this, reply);
}

/*!
 * \class QtAws::AppStream::DescribeSessionsRequestPrivate
 * \brief The DescribeSessionsRequestPrivate class provides private implementation for DescribeSessionsRequest.
 * \internal
 *
 * \inmodule QtAwsAppStream
 */

/*!
 * Constructs a DescribeSessionsRequestPrivate object for AppStream \a action,
 * with public implementation \a q.
 */
DescribeSessionsRequestPrivate::DescribeSessionsRequestPrivate(
    const AppStreamRequest::Action action, DescribeSessionsRequest * const q)
    : AppStreamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeSessionsRequest
 * class' copy constructor.
 */
DescribeSessionsRequestPrivate::DescribeSessionsRequestPrivate(
    const DescribeSessionsRequestPrivate &other, DescribeSessionsRequest * const q)
    : AppStreamRequestPrivate(other, q)
{

}

} // namespace AppStream
} // namespace QtAws
