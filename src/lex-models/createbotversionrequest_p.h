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

#ifndef QTAWS_CREATEBOTVERSIONREQUEST_P_H
#define QTAWS_CREATEBOTVERSIONREQUEST_P_H

#include "lexmodelbuildingservice_p.h"
#include "createbotversionrequest.h"

namespace AWS {

namespace LexModelBuildingService {

class CreateBotVersionRequest;

class QTAWS_EXPORT CreateBotVersionRequestPrivate : public LexModelBuildingServicePrivate {

public:
    CreateBotVersionRequestPrivate(const LexModelBuildingService::Action action,
                                   CreateBotVersionRequest * const q);
    CreateBotVersionRequestPrivate(const CreateBotVersionRequestPrivate &other,
                                   CreateBotVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateBotVersionRequest)

};

} // namespace LexModelBuildingService
} // namespace AWS

#endif
