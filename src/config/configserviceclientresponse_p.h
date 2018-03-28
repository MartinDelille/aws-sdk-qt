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

#ifndef QTAWS_CONFIGSERVICECLIENTRESPONSE_P_H
#define QTAWS_CONFIGSERVICECLIENTRESPONSE_P_H

#include "configserviceresponse.h"
#include "configserviceclientrequest.h"

namespace AWS {

namespace ConfigService {

class ConfigServiceClientResponse;

class QTAWS_EXPORT ConfigServiceClientResponsePrivate : public AwsAbstractResponsePrivate {
    Q_OBJECT

public:

    ConfigServiceClientResponsePrivate(ConfigServiceClientResponse * const q);

    void parseResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ConfigServiceClientResponse)
    Q_DISABLE_COPY(ConfigServiceClientResponsePrivate)

};

} // namespace ConfigService
} // namespace AWS

#endif