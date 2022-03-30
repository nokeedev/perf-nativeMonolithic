// GENERATED SOURCE FILE
#ifndef __LIB15API1__
#define __LIB15API1__

#ifndef EXPORT_FUNC
#ifdef _WIN32
#define EXPORT_FUNC __declspec(dllexport)
#else
#define EXPORT_FUNC
#endif
#endif

#include "lib16api1.h"

/*
 * Here is a type declaration.
 */
struct lib15api11 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib15api12 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib15api13 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib15api14 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
class Lib15Api1 {
  public:
    void EXPORT_FUNC doSomething();
    void doSomethingWith(Lib16Api1& p);
  private:
    static int visited;
};

#endif

