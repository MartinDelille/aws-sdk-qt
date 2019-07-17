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

#include "declineinvitationsrequest.h"
#include "declineinvitationsrequest_p.h"
#include "declineinvitationsresponse.h"
#include "guarddutyrequest_p.h"

namespace QtAws {
namespace GuardDuty {

/*!
 * \class QtAws::GuardDuty::DeclineInvitationsRequest
 * \brief The DeclineInvitationsRequest class provides an interface for GuardDuty DeclineInvitations requests.
 *
 * \inmodule QtAwsGuardDuty
 *
 *
 * \sa GuardDutyClient::declineInvitations
 */

/*!
 * Constructs a copy of \a other.
 */
DeclineInvitationsRequest::DeclineInvitationsRequest(const DeclineInvitationsRequest &other)
    : GuardDutyRequest(new DeclineInvitationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeclineInvitationsRequest object.
 */
DeclineInvitationsRequest::DeclineInvitationsRequest()
    : GuardDutyRequest(new DeclineInvitationsRequestPrivate(GuardDutyRequest::DeclineInvitationsAction, this))
{

}

/*!
 * \reimp
 */
bool DeclineInvitationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeclineInvitationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeclineInvitationsRequest::response(QNetworkReply * const reply) const
{
    return new DeclineInvitationsResponse(*this, reply);
}

/*!
 * \class QtAws::GuardDuty::DeclineInvitationsRequestPrivate
 * \brief The DeclineInvitationsRequestPrivate class provides private implementation for DeclineInvitationsRequest.
 * \internal
 *
 * \inmodule QtAwsGuardDuty
 */

/*!
 * Constructs a DeclineInvitationsRequestPrivate object for GuardDuty \a action,
 * with public implementation \a q.
 */
DeclineInvitationsRequestPrivate::DeclineInvitationsRequestPrivate(
    const GuardDutyRequest::Action action, DeclineInvitationsRequest * const q)
    : GuardDutyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeclineInvitationsRequest
 * class' copy constructor.
 */
DeclineInvitationsRequestPrivate::DeclineInvitationsRequestPrivate(
    const DeclineInvitationsRequestPrivate &other, DeclineInvitationsRequest * const q)
    : GuardDutyRequestPrivate(other, q)
{

}

} // namespace GuardDuty
} // namespace QtAws
