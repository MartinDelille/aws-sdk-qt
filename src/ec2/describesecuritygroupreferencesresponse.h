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

#ifndef QTAWS_DESCRIBESECURITYGROUPREFERENCESRESPONSE_H
#define QTAWS_DESCRIBESECURITYGROUPREFERENCESRESPONSE_H

#include "ec2response.h"
#include "describesecuritygroupreferencesrequest.h"

namespace QtAws {
namespace EC2 {

class DescribeSecurityGroupReferencesResponsePrivate;

class QTAWS_EXPORT DescribeSecurityGroupReferencesResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribeSecurityGroupReferencesResponse(const DescribeSecurityGroupReferencesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeSecurityGroupReferencesRequest * request() const override;

protected slots:
    virtual void parseSuccess(QIODevice &response) override;

private:
    Q_DECLARE_PRIVATE(DescribeSecurityGroupReferencesResponse)
    Q_DISABLE_COPY(DescribeSecurityGroupReferencesResponse)

};

} // namespace EC2
} // namespace QtAws

#endif