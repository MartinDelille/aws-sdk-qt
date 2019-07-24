/*
    Copyright 2013-2019 Paul Colby

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

#ifndef QTAWS_UPLOADENTITYDEFINITIONSRESPONSE_P_H
#define QTAWS_UPLOADENTITYDEFINITIONSRESPONSE_P_H

#include "iotthingsgraphresponse_p.h"

namespace QtAws {
namespace IoTThingsGraph {

class UploadEntityDefinitionsResponse;

class QTAWS_EXPORT UploadEntityDefinitionsResponsePrivate : public IoTThingsGraphResponsePrivate {

public:

    UploadEntityDefinitionsResponsePrivate(UploadEntityDefinitionsResponse * const q);

    void parseUploadEntityDefinitionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UploadEntityDefinitionsResponse)
    Q_DISABLE_COPY(UploadEntityDefinitionsResponsePrivate)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif