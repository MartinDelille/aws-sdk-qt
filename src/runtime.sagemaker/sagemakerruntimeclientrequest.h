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

#ifndef QTAWS_SAGEMAKERRUNTIMECLIENTREQUEST_H
#define QTAWS_SAGEMAKERRUNTIMECLIENTREQUEST_H

#include "core/awsabstractrequest.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace AWS {

namespace SageMakerRuntime {

class AwsAbstractClient;
class SageMakerRuntimeClientRequestPrivate;

class QTAWS_EXPORT SageMakerRuntimeClientRequest : public AwsAbstractRequest {

public:
    /// Actions supported by SageMakerRuntime.
    enum Action {
        // todo
    };
    Q_DECLARE_FLAGS(Actions, Action)

    SageMakerRuntimeClientRequest(const Action action);
    SageMakerRuntimeClientRequest(const SageMakerRuntimeClientRequest &other);
    SageMakerRuntimeClientRequest &operator=(const SageMakerRuntimeClientRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const SageMakerRuntimeClientRequest &other) const;


protected:
    /// @cond internal
    SageMakerRuntimeClientRequest(SageMakerRuntimeClientRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const;

private:
    Q_DECLARE_PRIVATE(SageMakerRuntimeClientRequest)

}

} // namespace SageMakerRuntime
} // namespace AWS

#endif