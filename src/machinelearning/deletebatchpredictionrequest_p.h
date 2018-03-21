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

#ifndef QTAWS_DELETEBATCHPREDICTIONREQUEST_P_H
#define QTAWS_DELETEBATCHPREDICTIONREQUEST_P_H

#include "machinelearning_p.h"
#include "deletebatchpredictionrequest.h"

namespace AWS {

namespace MachineLearning {

class DeleteBatchPredictionRequest;

class QTAWS_EXPORT DeleteBatchPredictionRequestPrivate : public MachineLearningPrivate {

public:
    DeleteBatchPredictionRequestPrivate(const MachineLearning::Action action,
                                   DeleteBatchPredictionRequest * const q);
    DeleteBatchPredictionRequestPrivate(const DeleteBatchPredictionRequestPrivate &other,
                                   DeleteBatchPredictionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteBatchPredictionRequest)

};

} // namespace MachineLearning
} // namespace AWS

#endif
