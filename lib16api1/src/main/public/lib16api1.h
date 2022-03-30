// GENERATED SOURCE FILE
#ifndef __LIB16API1__
#define __LIB16API1__

#ifndef EXPORT_FUNC
#ifdef _WIN32
#define EXPORT_FUNC __declspec(dllexport)
#else
#define EXPORT_FUNC
#endif
#endif

#include "lib17api1.h"

/*
 * Here is a type declaration.
 */
struct lib16api11 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib16api12 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib16api13 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib16api14 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
class Lib16Api1 {
  public:
    void EXPORT_FUNC doSomething();
    void doSomethingWith(Lib17Api1& p);
  private:
    static int visited;
};

#endif

