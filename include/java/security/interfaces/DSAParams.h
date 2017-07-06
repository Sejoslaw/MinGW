// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_security_interfaces_DSAParams__
#define __java_security_interfaces_DSAParams__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace java
  {
    namespace security
    {
      namespace interfaces
      {
        class DSAParams;
      }
    }
    namespace math
    {
      class BigInteger;
    }
  }
}

class java::security::interfaces::DSAParams : public ::java::lang::Object
{
public:
  virtual ::java::math::BigInteger *getG () = 0;
  virtual ::java::math::BigInteger *getP () = 0;
  virtual ::java::math::BigInteger *getQ () = 0;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __java_security_interfaces_DSAParams__ */