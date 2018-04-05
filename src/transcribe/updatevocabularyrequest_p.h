/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_UPDATEVOCABULARYREQUEST_P_H
#define QTAWS_UPDATEVOCABULARYREQUEST_P_H

#include "transcribeservicerequest_p.h"
#include "updatevocabularyrequest.h"

namespace QtAws {
namespace TranscribeService {

class UpdateVocabularyRequest;

class QTAWS_EXPORT UpdateVocabularyRequestPrivate : public TranscribeServiceRequestPrivate {

public:
    UpdateVocabularyRequestPrivate(const TranscribeServiceRequest::Action action,
                                   UpdateVocabularyRequest * const q);
    UpdateVocabularyRequestPrivate(const UpdateVocabularyRequestPrivate &other,
                                   UpdateVocabularyRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateVocabularyRequest)

};

} // namespace TranscribeService
} // namespace QtAws

#endif
