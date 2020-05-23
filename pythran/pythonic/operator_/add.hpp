#ifndef PYTHONIC_OPERATOR_ADD_HPP
#define PYTHONIC_OPERATOR_ADD_HPP

#include "pythonic/include/operator_/add.hpp"

#include "pythonic/utils/functor.hpp"
#include "pythonic/operator_/overloads.hpp"

PYTHONIC_NS_BEGIN

namespace operator_
{
  template <class A, class B>
  auto add(A const &a, B const &b) -> decltype(a + b)
  {
    return a + b;
  }

  DEFINE_ALL_OPERATOR_OVERLOADS_IMPL(
      add, +, (((b >= 0) ? (a <= std::numeric_limits<decltype(b)>::max() - b)
                         : (std::numeric_limits<decltype(b)>::min() - b <= a))))
}
PYTHONIC_NS_END

#endif
