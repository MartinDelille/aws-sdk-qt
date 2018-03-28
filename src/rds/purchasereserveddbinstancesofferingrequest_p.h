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

#ifndef QTAWS_PURCHASERESERVEDDBINSTANCESOFFERINGREQUEST_P_H
#define QTAWS_PURCHASERESERVEDDBINSTANCESOFFERINGREQUEST_P_H

#include "rds_p.h"
#include "purchasereserveddbinstancesofferingrequest.h"

namespace AWS {

namespace RDS {

class PurchaseReservedDBInstancesOfferingRequest;

class QTAWS_EXPORT PurchaseReservedDBInstancesOfferingRequestPrivate : public RDSPrivate {

public:
    PurchaseReservedDBInstancesOfferingRequestPrivate(const RDS::Action action,
                                   PurchaseReservedDBInstancesOfferingRequest * const q);
    PurchaseReservedDBInstancesOfferingRequestPrivate(const PurchaseReservedDBInstancesOfferingRequestPrivate &other,
                                   PurchaseReservedDBInstancesOfferingRequest * const q);

private:
    Q_DECLARE_PUBLIC(PurchaseReservedDBInstancesOfferingRequest)

};

} // namespace RDS
} // namespace AWS

#endif