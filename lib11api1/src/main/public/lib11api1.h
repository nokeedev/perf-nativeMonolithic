// GENERATED SOURCE FILE
#ifndef __LIB11API1__
#define __LIB11API1__

#ifndef EXPORT_FUNC
#ifdef _WIN32
#define EXPORT_FUNC __declspec(dllexport)
#else
#define EXPORT_FUNC
#endif
#endif

#include "lib12api1.h"

/*
 * Here is a type declaration.
 */
struct lib11api11 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib11api12 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib11api13 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib11api14 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
class Lib11Api1 {
  public:
    void EXPORT_FUNC doSomething();
    void doSomethingWith(Lib12Api1& p);
  private:
    static int visited;
};

#endif

