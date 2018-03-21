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

#ifndef QTAWS_BATCHREADREQUEST_P_H
#define QTAWS_BATCHREADREQUEST_P_H

#include "clouddirectory_p.h"
#include "batchreadrequest.h"

namespace AWS {

namespace CloudDirectory {

class BatchReadRequest;

class QTAWS_EXPORT BatchReadRequestPrivate : public CloudDirectoryPrivate {

public:
    BatchReadRequestPrivate(const CloudDirectory::Action action,
                                   BatchReadRequest * const q);
    BatchReadRequestPrivate(const BatchReadRequestPrivate &other,
                                   BatchReadRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchReadRequest)

};

} // namespace CloudDirectory
} // namespace AWS

#endif
