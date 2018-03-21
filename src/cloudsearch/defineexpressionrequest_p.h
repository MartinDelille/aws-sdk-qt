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

#ifndef QTAWS_DEFINEEXPRESSIONREQUEST_P_H
#define QTAWS_DEFINEEXPRESSIONREQUEST_P_H

#include "cloudsearch_p.h"
#include "defineexpressionrequest.h"

namespace AWS {

namespace CloudSearch {

class DefineExpressionRequest;

class QTAWS_EXPORT DefineExpressionRequestPrivate : public CloudSearchPrivate {

public:
    DefineExpressionRequestPrivate(const CloudSearch::Action action,
                                   DefineExpressionRequest * const q);
    DefineExpressionRequestPrivate(const DefineExpressionRequestPrivate &other,
                                   DefineExpressionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DefineExpressionRequest)

};

} // namespace CloudSearch
} // namespace AWS

#endif
