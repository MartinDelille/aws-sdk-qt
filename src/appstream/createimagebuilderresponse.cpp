/*
    Copyright 2013-2018 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "createimagebuilderresponse.h"
#include "createimagebuilderresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppStream {

/*!
 * \class QtAws::AppStream::CreateImageBuilderResponse
 * \brief The CreateImageBuilderResponse class provides an interace for AppStream CreateImageBuilder responses.
 *
 * \inmodule QtAwsAppStream
 *
 *  <fullname>Amazon AppStream 2.0</fullname>
 * 
 *  You can use Amazon AppStream 2.0 to stream desktop applications to any device running a web browser, without rewriting
 *
 * \sa AppStreamClient::createImageBuilder
 */

/*!
 * Constructs a CreateImageBuilderResponse object for \a reply to \a request, with parent \a parent.
 */
CreateImageBuilderResponse::CreateImageBuilderResponse(
        const CreateImageBuilderRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppStreamResponse(new CreateImageBuilderResponsePrivate(this), parent)
{
    setRequest(new CreateImageBuilderRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateImageBuilderRequest * CreateImageBuilderResponse::request() const
{
    Q_D(const CreateImageBuilderResponse);
    return static_cast<const CreateImageBuilderRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppStream CreateImageBuilder \a response.
 */
void CreateImageBuilderResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateImageBuilderResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppStream::CreateImageBuilderResponsePrivate
 * \brief The CreateImageBuilderResponsePrivate class provides private implementation for CreateImageBuilderResponse.
 * \internal
 *
 * \inmodule QtAwsAppStream
 */

/*!
 * Constructs a CreateImageBuilderResponsePrivate object with public implementation \a q.
 */
CreateImageBuilderResponsePrivate::CreateImageBuilderResponsePrivate(
    CreateImageBuilderResponse * const q) : AppStreamResponsePrivate(q)
{

}

/*!
 * Parses a AppStream CreateImageBuilder response element from \a xml.
 */
void CreateImageBuilderResponsePrivate::parseCreateImageBuilderResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateImageBuilderResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppStream
} // namespace QtAws
