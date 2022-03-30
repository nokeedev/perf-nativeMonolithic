// GENERATED SOURCE FILE
#ifndef __LIB9API1__
#define __LIB9API1__

#ifndef EXPORT_FUNC
#ifdef _WIN32
#define EXPORT_FUNC __declspec(dllexport)
#else
#define EXPORT_FUNC
#endif
#endif

#include "lib10api1.h"

/*
 * Here is a type declaration.
 */
struct lib9api11 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib9api12 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib9api13 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib9api14 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
class Lib9Api1 {
  public:
    void EXPORT_FUNC doSomething();
    void doSomethingWith(Lib10Api1& p);
  private:
    static int visited;
};

#endif

