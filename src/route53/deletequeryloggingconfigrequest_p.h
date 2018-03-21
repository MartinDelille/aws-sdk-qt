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

#ifndef QTAWS_DELETEQUERYLOGGINGCONFIGREQUEST_P_H
#define QTAWS_DELETEQUERYLOGGINGCONFIGREQUEST_P_H

#include "route53_p.h"
#include "deletequeryloggingconfigrequest.h"

namespace AWS {

namespace Route53 {

class DeleteQueryLoggingConfigRequest;

class QTAWS_EXPORT DeleteQueryLoggingConfigRequestPrivate : public Route53Private {

public:
    DeleteQueryLoggingConfigRequestPrivate(const Route53::Action action,
                                   DeleteQueryLoggingConfigRequest * const q);
    DeleteQueryLoggingConfigRequestPrivate(const DeleteQueryLoggingConfigRequestPrivate &other,
                                   DeleteQueryLoggingConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteQueryLoggingConfigRequest)

};

} // namespace Route53
} // namespace AWS

#endif
