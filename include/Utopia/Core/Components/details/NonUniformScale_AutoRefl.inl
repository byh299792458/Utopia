// This file is generated by Ubpa::USRefl::AutoRefl

#pragma once

#include <USRefl/USRefl.h>

template<>
struct Ubpa::USRefl::TypeInfo<Ubpa::Utopia::NonUniformScale> :
    TypeInfoBase<Ubpa::Utopia::NonUniformScale>
{
#ifdef UBPA_USREFL_NOT_USE_NAMEOF
    static constexpr char name[30] = "Ubpa::Utopia::NonUniformScale";
#endif
    static constexpr AttrList attrs = {};
    static constexpr FieldList fields = {
        Field {TSTR("value"), &Type::value, AttrList {
            Attr {TSTR(UMeta::initializer), []()->scalef3{ return { 1.f }; }},
        }},
    };
};

