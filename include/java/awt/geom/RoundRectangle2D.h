// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_geom_RoundRectangle2D__
#define __java_awt_geom_RoundRectangle2D__

#pragma interface

#include <java/awt/geom/RectangularShape.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      namespace geom
      {
        class RoundRectangle2D;
        class PathIterator;
        class AffineTransform;
      }
    }
  }
}

class java::awt::geom::RoundRectangle2D : public ::java::awt::geom::RectangularShape
{
public:
  virtual jdouble getArcHeight () = 0;
  virtual jdouble getArcWidth () = 0;
  virtual void setRoundRect (jdouble, jdouble, jdouble, jdouble, jdouble, jdouble) = 0;
public:  // actually protected
  RoundRectangle2D ();
public:
  virtual jboolean contains (jdouble, jdouble);
  virtual jboolean contains (jdouble, jdouble, jdouble, jdouble);
  virtual ::java::awt::geom::PathIterator *getPathIterator (::java::awt::geom::AffineTransform *);
  virtual jboolean intersects (jdouble, jdouble, jdouble, jdouble);
  virtual void setFrame (jdouble, jdouble, jdouble, jdouble);
  virtual void setRoundRect (::java::awt::geom::RoundRectangle2D *);

  friend class java_awt_geom_RoundRectangle2D$Float;
  friend class java_awt_geom_RoundRectangle2D$Double;
  friend class java_awt_geom_RoundRectangle2D$1;

  static ::java::lang::Class class$;
};

#endif /* __java_awt_geom_RoundRectangle2D__ */
