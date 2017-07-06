// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_MenuComponent__
#define __java_awt_MenuComponent__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      class MenuComponent;
      class AWTEvent;
      class Event;
      class Toolkit;
      namespace peer
      {
        class MenuComponentPeer;
      }
      class MenuContainer;
      class Font;
    }
  }
}

class java::awt::MenuComponent : public ::java::lang::Object
{
public:
  MenuComponent ();
  virtual ::java::awt::Font *getFont () { return font; }
  virtual void setFont (::java::awt::Font *);
  virtual ::java::lang::String *getName () { return name; }
  virtual void setName (::java::lang::String *);
  virtual ::java::awt::MenuContainer *getParent () { return parent; }
public: // actually package-private
  void setParent (::java::awt::MenuContainer *);
public:
  virtual ::java::awt::peer::MenuComponentPeer *getPeer () { return peer; }
public: // actually package-private
  void setPeer (::java::awt::peer::MenuComponentPeer *);
public:
  virtual void removeNotify ();
public: // actually package-private
  ::java::awt::Toolkit *getToolkit ();
public:  // actually protected
  ::java::lang::Object *getTreeLock () { return tree_lock; }
public: // actually package-private
  void setTreeLock (::java::lang::Object *);
public:
  virtual jboolean postEvent (::java::awt::Event *);
  void dispatchEvent (::java::awt::AWTEvent *);
public: // actually package-private
  virtual void dispatchEventImpl (::java::awt::AWTEvent *) { }
public:  // actually protected
  virtual void processEvent (::java::awt::AWTEvent *) { }
public:
  virtual ::java::lang::String *toString ();
public:  // actually protected
  virtual ::java::lang::String *paramString ();
private:
  static const jlong serialVersionUID = -4536902356223894379LL;
  ::java::awt::Font * __attribute__((aligned(__alignof__( ::java::lang::Object )))) font;
  ::java::lang::String *name;
public: // actually package-private
  ::java::awt::MenuContainer *parent;
  ::java::awt::peer::MenuComponentPeer *peer;
private:
  ::java::lang::Object *tree_lock;
  static ::java::awt::Toolkit *toolkit;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_awt_MenuComponent__ */
