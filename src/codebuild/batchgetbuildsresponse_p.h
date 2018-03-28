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

#ifndef QTAWS_BATCHGETBUILDSRESPONSE_P_H
#define QTAWS_BATCHGETBUILDSRESPONSE_P_H

#include "codebuildresponse.h"
#include "batchgetbuildsrequest.h"

namespace AWS {

namespace CodeBuild {

class BatchGetBuildsResponse;

class QTAWS_EXPORT BatchGetBuildsResponsePrivate : public CodeBuildResponsePrivate {
    Q_OBJECT

public:

    BatchGetBuildsResponsePrivate(BatchGetBuildsResponse * const q);

    void parseResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchGetBuildsResponse)
    Q_DISABLE_COPY(BatchGetBuildsResponsePrivate)

};

} // namespace CodeBuild
} // namespace AWS

#endif