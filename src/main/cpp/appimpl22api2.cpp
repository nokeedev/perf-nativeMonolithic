// GENERATED SOURCE FILE

#include "app_private.h"
#include "app.h"
#include "lib1api1.h"
#include "lib1api2.h"
#include "lib1api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int appimpl22api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl22api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl22api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl22api24(int a, int b) {
    return a + b;
}

int AppImpl22Api2::visited = 0;

/*
 * Here is a function.
 */
void AppImpl22Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit AppImpl22Api2" << std::endl;
        Lib1Api1 lib1api1;
        lib1api1.doSomething();
        Lib1Api2 lib1api2;
        lib1api2.doSomething();
        Lib1Api3 lib1api3;
        lib1api3.doSomething();
        AppImpl22Impl appimpl22impl;
        appimpl22impl.doSomething();
        AppImpl23Api1 appimpl23api1;
        appimpl23api1.doSomething();
        AppImpl23Api2 appimpl23api2;
        appimpl23api2.doSomething();
        AppImpl23Api3 appimpl23api3;
        appimpl23api3.doSomething();
        visited = 1;
    }
}

