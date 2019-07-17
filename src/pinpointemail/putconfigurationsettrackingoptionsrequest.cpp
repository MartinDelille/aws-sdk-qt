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

#include "putconfigurationsettrackingoptionsrequest.h"
#include "putconfigurationsettrackingoptionsrequest_p.h"
#include "putconfigurationsettrackingoptionsresponse.h"
#include "pinpointemailrequest_p.h"

namespace QtAws {
namespace PinpointEmail {

/*!
 * \class QtAws::PinpointEmail::PutConfigurationSetTrackingOptionsRequest
 * \brief The PutConfigurationSetTrackingOptionsRequest class provides an interface for PinpointEmail PutConfigurationSetTrackingOptions requests.
 *
 * \inmodule QtAwsPinpointEmail
 *
 *  <fullname>Amazon Pinpoint Email Service</fullname>
 * 
 *  This document contains reference information for the <a href="https://aws.amazon.com/pinpoint">Amazon Pinpoint</a> Email
 *  API, version 1.0. This document is best used in conjunction with the <a
 *  href="http://docs.aws.amazon.com/pinpoint/latest/developerguide/welcome.html">Amazon Pinpoint Developer
 * 
 *  Guide</a>>
 * 
 *  The Amazon Pinpoint Email API is available in the US East (N. Virginia), US West (Oregon) and the EU (Ireland) Regions
 *  at the following
 * 
 *  endpoints> <ul> <li>
 * 
 *  <b>US East (N. Virginia)</b>: <code>email.us-east-1.amazonaws.com</code>
 * 
 *  </p </li> <li>
 * 
 *  <b>US West (Oregon)</b>: <code>email.us-west-2.amazonaws.com</code>
 * 
 *  </p </li> <li>
 * 
 *  <b>EU (Ireland)</b>: <code>email.eu-west-1.amazonaws.com</code>
 *
 * \sa PinpointEmailClient::putConfigurationSetTrackingOptions
 */

/*!
 * Constructs a copy of \a other.
 */
PutConfigurationSetTrackingOptionsRequest::PutConfigurationSetTrackingOptionsRequest(const PutConfigurationSetTrackingOptionsRequest &other)
    : PinpointEmailRequest(new PutConfigurationSetTrackingOptionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutConfigurationSetTrackingOptionsRequest object.
 */
PutConfigurationSetTrackingOptionsRequest::PutConfigurationSetTrackingOptionsRequest()
    : PinpointEmailRequest(new PutConfigurationSetTrackingOptionsRequestPrivate(PinpointEmailRequest::PutConfigurationSetTrackingOptionsAction, this))
{

}

/*!
 * \reimp
 */
bool PutConfigurationSetTrackingOptionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutConfigurationSetTrackingOptionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutConfigurationSetTrackingOptionsRequest::response(QNetworkReply * const reply) const
{
    return new PutConfigurationSetTrackingOptionsResponse(*this, reply);
}

/*!
 * \class QtAws::PinpointEmail::PutConfigurationSetTrackingOptionsRequestPrivate
 * \brief The PutConfigurationSetTrackingOptionsRequestPrivate class provides private implementation for PutConfigurationSetTrackingOptionsRequest.
 * \internal
 *
 * \inmodule QtAwsPinpointEmail
 */

/*!
 * Constructs a PutConfigurationSetTrackingOptionsRequestPrivate object for PinpointEmail \a action,
 * with public implementation \a q.
 */
PutConfigurationSetTrackingOptionsRequestPrivate::PutConfigurationSetTrackingOptionsRequestPrivate(
    const PinpointEmailRequest::Action action, PutConfigurationSetTrackingOptionsRequest * const q)
    : PinpointEmailRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutConfigurationSetTrackingOptionsRequest
 * class' copy constructor.
 */
PutConfigurationSetTrackingOptionsRequestPrivate::PutConfigurationSetTrackingOptionsRequestPrivate(
    const PutConfigurationSetTrackingOptionsRequestPrivate &other, PutConfigurationSetTrackingOptionsRequest * const q)
    : PinpointEmailRequestPrivate(other, q)
{

}

} // namespace PinpointEmail
} // namespace QtAws
