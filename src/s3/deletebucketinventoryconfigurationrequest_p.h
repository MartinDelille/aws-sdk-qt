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

#ifndef QTAWS_DELETEBUCKETINVENTORYCONFIGURATIONREQUEST_P_H
#define QTAWS_DELETEBUCKETINVENTORYCONFIGURATIONREQUEST_P_H

#include "s3_p.h"
#include "deletebucketinventoryconfigurationrequest.h"

namespace AWS {

namespace S3 {

class DeleteBucketInventoryConfigurationRequest;

class QTAWS_EXPORT DeleteBucketInventoryConfigurationRequestPrivate : public S3Private {

public:
    DeleteBucketInventoryConfigurationRequestPrivate(const S3::Action action,
                                   DeleteBucketInventoryConfigurationRequest * const q);
    DeleteBucketInventoryConfigurationRequestPrivate(const DeleteBucketInventoryConfigurationRequestPrivate &other,
                                   DeleteBucketInventoryConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteBucketInventoryConfigurationRequest)

};

} // namespace S3
} // namespace AWS

#endif
