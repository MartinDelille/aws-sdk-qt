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

#include "deleteimagebuilderrequest.h"
#include "deleteimagebuilderrequest_p.h"
#include "deleteimagebuilderresponse.h"
#include "appstreamrequest_p.h"

namespace QtAws {
namespace AppStream {

/*!
 * \class QtAws::AppStream::DeleteImageBuilderRequest
 * \brief The DeleteImageBuilderRequest class provides an interface for AppStream DeleteImageBuilder requests.
 *
 * \inmodule QtAwsAppStream
 *
 *  <fullname>Amazon AppStream 2.0</fullname>
 * 
 *  You can use Amazon AppStream 2.0 to stream desktop applications to any device running a web browser, without rewriting
 *
 * \sa AppStreamClient::deleteImageBuilder
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteImageBuilderRequest::DeleteImageBuilderRequest(const DeleteImageBuilderRequest &other)
    : AppStreamRequest(new DeleteImageBuilderRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteImageBuilderRequest object.
 */
DeleteImageBuilderRequest::DeleteImageBuilderRequest()
    : AppStreamRequest(new DeleteImageBuilderRequestPrivate(AppStreamRequest::DeleteImageBuilderAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteImageBuilderRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteImageBuilderResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteImageBuilderRequest::response(QNetworkReply * const reply) const
{
    return new DeleteImageBuilderResponse(*this, reply);
}

/*!
 * \class QtAws::AppStream::DeleteImageBuilderRequestPrivate
 * \brief The DeleteImageBuilderRequestPrivate class provides private implementation for DeleteImageBuilderRequest.
 * \internal
 *
 * \inmodule QtAwsAppStream
 */

/*!
 * Constructs a DeleteImageBuilderRequestPrivate object for AppStream \a action,
 * with public implementation \a q.
 */
DeleteImageBuilderRequestPrivate::DeleteImageBuilderRequestPrivate(
    const AppStreamRequest::Action action, DeleteImageBuilderRequest * const q)
    : AppStreamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteImageBuilderRequest
 * class' copy constructor.
 */
DeleteImageBuilderRequestPrivate::DeleteImageBuilderRequestPrivate(
    const DeleteImageBuilderRequestPrivate &other, DeleteImageBuilderRequest * const q)
    : AppStreamRequestPrivate(other, q)
{

}

} // namespace AppStream
} // namespace QtAws
