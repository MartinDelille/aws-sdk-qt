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

#ifndef QTAWS_SEARCHREQUEST_P_H
#define QTAWS_SEARCHREQUEST_P_H

#include "cloudsearchdomain_p.h"
#include "searchrequest.h"

namespace AWS {

namespace CloudSearchDomain {

class SearchRequest;

class QTAWS_EXPORT SearchRequestPrivate : public CloudSearchDomainPrivate {

public:
    SearchRequestPrivate(const CloudSearchDomain::Action action,
                                   SearchRequest * const q);
    SearchRequestPrivate(const SearchRequestPrivate &other,
                                   SearchRequest * const q);

private:
    Q_DECLARE_PUBLIC(SearchRequest)

};

} // namespace CloudSearchDomain
} // namespace AWS

#endif
