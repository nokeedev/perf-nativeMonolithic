// GENERATED SOURCE FILE
#ifndef __LIB6API1__
#define __LIB6API1__

#ifndef EXPORT_FUNC
#ifdef _WIN32
#define EXPORT_FUNC __declspec(dllexport)
#else
#define EXPORT_FUNC
#endif
#endif

#include "lib7api1.h"

/*
 * Here is a type declaration.
 */
struct lib6api11 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib6api12 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib6api13 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib6api14 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
class Lib6Api1 {
  public:
    void EXPORT_FUNC doSomething();
    void doSomethingWith(Lib7Api1& p);
  private:
    static int visited;
};

#endif

