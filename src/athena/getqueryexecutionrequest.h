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

#ifndef QTAWS_GETQUERYEXECUTIONREQUEST_H
#define QTAWS_GETQUERYEXECUTIONREQUEST_H

#include "athenarequest.h"

namespace AWS {

namespace Athena {

class GetQueryExecutionRequestPrivate;

class QTAWS_EXPORT GetQueryExecutionRequest : public AthenaRequest {

public:
    GetQueryExecutionRequest(const GetQueryExecutionRequest &other);
    GetQueryExecutionRequest();

    virtual bool isValid() const;


protected:
    virtual AwsAbstractResponse * response(QNetworkReply * const reply) const;

private:
    Q_DECLARE_PRIVATE(GetQueryExecutionRequest)

}

} // namespace Athena
} // namespace AWS

#endif