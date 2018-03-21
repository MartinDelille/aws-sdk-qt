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

#ifndef QTAWS_LISTTHINGSINTHINGGROUPREQUEST_P_H
#define QTAWS_LISTTHINGSINTHINGGROUPREQUEST_P_H

#include "iot_p.h"
#include "listthingsinthinggrouprequest.h"

namespace AWS {

namespace IoT {

class ListThingsInThingGroupRequest;

class QTAWS_EXPORT ListThingsInThingGroupRequestPrivate : public IoTPrivate {

public:
    ListThingsInThingGroupRequestPrivate(const IoT::Action action,
                                   ListThingsInThingGroupRequest * const q);
    ListThingsInThingGroupRequestPrivate(const ListThingsInThingGroupRequestPrivate &other,
                                   ListThingsInThingGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListThingsInThingGroupRequest)

};

} // namespace IoT
} // namespace AWS

#endif
