
//          Copyright John McFarlane 2018.
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file ../LICENSE_1_0.txt or copy at
//          http://www.boost.org/LICENSE_1_0.txt)

#if !defined(CNL_IMPL_INTEGER_FROM_REP_H)
#define CNL_IMPL_INTEGER_FROM_REP_H

#include "type.h"
#include "../num_traits/from_rep.h"

/// compositional numeric library
namespace cnl {
    template<class IntegerRep>
    struct from_rep<_impl::integer<IntegerRep>> {
        template<typename Rep>
        constexpr auto operator()(Rep const& rep) const
        -> _impl::integer<Rep>
        {
            return rep;
        }
    };
}

#endif  // CNL_IMPL_INTEGER_FROM_REP_H
