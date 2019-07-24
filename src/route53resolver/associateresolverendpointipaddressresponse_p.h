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

#ifndef QTAWS_ASSOCIATERESOLVERENDPOINTIPADDRESSRESPONSE_P_H
#define QTAWS_ASSOCIATERESOLVERENDPOINTIPADDRESSRESPONSE_P_H

#include "route53resolverresponse_p.h"

namespace QtAws {
namespace Route53Resolver {

class AssociateResolverEndpointIpAddressResponse;

class QTAWS_EXPORT AssociateResolverEndpointIpAddressResponsePrivate : public Route53ResolverResponsePrivate {

public:

    AssociateResolverEndpointIpAddressResponsePrivate(AssociateResolverEndpointIpAddressResponse * const q);

    void parseAssociateResolverEndpointIpAddressResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateResolverEndpointIpAddressResponse)
    Q_DISABLE_COPY(AssociateResolverEndpointIpAddressResponsePrivate)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif