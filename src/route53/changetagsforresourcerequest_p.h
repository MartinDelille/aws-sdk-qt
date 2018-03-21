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

#ifndef QTAWS_CHANGETAGSFORRESOURCEREQUEST_P_H
#define QTAWS_CHANGETAGSFORRESOURCEREQUEST_P_H

#include "route53_p.h"
#include "changetagsforresourcerequest.h"

namespace AWS {

namespace Route53 {

class ChangeTagsForResourceRequest;

class QTAWS_EXPORT ChangeTagsForResourceRequestPrivate : public Route53Private {

public:
    ChangeTagsForResourceRequestPrivate(const Route53::Action action,
                                   ChangeTagsForResourceRequest * const q);
    ChangeTagsForResourceRequestPrivate(const ChangeTagsForResourceRequestPrivate &other,
                                   ChangeTagsForResourceRequest * const q);

private:
    Q_DECLARE_PUBLIC(ChangeTagsForResourceRequest)

};

} // namespace Route53
} // namespace AWS

#endif
