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

#ifndef QTAWS_PUTCOMPLIANCEITEMSRESPONSE_H
#define QTAWS_PUTCOMPLIANCEITEMSRESPONSE_H

#include "ssmresponse.h"
#include "putcomplianceitemsrequest.h"

namespace QtAws {
namespace SSM {

class PutComplianceItemsResponsePrivate;

class QTAWS_EXPORT PutComplianceItemsResponse : public SsmResponse {
    Q_OBJECT

public:
    PutComplianceItemsResponse(const PutComplianceItemsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutComplianceItemsRequest * request() const override;

protected slots:
    virtual void parseSuccess(QIODevice &response) override;

private:
    Q_DECLARE_PRIVATE(PutComplianceItemsResponse)
    Q_DISABLE_COPY(PutComplianceItemsResponse)

};

} // namespace SSM
} // namespace QtAws

#endif