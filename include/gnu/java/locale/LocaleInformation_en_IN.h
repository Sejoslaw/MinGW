// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_locale_LocaleInformation_en_IN__
#define __gnu_java_locale_LocaleInformation_en_IN__

#pragma interface

#include <java/util/ListResourceBundle.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace locale
      {
        class LocaleInformation_en_IN;
      }
    }
  }
}

class gnu::java::locale::LocaleInformation_en_IN : public ::java::util::ListResourceBundle
{
public:
  virtual JArray<JArray< ::java::lang::Object *> *> *getContents ();
  LocaleInformation_en_IN ();
public: // actually package-private
  static ::java::lang::String *decimalSeparator;
  static ::java::lang::String *groupingSeparator;
  static ::java::lang::String *numberFormat;
  static ::java::lang::String *percentFormat;
  static JArray< ::java::lang::String *> *weekdays;
  static JArray< ::java::lang::String *> *shortWeekdays;
  static JArray< ::java::lang::String *> *shortMonths;
  static JArray< ::java::lang::String *> *months;
  static JArray< ::java::lang::String *> *ampms;
  static ::java::lang::String *shortDateFormat;
  static ::java::lang::String *defaultTimeFormat;
  static ::java::lang::String *currencySymbol;
  static ::java::lang::String *intlCurrencySymbol;
  static ::java::lang::String *currencyFormat;
private:
  static JArray<JArray< ::java::lang::Object *> *> *contents;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_java_locale_LocaleInformation_en_IN__ */
