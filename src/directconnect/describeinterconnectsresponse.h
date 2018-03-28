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

#ifndef QTAWS_DESCRIBEINTERCONNECTSRESPONSE_H
#define QTAWS_DESCRIBEINTERCONNECTSRESPONSE_H

#include "directconnectresponse.h"
#include "describeinterconnectsrequest.h"

namespace AWS {

namespace DirectConnect {

class DescribeInterconnectsResponsePrivate;

class QTAWS_EXPORT DescribeInterconnectsResponse : public DirectConnectResponse {
    Q_OBJECT

public:
    DescribeInterconnectsResponse(const DescribeInterconnectsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeInterconnectsRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(DescribeInterconnectsResponse)
    Q_DISABLE_COPY(DescribeInterconnectsResponse)

};

} // namespace DirectConnect
} // namespace AWS

#endif