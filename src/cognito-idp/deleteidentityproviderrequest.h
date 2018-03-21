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

#ifndef QTAWS_DELETEIDENTITYPROVIDERREQUEST_H
#define QTAWS_DELETEIDENTITYPROVIDERREQUEST_H

#include "cognitoidentityproviderrequest.h"

namespace AWS {

namespace CognitoIdentityProvider {

class DeleteIdentityProviderRequestPrivate;

class QTAWS_EXPORT DeleteIdentityProviderRequest : public CognitoIdentityProviderRequest {

public:
    DeleteIdentityProviderRequest(const DeleteIdentityProviderRequest &other);
    DeleteIdentityProviderRequest();

    virtual bool isValid() const;


protected:
    virtual AwsAbstractResponse * response(QNetworkReply * const reply) const;

private:
    Q_DECLARE_PRIVATE(DeleteIdentityProviderRequest)

}

} // namespace CognitoIdentityProvider
} // namespace AWS

#endif
