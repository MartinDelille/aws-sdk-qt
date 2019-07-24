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

#include "describelifecycleconfigurationrequest.h"
#include "describelifecycleconfigurationrequest_p.h"
#include "describelifecycleconfigurationresponse.h"
#include "efsrequest_p.h"

namespace QtAws {
namespace EFS {

/*!
 * \class QtAws::EFS::DescribeLifecycleConfigurationRequest
 * \brief The DescribeLifecycleConfigurationRequest class provides an interface for EFS DescribeLifecycleConfiguration requests.
 *
 * \inmodule QtAwsEFS
 *
 *  <fullname>Amazon Elastic File System</fullname>
 * 
 *  Amazon Elastic File System (Amazon EFS) provides simple, scalable file storage for use with Amazon EC2 instances in the
 *  AWS Cloud. With Amazon EFS, storage capacity is elastic, growing and shrinking automatically as you add and remove
 *  files, so your applications have the storage they need, when they need it. For more information, see the <a
 *  href="https://docs.aws.amazon.com/efs/latest/ug/api-reference.html">User
 *
 * \sa EfsClient::describeLifecycleConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeLifecycleConfigurationRequest::DescribeLifecycleConfigurationRequest(const DescribeLifecycleConfigurationRequest &other)
    : EfsRequest(new DescribeLifecycleConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeLifecycleConfigurationRequest object.
 */
DescribeLifecycleConfigurationRequest::DescribeLifecycleConfigurationRequest()
    : EfsRequest(new DescribeLifecycleConfigurationRequestPrivate(EfsRequest::DescribeLifecycleConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeLifecycleConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeLifecycleConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeLifecycleConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new DescribeLifecycleConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::EFS::DescribeLifecycleConfigurationRequestPrivate
 * \brief The DescribeLifecycleConfigurationRequestPrivate class provides private implementation for DescribeLifecycleConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsEFS
 */

/*!
 * Constructs a DescribeLifecycleConfigurationRequestPrivate object for Efs \a action,
 * with public implementation \a q.
 */
DescribeLifecycleConfigurationRequestPrivate::DescribeLifecycleConfigurationRequestPrivate(
    const EfsRequest::Action action, DescribeLifecycleConfigurationRequest * const q)
    : EfsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeLifecycleConfigurationRequest
 * class' copy constructor.
 */
DescribeLifecycleConfigurationRequestPrivate::DescribeLifecycleConfigurationRequestPrivate(
    const DescribeLifecycleConfigurationRequestPrivate &other, DescribeLifecycleConfigurationRequest * const q)
    : EfsRequestPrivate(other, q)
{

}

} // namespace EFS
} // namespace QtAws