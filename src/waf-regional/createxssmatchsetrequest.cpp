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

#include "createxssmatchsetrequest.h"
#include "createxssmatchsetrequest_p.h"
#include "createxssmatchsetresponse.h"
#include "wafregionalrequest_p.h"

namespace AWS {
namespace WAFRegional {

/**
 * @class  CreateXssMatchSetRequest
 *
 * @brief  Implements WAFRegional CreateXssMatchSet requests.
 *
 * @see    WAFRegionalClient::createXssMatchSet
 */

/**
 * @brief  Constructs a new CreateXssMatchSetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateXssMatchSetRequest::CreateXssMatchSetRequest(const CreateXssMatchSetRequest &other)
    : WAFRegionalRequest(new CreateXssMatchSetRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateXssMatchSetRequest object.
 */
CreateXssMatchSetRequest::CreateXssMatchSetRequest()
    : WAFRegionalRequest(new CreateXssMatchSetRequestPrivate(WAFRegionalRequest::CreateXssMatchSetAction, this))
{

}

bool CreateXssMatchSetRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateXssMatchSetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateXssMatchSetResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  WAFRegionalClient::send
 */
AwsAbstractResponse * CreateXssMatchSetRequest::response(QNetworkReply * const reply) const
{
    return new CreateXssMatchSetResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateXssMatchSetRequestPrivate
 *
 * @brief  Private implementation for CreateXssMatchSetRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateXssMatchSetRequestPrivate object.
 *
 * @param  action  WAFRegional action being performed.
 * @param  q       Pointer to this object's public CreateXssMatchSetRequest instance.
 */
CreateXssMatchSetRequestPrivate::CreateXssMatchSetRequestPrivate(
    const WAFRegionalRequest::Action action, CreateXssMatchSetRequest * const q)
    : CreateXssMatchSetPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateXssMatchSetRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateXssMatchSetRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateXssMatchSetRequest instance.
 */
CreateXssMatchSetRequestPrivate::CreateXssMatchSetRequestPrivate(
    const CreateXssMatchSetRequestPrivate &other, CreateXssMatchSetRequest * const q)
    : CreateXssMatchSetPrivate(other, q)
{

}

} // namespace WAFRegional
} // namespace AWS