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

#ifndef QTAWS_GETDOMAINNAMESREQUEST_P_H
#define QTAWS_GETDOMAINNAMESREQUEST_P_H

#include "apigateway_p.h"
#include "getdomainnamesrequest.h"

namespace AWS {

namespace APIGateway {

class GetDomainNamesRequest;

class QTAWS_EXPORT GetDomainNamesRequestPrivate : public APIGatewayPrivate {

public:
    GetDomainNamesRequestPrivate(const APIGateway::Action action,
                                   GetDomainNamesRequest * const q);
    GetDomainNamesRequestPrivate(const GetDomainNamesRequestPrivate &other,
                                   GetDomainNamesRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDomainNamesRequest)

};

} // namespace APIGateway
} // namespace AWS

#endif
