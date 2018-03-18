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

#ifndef QTAWS_BUDGETSCLIENT_H
#define QTAWS_BUDGETSCLIENT_H

#include <QObject>

class QNetworkReply;

namespace AWS {

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace Budgets {

class BudgetsClientPrivate;

class QTAWS_EXPORT BudgetsClient : public AwsAbstractClient {
    Q_OBJECT

public:
    BudgetsClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    BudgetsClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateBudgetResponse * createBudget(const CreateBudgetRequest &request);
    CreateNotificationResponse * createNotification(const CreateNotificationRequest &request);
    CreateSubscriberResponse * createSubscriber(const CreateSubscriberRequest &request);
    DeleteBudgetResponse * deleteBudget(const DeleteBudgetRequest &request);
    DeleteNotificationResponse * deleteNotification(const DeleteNotificationRequest &request);
    DeleteSubscriberResponse * deleteSubscriber(const DeleteSubscriberRequest &request);
    DescribeBudgetResponse * describeBudget(const DescribeBudgetRequest &request);
    DescribeBudgetsResponse * describeBudgets(const DescribeBudgetsRequest &request);
    DescribeNotificationsForBudgetResponse * describeNotificationsForBudget(const DescribeNotificationsForBudgetRequest &request);
    DescribeSubscribersForNotificationResponse * describeSubscribersForNotification(const DescribeSubscribersForNotificationRequest &request);
    UpdateBudgetResponse * updateBudget(const UpdateBudgetRequest &request);
    UpdateNotificationResponse * updateNotification(const UpdateNotificationRequest &request);
    UpdateSubscriberResponse * updateSubscriber(const UpdateSubscriberRequest &request);

private:
    Q_DECLARE_PRIVATE(BudgetsClient)
    Q_DISABLE_COPY(BudgetsClient)

};

} // namespace Budgets
} // namespace AWS

#endif