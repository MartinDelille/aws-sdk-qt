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

#include "sendcustomverificationemailrequest.h"
#include "sendcustomverificationemailrequest_p.h"
#include "sendcustomverificationemailresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace SES {

/*!
 * \class QtAws::SES::SendCustomVerificationEmailRequest
 * \brief The SendCustomVerificationEmailRequest class provides an interface for SES SendCustomVerificationEmail requests.
 *
 * \inmodule QtAwsSES
 *
 *  <fullname>Amazon Simple Email Service</fullname>
 * 
 *  This document contains reference information for the <a href="https://aws.amazon.com/ses/">Amazon Simple Email
 *  Service</a> (Amazon SES) API, version 2010-12-01. This document is best used in conjunction with the <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer Guide</a>.
 * 
 *  </p <note>
 * 
 *  For a list of Amazon SES endpoints to use in service requests, see <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/regions.html">Regions and Amazon SES</a> in the <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer
 *
 * \sa SesClient::sendCustomVerificationEmail
 */

/*!
 * Constructs a copy of \a other.
 */
SendCustomVerificationEmailRequest::SendCustomVerificationEmailRequest(const SendCustomVerificationEmailRequest &other)
    : SesRequest(new SendCustomVerificationEmailRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SendCustomVerificationEmailRequest object.
 */
SendCustomVerificationEmailRequest::SendCustomVerificationEmailRequest()
    : SesRequest(new SendCustomVerificationEmailRequestPrivate(SesRequest::SendCustomVerificationEmailAction, this))
{

}

/*!
 * \reimp
 */
bool SendCustomVerificationEmailRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SendCustomVerificationEmailResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SendCustomVerificationEmailRequest::response(QNetworkReply * const reply) const
{
    return new SendCustomVerificationEmailResponse(*this, reply);
}

/*!
 * \class QtAws::SES::SendCustomVerificationEmailRequestPrivate
 * \brief The SendCustomVerificationEmailRequestPrivate class provides private implementation for SendCustomVerificationEmailRequest.
 * \internal
 *
 * \inmodule QtAwsSES
 */

/*!
 * Constructs a SendCustomVerificationEmailRequestPrivate object for Ses \a action,
 * with public implementation \a q.
 */
SendCustomVerificationEmailRequestPrivate::SendCustomVerificationEmailRequestPrivate(
    const SesRequest::Action action, SendCustomVerificationEmailRequest * const q)
    : SesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SendCustomVerificationEmailRequest
 * class' copy constructor.
 */
SendCustomVerificationEmailRequestPrivate::SendCustomVerificationEmailRequestPrivate(
    const SendCustomVerificationEmailRequestPrivate &other, SendCustomVerificationEmailRequest * const q)
    : SesRequestPrivate(other, q)
{

}

} // namespace SES
} // namespace QtAws