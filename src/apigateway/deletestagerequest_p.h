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

#ifndef QTAWS_DELETESTAGEREQUEST_P_H
#define QTAWS_DELETESTAGEREQUEST_P_H

#include "apigateway_p.h"
#include "deletestagerequest.h"

namespace AWS {

namespace APIGateway {

class DeleteStageRequest;

class QTAWS_EXPORT DeleteStageRequestPrivate : public APIGatewayPrivate {

public:
    DeleteStageRequestPrivate(const APIGateway::Action action,
                                   DeleteStageRequest * const q);
    DeleteStageRequestPrivate(const DeleteStageRequestPrivate &other,
                                   DeleteStageRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteStageRequest)

};

} // namespace APIGateway
} // namespace AWS

#endif