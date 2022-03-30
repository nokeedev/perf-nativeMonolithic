// GENERATED SOURCE FILE
#ifndef __LIB5API1__
#define __LIB5API1__

#ifndef EXPORT_FUNC
#ifdef _WIN32
#define EXPORT_FUNC __declspec(dllexport)
#else
#define EXPORT_FUNC
#endif
#endif

#include "lib6api1.h"

/*
 * Here is a type declaration.
 */
struct lib5api11 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib5api12 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib5api13 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib5api14 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
class Lib5Api1 {
  public:
    void EXPORT_FUNC doSomething();
    void doSomethingWith(Lib6Api1& p);
  private:
    static int visited;
};

#endif

