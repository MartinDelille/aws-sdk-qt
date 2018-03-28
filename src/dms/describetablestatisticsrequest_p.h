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

#ifndef QTAWS_DESCRIBETABLESTATISTICSREQUEST_P_H
#define QTAWS_DESCRIBETABLESTATISTICSREQUEST_P_H

#include "databasemigrationservice_p.h"
#include "describetablestatisticsrequest.h"

namespace AWS {

namespace DatabaseMigrationService {

class DescribeTableStatisticsRequest;

class QTAWS_EXPORT DescribeTableStatisticsRequestPrivate : public DatabaseMigrationServicePrivate {

public:
    DescribeTableStatisticsRequestPrivate(const DatabaseMigrationService::Action action,
                                   DescribeTableStatisticsRequest * const q);
    DescribeTableStatisticsRequestPrivate(const DescribeTableStatisticsRequestPrivate &other,
                                   DescribeTableStatisticsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeTableStatisticsRequest)

};

} // namespace DatabaseMigrationService
} // namespace AWS

#endif