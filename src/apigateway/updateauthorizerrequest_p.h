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

#ifndef QTAWS_UPDATEAUTHORIZERREQUEST_P_H
#define QTAWS_UPDATEAUTHORIZERREQUEST_P_H

#include "apigateway_p.h"
#include "updateauthorizerrequest.h"

namespace AWS {

namespace APIGateway {

class UpdateAuthorizerRequest;

class QTAWS_EXPORT UpdateAuthorizerRequestPrivate : public APIGatewayPrivate {

public:
    UpdateAuthorizerRequestPrivate(const APIGateway::Action action,
                                   UpdateAuthorizerRequest * const q);
    UpdateAuthorizerRequestPrivate(const UpdateAuthorizerRequestPrivate &other,
                                   UpdateAuthorizerRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateAuthorizerRequest)

};

} // namespace APIGateway
} // namespace AWS

#endif
