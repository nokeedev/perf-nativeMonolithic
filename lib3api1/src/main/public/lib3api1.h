// GENERATED SOURCE FILE
#ifndef __LIB3API1__
#define __LIB3API1__

#ifndef EXPORT_FUNC
#ifdef _WIN32
#define EXPORT_FUNC __declspec(dllexport)
#else
#define EXPORT_FUNC
#endif
#endif

#include "lib4api1.h"

/*
 * Here is a type declaration.
 */
struct lib3api11 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib3api12 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib3api13 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
struct lib3api14 {
    int x;
    int y;
};

/*
 * Here is a type declaration.
 */
class Lib3Api1 {
  public:
    void EXPORT_FUNC doSomething();
    void doSomethingWith(Lib4Api1& p);
  private:
    static int visited;
};

#endif

