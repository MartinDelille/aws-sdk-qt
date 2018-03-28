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

#ifndef QTAWS_ATTACHTYPEDLINKREQUEST_P_H
#define QTAWS_ATTACHTYPEDLINKREQUEST_P_H

#include "clouddirectory_p.h"
#include "attachtypedlinkrequest.h"

namespace AWS {

namespace CloudDirectory {

class AttachTypedLinkRequest;

class QTAWS_EXPORT AttachTypedLinkRequestPrivate : public CloudDirectoryPrivate {

public:
    AttachTypedLinkRequestPrivate(const CloudDirectory::Action action,
                                   AttachTypedLinkRequest * const q);
    AttachTypedLinkRequestPrivate(const AttachTypedLinkRequestPrivate &other,
                                   AttachTypedLinkRequest * const q);

private:
    Q_DECLARE_PUBLIC(AttachTypedLinkRequest)

};

} // namespace CloudDirectory
} // namespace AWS

#endif