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

#ifndef QTAWS_COUNTCLOSEDWORKFLOWEXECUTIONSRESPONSE_P_H
#define QTAWS_COUNTCLOSEDWORKFLOWEXECUTIONSRESPONSE_P_H

#include "swfresponse.h"
#include "countclosedworkflowexecutionsrequest.h"

namespace AWS {

namespace SWF {

class CountClosedWorkflowExecutionsResponse;

class QTAWS_EXPORT CountClosedWorkflowExecutionsResponsePrivate : public SWFResponsePrivate {
    Q_OBJECT

public:

    CountClosedWorkflowExecutionsResponsePrivate(CountClosedWorkflowExecutionsResponse * const q);

    void parseResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CountClosedWorkflowExecutionsResponse)
    Q_DISABLE_COPY(CountClosedWorkflowExecutionsResponsePrivate)

};

} // namespace SWF
} // namespace AWS

#endif