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

#ifndef QTAWS_ECRCLIENTREQUEST_P_H
#define QTAWS_ECRCLIENTREQUEST_P_H

#include "ecr_p.h"
#include "request.h"

namespace AWS {

namespace ECR {

class EcrClientRequest;

class QTAWS_EXPORT EcrClientRequestPrivate : public AwsAbstractRequestPrivate {

public:
    EcrClientRequest::Action action; ///< ECR action to be performed.
    QString apiVersion;        ///< ECR API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< ECR request (query string) parameters. @todo?

    EcrClientRequestPrivate(const EcrClientRequest::Action action, EcrClientRequest * const q);
    EcrClientRequestPrivate(const RequestPrivate &other, EcrClientRequest * const q);

    static QString toString(const EcrClientRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(EcrClientRequest)

};

} // namespace ECR
} // namespace AWS

#endif