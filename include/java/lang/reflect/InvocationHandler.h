// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_lang_reflect_InvocationHandler__
#define __java_lang_reflect_InvocationHandler__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

class java::lang::reflect::InvocationHandler : public ::java::lang::Object
{
public:
  virtual ::java::lang::Object *invoke (::java::lang::Object *, ::java::lang::reflect::Method *, JArray< ::java::lang::Object *> *) = 0;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __java_lang_reflect_InvocationHandler__ */