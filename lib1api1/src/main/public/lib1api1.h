// GENERATED SOURCE FILE
#ifndef __LIB1API1__
#define __LIB1API1__

#ifndef EXPORT_FUNC
#ifdef _WIN32
#define EXPORT_FUNC __declspec(dllexport)
#else
#define EXPORT_FUNC
#endif
#endif

#include "lib2api1.h"

/*
 * Here is a type declaration.
 */
struct lib1api11 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib1api12 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib1api13 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib1api14 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
class Lib1Api1 {
  public:
    void EXPORT_FUNC doSomething();
    void doSomethingWith(Lib2Api1& p);
  private:
    static int visited;
};

#endif

