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

#ifndef QTAWS_DELETEDIRECTORYREQUEST_P_H
#define QTAWS_DELETEDIRECTORYREQUEST_P_H

#include "clouddirectory_p.h"
#include "deletedirectoryrequest.h"

namespace AWS {

namespace CloudDirectory {

class DeleteDirectoryRequest;

class QTAWS_EXPORT DeleteDirectoryRequestPrivate : public CloudDirectoryPrivate {

public:
    DeleteDirectoryRequestPrivate(const CloudDirectory::Action action,
                                   DeleteDirectoryRequest * const q);
    DeleteDirectoryRequestPrivate(const DeleteDirectoryRequestPrivate &other,
                                   DeleteDirectoryRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteDirectoryRequest)

};

} // namespace CloudDirectory
} // namespace AWS

#endif