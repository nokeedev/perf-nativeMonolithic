// GENERATED SOURCE FILE
#ifndef __LIB13API1__
#define __LIB13API1__

#ifndef EXPORT_FUNC
#ifdef _WIN32
#define EXPORT_FUNC __declspec(dllexport)
#else
#define EXPORT_FUNC
#endif
#endif

#include "lib14api1.h"

/*
 * Here is a type declaration.
 */
struct lib13api11 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib13api12 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib13api13 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib13api14 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
class Lib13Api1 {
  public:
    void EXPORT_FUNC doSomething();
    void doSomethingWith(Lib14Api1& p);
  private:
    static int visited;
};

#endif

