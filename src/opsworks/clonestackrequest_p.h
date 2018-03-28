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

#ifndef QTAWS_CLONESTACKREQUEST_P_H
#define QTAWS_CLONESTACKREQUEST_P_H

#include "opsworks_p.h"
#include "clonestackrequest.h"

namespace AWS {

namespace OpsWorks {

class CloneStackRequest;

class QTAWS_EXPORT CloneStackRequestPrivate : public OpsWorksPrivate {

public:
    CloneStackRequestPrivate(const OpsWorks::Action action,
                                   CloneStackRequest * const q);
    CloneStackRequestPrivate(const CloneStackRequestPrivate &other,
                                   CloneStackRequest * const q);

private:
    Q_DECLARE_PUBLIC(CloneStackRequest)

};

} // namespace OpsWorks
} // namespace AWS

#endif