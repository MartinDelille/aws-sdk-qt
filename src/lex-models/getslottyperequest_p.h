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

#ifndef QTAWS_GETSLOTTYPEREQUEST_P_H
#define QTAWS_GETSLOTTYPEREQUEST_P_H

#include "lexmodelbuildingservice_p.h"
#include "getslottyperequest.h"

namespace AWS {

namespace LexModelBuildingService {

class GetSlotTypeRequest;

class QTAWS_EXPORT GetSlotTypeRequestPrivate : public LexModelBuildingServicePrivate {

public:
    GetSlotTypeRequestPrivate(const LexModelBuildingService::Action action,
                                   GetSlotTypeRequest * const q);
    GetSlotTypeRequestPrivate(const GetSlotTypeRequestPrivate &other,
                                   GetSlotTypeRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetSlotTypeRequest)

};

} // namespace LexModelBuildingService
} // namespace AWS

#endif