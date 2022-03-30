// GENERATED SOURCE FILE
#ifndef __LIB7API1__
#define __LIB7API1__

#ifndef EXPORT_FUNC
#ifdef _WIN32
#define EXPORT_FUNC __declspec(dllexport)
#else
#define EXPORT_FUNC
#endif
#endif

#include "lib8api1.h"

/*
 * Here is a type declaration.
 */
struct lib7api11 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib7api12 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib7api13 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib7api14 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
class Lib7Api1 {
  public:
    void EXPORT_FUNC doSomething();
    void doSomethingWith(Lib8Api1& p);
  private:
    static int visited;
};

#endif

