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

#ifndef QTAWS_SERVICEDISCOVERYCLIENTREQUEST_P_H
#define QTAWS_SERVICEDISCOVERYCLIENTREQUEST_P_H

#include "servicediscovery_p.h"
#include "request.h"

namespace AWS {

namespace ServiceDiscovery {

class ServiceDiscoveryClientRequest;

class QTAWS_EXPORT ServiceDiscoveryClientRequestPrivate : public AwsAbstractRequestPrivate {

public:
    ServiceDiscoveryClientRequest::Action action; ///< ServiceDiscovery action to be performed.
    QString apiVersion;        ///< ServiceDiscovery API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< ServiceDiscovery request (query string) parameters. @todo?

    ServiceDiscoveryClientRequestPrivate(const ServiceDiscoveryClientRequest::Action action, ServiceDiscoveryClientRequest * const q);
    ServiceDiscoveryClientRequestPrivate(const RequestPrivate &other, ServiceDiscoveryClientRequest * const q);

    static QString toString(const ServiceDiscoveryClientRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(ServiceDiscoveryClientRequest)

};

} // namespace ServiceDiscovery
} // namespace AWS

#endif