#pragma once

namespace summator {
  //! An advanced class
  //!
  //! Usage:
  //! \code{.cpp}
  //! auto a = AdvancedClass();
  //! auto b = a(10.10, 11.11, 12.12);
  //! \endcode
  class AdvancedClass {
  public:
    
    //! Computes the product of three numbers
    //!
    //! @param a first operand
    //! @param b second operand
    //! @param c third operand
    //!
    //! @return \f$a*b*c\f$
    double operator()(double a, double b, double c) {
      return a*b*c;
    }
  };
}
    
