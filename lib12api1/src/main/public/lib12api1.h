// GENERATED SOURCE FILE
#ifndef __LIB12API1__
#define __LIB12API1__

#ifndef EXPORT_FUNC
#ifdef _WIN32
#define EXPORT_FUNC __declspec(dllexport)
#else
#define EXPORT_FUNC
#endif
#endif

#include "lib13api1.h"

/*
 * Here is a type declaration.
 */
struct lib12api11 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib12api12 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib12api13 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib12api14 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
class Lib12Api1 {
  public:
    void EXPORT_FUNC doSomething();
    void doSomethingWith(Lib13Api1& p);
  private:
    static int visited;
};

#endif

