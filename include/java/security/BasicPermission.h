// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_security_BasicPermission__
#define __java_security_BasicPermission__

#pragma interface

#include <java/security/Permission.h>

extern "Java"
{
  namespace java
  {
    namespace security
    {
      class BasicPermission;
      class PermissionCollection;
      class Permission;
    }
  }
}

class java::security::BasicPermission : public ::java::security::Permission
{
public:
  BasicPermission (::java::lang::String *);
  BasicPermission (::java::lang::String *, ::java::lang::String *);
  virtual jboolean implies (::java::security::Permission *);
  virtual jboolean equals (::java::lang::Object *);
  virtual jint hashCode ();
  virtual ::java::lang::String *getActions ();
  virtual ::java::security::PermissionCollection *newPermissionCollection ();
private:
  static const jlong serialVersionUID = 6279438298436773498LL;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_security_BasicPermission__ */
