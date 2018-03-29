{% include "license.txt" %}
#ifndef QTAWS_{{ClassName|upper}}_P_H
#define QTAWS_{{ClassName|upper}}_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace {{NameSpaceName}} {

class {{ClassName}};

class QTAWS_EXPORT {{ClassName}}Private : public QtAws::Core::AwsAbstractResponsePrivate {
    Q_OBJECT

public:
    {# @todo data members go here #}

    {{ClassName}}Private({{ClassName}} * const q);

    {# @todo change parse type XML vs JSON #}
    void parse{{perationName}}Response(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC({{ClassName}})
    Q_DISABLE_COPY({{ClassName}}Private)

};

} // namespace {{NameSpaceName}}
} // namespace QtAws

#endif
