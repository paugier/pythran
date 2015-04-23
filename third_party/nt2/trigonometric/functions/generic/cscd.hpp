//==============================================================================
//         Copyright 2003 - 2011 LASMEA UMR 6602 CNRS/Univ. Clermont II
//         Copyright 2009 - 2011 LRI    UMR 8623 CNRS/Univ Paris Sud XI
//
//          Distributed under the Boost Software License, Version 1.0.
//                 See accompanying file LICENSE.txt or copy at
//                     http://www.boost.org/LICENSE_1_0.txt
//==============================================================================
#ifndef NT2_TRIGONOMETRIC_FUNCTIONS_GENERIC_CSCD_HPP_INCLUDED
#define NT2_TRIGONOMETRIC_FUNCTIONS_GENERIC_CSCD_HPP_INCLUDED
#include <nt2/trigonometric/functions/cscd.hpp>
#include <nt2/include/functions/simd/cscpi.hpp>
#include <nt2/include/functions/simd/multiplies.hpp>
#include <nt2/include/constants/oneo_180.hpp>

namespace nt2 { namespace ext
{
  NT2_FUNCTOR_IMPLEMENTATION( nt2::tag::cscd_, tag::cpu_
                            , (A0)
                            , (generic_< floating_<A0> >)
                            )
  {
    typedef A0 result_type;
    NT2_FUNCTOR_CALL(1)
    {
      return nt2::cscpi(nt2::Oneo_180<result_type>()*a0);
    }
  };
} }


#endif