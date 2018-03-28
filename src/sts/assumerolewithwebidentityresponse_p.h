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

#ifndef QTAWS_ASSUMEROLEWITHWEBIDENTITYRESPONSE_P_H
#define QTAWS_ASSUMEROLEWITHWEBIDENTITYRESPONSE_P_H

#include "stsresponse.h"
#include "assumerolewithwebidentityrequest.h"

namespace AWS {

namespace STS {

class AssumeRoleWithWebIdentityResponse;

class QTAWS_EXPORT AssumeRoleWithWebIdentityResponsePrivate : public STSResponsePrivate {
    Q_OBJECT

public:

    AssumeRoleWithWebIdentityResponsePrivate(AssumeRoleWithWebIdentityResponse * const q);

    void parseResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssumeRoleWithWebIdentityResponse)
    Q_DISABLE_COPY(AssumeRoleWithWebIdentityResponsePrivate)

};

} // namespace STS
} // namespace AWS

#endif