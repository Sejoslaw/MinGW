// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_event_HyperlinkEvent__
#define __javax_swing_event_HyperlinkEvent__

#pragma interface

#include <java/util/EventObject.h>

extern "Java"
{
  namespace java
  {
    namespace net
    {
      class URL;
    }
  }
  namespace javax
  {
    namespace swing
    {
      namespace text
      {
        class Element;
      }
      namespace event
      {
        class HyperlinkEvent;
        class HyperlinkEvent$EventType;
      }
    }
  }
}

class javax::swing::event::HyperlinkEvent : public ::java::util::EventObject
{
public:
  HyperlinkEvent (::java::lang::Object *, ::javax::swing::event::HyperlinkEvent$EventType *, ::java::net::URL *);
  HyperlinkEvent (::java::lang::Object *, ::javax::swing::event::HyperlinkEvent$EventType *, ::java::net::URL *, ::java::lang::String *);
  HyperlinkEvent (::java::lang::Object *, ::javax::swing::event::HyperlinkEvent$EventType *, ::java::net::URL *, ::java::lang::String *, ::javax::swing::text::Element *);
  virtual ::javax::swing::text::Element *getSourceElement () { return element; }
  virtual ::java::net::URL *getURL () { return url; }
  virtual ::javax::swing::event::HyperlinkEvent$EventType *getEventType () { return type; }
  virtual ::java::lang::String *getDescription () { return description; }
private:
  static const jlong serialVersionUID = -2054640811732867012LL;
  ::javax::swing::event::HyperlinkEvent$EventType * __attribute__((aligned(__alignof__( ::java::util::EventObject )))) type;
  ::java::net::URL *url;
  ::java::lang::String *description;
  ::javax::swing::text::Element *element;

  friend class javax_swing_event_HyperlinkEvent$EventType;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_swing_event_HyperlinkEvent__ */