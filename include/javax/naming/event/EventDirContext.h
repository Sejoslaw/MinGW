// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_naming_event_EventDirContext__
#define __javax_naming_event_EventDirContext__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace javax
  {
    namespace naming
    {
      namespace event
      {
        class EventDirContext;
        class NamingListener;
      }
      namespace directory
      {
        class SearchControls;
      }
      class Name;
    }
  }
}

class javax::naming::event::EventDirContext : public ::java::lang::Object
{
public:
  virtual void addNamingListener (::javax::naming::Name *, ::java::lang::String *, ::javax::naming::directory::SearchControls *, ::javax::naming::event::NamingListener *) = 0;
  virtual void addNamingListener (::java::lang::String *, ::java::lang::String *, ::javax::naming::directory::SearchControls *, ::javax::naming::event::NamingListener *) = 0;
  virtual void addNamingListener (::javax::naming::Name *, ::java::lang::String *, JArray< ::java::lang::Object *> *, ::javax::naming::directory::SearchControls *, ::javax::naming::event::NamingListener *) = 0;
  virtual void addNamingListener (::java::lang::String *, ::java::lang::String *, JArray< ::java::lang::Object *> *, ::javax::naming::directory::SearchControls *, ::javax::naming::event::NamingListener *) = 0;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __javax_naming_event_EventDirContext__ */
