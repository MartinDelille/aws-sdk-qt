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

#ifndef QTAWS_CREATEPOLICYREQUEST_P_H
#define QTAWS_CREATEPOLICYREQUEST_P_H

#include "iot_p.h"
#include "createpolicyrequest.h"

namespace AWS {

namespace IoT {

class CreatePolicyRequest;

class QTAWS_EXPORT CreatePolicyRequestPrivate : public IoTPrivate {

public:
    CreatePolicyRequestPrivate(const IoT::Action action,
                                   CreatePolicyRequest * const q);
    CreatePolicyRequestPrivate(const CreatePolicyRequestPrivate &other,
                                   CreatePolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreatePolicyRequest)

};

} // namespace IoT
} // namespace AWS

#endif
