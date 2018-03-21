/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_GETCONTACTREACHABILITYSTATUSREQUEST_H
#define QTAWS_GETCONTACTREACHABILITYSTATUSREQUEST_H

#include "route53domainsrequest.h"

namespace AWS {

namespace Route53Domains {

class GetContactReachabilityStatusRequestPrivate;

class QTAWS_EXPORT GetContactReachabilityStatusRequest : public Route53DomainsRequest {

public:
    GetContactReachabilityStatusRequest(const GetContactReachabilityStatusRequest &other);
    GetContactReachabilityStatusRequest();

    virtual bool isValid() const;


protected:
    virtual AwsAbstractResponse * response(QNetworkReply * const reply) const;

private:
    Q_DECLARE_PRIVATE(GetContactReachabilityStatusRequest)

}

} // namespace Route53Domains
} // namespace AWS

#endif
