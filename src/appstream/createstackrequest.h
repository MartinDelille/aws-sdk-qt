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

#ifndef QTAWS_CREATESTACKREQUEST_H
#define QTAWS_CREATESTACKREQUEST_H

#include "appstreamrequest.h"

namespace AWS {

namespace AppStream {

class CreateStackRequestPrivate;

class QTAWS_EXPORT CreateStackRequest : public AppStreamRequest {

public:
    CreateStackRequest(const CreateStackRequest &other);
    CreateStackRequest();

    virtual bool isValid() const;


protected:
    virtual AwsAbstractResponse * response(QNetworkReply * const reply) const;

private:
    Q_DECLARE_PRIVATE(CreateStackRequest)

}

} // namespace AppStream
} // namespace AWS

#endif
