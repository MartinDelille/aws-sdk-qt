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

#include "getmasteraccountrequest.h"
#include "getmasteraccountrequest_p.h"
#include "getmasteraccountresponse.h"
#include "guarddutyrequest_p.h"

namespace QtAws {
namespace GuardDuty {

/*!
 * \class QtAws::GuardDuty::GetMasterAccountRequest
 * \brief The GetMasterAccountRequest class provides an interface for GuardDuty GetMasterAccount requests.
 *
 * \inmodule QtAwsGuardDuty
 *
 *
 * \sa GuardDutyClient::getMasterAccount
 */

/*!
 * Constructs a copy of \a other.
 */
GetMasterAccountRequest::GetMasterAccountRequest(const GetMasterAccountRequest &other)
    : GuardDutyRequest(new GetMasterAccountRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetMasterAccountRequest object.
 */
GetMasterAccountRequest::GetMasterAccountRequest()
    : GuardDutyRequest(new GetMasterAccountRequestPrivate(GuardDutyRequest::GetMasterAccountAction, this))
{

}

/*!
 * \reimp
 */
bool GetMasterAccountRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetMasterAccountResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetMasterAccountRequest::response(QNetworkReply * const reply) const
{
    return new GetMasterAccountResponse(*this, reply);
}

/*!
 * \class QtAws::GuardDuty::GetMasterAccountRequestPrivate
 * \brief The GetMasterAccountRequestPrivate class provides private implementation for GetMasterAccountRequest.
 * \internal
 *
 * \inmodule QtAwsGuardDuty
 */

/*!
 * Constructs a GetMasterAccountRequestPrivate object for GuardDuty \a action,
 * with public implementation \a q.
 */
GetMasterAccountRequestPrivate::GetMasterAccountRequestPrivate(
    const GuardDutyRequest::Action action, GetMasterAccountRequest * const q)
    : GuardDutyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetMasterAccountRequest
 * class' copy constructor.
 */
GetMasterAccountRequestPrivate::GetMasterAccountRequestPrivate(
    const GetMasterAccountRequestPrivate &other, GetMasterAccountRequest * const q)
    : GuardDutyRequestPrivate(other, q)
{

}

} // namespace GuardDuty
} // namespace QtAws
