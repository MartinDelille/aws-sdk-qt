/*
    Copyright 2013-2018 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_LISTSTACKINSTANCESRESPONSE_H
#define QTAWS_LISTSTACKINSTANCESRESPONSE_H

#include "cloudformationresponse.h"
#include "liststackinstancesrequest.h"

namespace QtAws {
namespace CloudFormation {

class ListStackInstancesResponsePrivate;

class QTAWS_EXPORT ListStackInstancesResponse : public CloudFormationResponse {
    Q_OBJECT

public:
    ListStackInstancesResponse(const ListStackInstancesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListStackInstancesRequest * request() const override;

protected slots:
    virtual void parseSuccess(QIODevice &response) override;

private:
    Q_DECLARE_PRIVATE(ListStackInstancesResponse)
    Q_DISABLE_COPY(ListStackInstancesResponse)

};

} // namespace CloudFormation
} // namespace QtAws

#endif