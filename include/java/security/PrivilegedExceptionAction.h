// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_security_PrivilegedExceptionAction__
#define __java_security_PrivilegedExceptionAction__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace java
  {
    namespace security
    {
      class PrivilegedExceptionAction;
    }
  }
}

class java::security::PrivilegedExceptionAction : public ::java::lang::Object
{
public:
  virtual ::java::lang::Object *run () = 0;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __java_security_PrivilegedExceptionAction__ */
