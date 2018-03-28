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

#ifndef QTAWS_S3CLIENTREQUEST_P_H
#define QTAWS_S3CLIENTREQUEST_P_H

#include "s3_p.h"
#include "request.h"

namespace AWS {

namespace S3 {

class S3ClientRequest;

class QTAWS_EXPORT S3ClientRequestPrivate : public AwsAbstractRequestPrivate {

public:
    S3ClientRequest::Action action; ///< S3 action to be performed.
    QString apiVersion;        ///< S3 API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< S3 request (query string) parameters. @todo?

    S3ClientRequestPrivate(const S3ClientRequest::Action action, S3ClientRequest * const q);
    S3ClientRequestPrivate(const RequestPrivate &other, S3ClientRequest * const q);

    static QString toString(const S3ClientRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(S3ClientRequest)

};

} // namespace S3
} // namespace AWS

#endif