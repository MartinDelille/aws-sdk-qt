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

#ifndef QTAWS_CREATEKEYSANDCERTIFICATERESPONSE_H
#define QTAWS_CREATEKEYSANDCERTIFICATERESPONSE_H

#include "iotresponse.h"
#include "createkeysandcertificaterequest.h"

namespace AWS {

namespace IoT {

class CreateKeysAndCertificateResponsePrivate;

class QTAWS_EXPORT CreateKeysAndCertificateResponse : public IoTResponse {
    Q_OBJECT

public:
    CreateKeysAndCertificateResponse(const CreateKeysAndCertificateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateKeysAndCertificateRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(CreateKeysAndCertificateResponse)
    Q_DISABLE_COPY(CreateKeysAndCertificateResponse)

};

} // namespace IoT
} // namespace AWS

#endif