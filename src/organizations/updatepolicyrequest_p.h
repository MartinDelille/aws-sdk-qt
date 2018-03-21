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

#ifndef QTAWS_UPDATEPOLICYREQUEST_P_H
#define QTAWS_UPDATEPOLICYREQUEST_P_H

#include "organizations_p.h"
#include "updatepolicyrequest.h"

namespace AWS {

namespace Organizations {

class UpdatePolicyRequest;

class QTAWS_EXPORT UpdatePolicyRequestPrivate : public OrganizationsPrivate {

public:
    UpdatePolicyRequestPrivate(const Organizations::Action action,
                                   UpdatePolicyRequest * const q);
    UpdatePolicyRequestPrivate(const UpdatePolicyRequestPrivate &other,
                                   UpdatePolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdatePolicyRequest)

};

} // namespace Organizations
} // namespace AWS

#endif
