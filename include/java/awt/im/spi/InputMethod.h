// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_im_spi_InputMethod__
#define __java_awt_im_spi_InputMethod__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      class Rectangle;
      class AWTEvent;
      namespace im
      {
        namespace spi
        {
          class InputMethod;
          class InputMethodContext;
        }
      }
    }
  }
}

class java::awt::im::spi::InputMethod : public ::java::lang::Object
{
public:
  virtual void setInputMethodContext (::java::awt::im::spi::InputMethodContext *) = 0;
  virtual jboolean setLocale (::java::util::Locale *) = 0;
  virtual ::java::util::Locale *getLocale () = 0;
  virtual void setCharacterSubsets (JArray< ::java::lang::Character$Subset *> *) = 0;
  virtual void setCompositionEnabled (jboolean) = 0;
  virtual jboolean isCompositionEnabled () = 0;
  virtual void reconvert () = 0;
  virtual void dispatchEvent (::java::awt::AWTEvent *) = 0;
  virtual void notifyClientWindowChange (::java::awt::Rectangle *) = 0;
  virtual void activate () = 0;
  virtual void deactivate (jboolean) = 0;
  virtual void hideWindows () = 0;
  virtual void removeNotify () = 0;
  virtual void endComposition () = 0;
  virtual void dispose () = 0;
  virtual ::java::lang::Object *getControlObject () = 0;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __java_awt_im_spi_InputMethod__ */