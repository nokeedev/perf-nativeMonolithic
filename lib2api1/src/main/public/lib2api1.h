// GENERATED SOURCE FILE
#ifndef __LIB2API1__
#define __LIB2API1__

#ifndef EXPORT_FUNC
#ifdef _WIN32
#define EXPORT_FUNC __declspec(dllexport)
#else
#define EXPORT_FUNC
#endif
#endif

#include "lib3api1.h"

/*
 * Here is a type declaration.
 */
struct lib2api11 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib2api12 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib2api13 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib2api14 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
class Lib2Api1 {
  public:
    void EXPORT_FUNC doSomething();
    void doSomethingWith(Lib3Api1& p);
  private:
    static int visited;
};

#endif

