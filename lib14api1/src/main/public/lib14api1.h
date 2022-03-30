// GENERATED SOURCE FILE
#ifndef __LIB14API1__
#define __LIB14API1__

#ifndef EXPORT_FUNC
#ifdef _WIN32
#define EXPORT_FUNC __declspec(dllexport)
#else
#define EXPORT_FUNC
#endif
#endif

#include "lib15api1.h"

/*
 * Here is a type declaration.
 */
struct lib14api11 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib14api12 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib14api13 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib14api14 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
class Lib14Api1 {
  public:
    void EXPORT_FUNC doSomething();
    void doSomethingWith(Lib15Api1& p);
  private:
    static int visited;
};

#endif

