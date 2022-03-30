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
int appimpl22impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl22impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl22impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl22impl4(int a, int b) {
    return a + b;
}

int AppImpl22Impl::visited = 0;

/*
 * Here is a function.
 */
void AppImpl22Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit AppImpl22Impl" << std::endl;
        Lib1Api1 lib1api1;
        lib1api1.doSomething();
        Lib1Api2 lib1api2;
        lib1api2.doSomething();
        Lib1Api3 lib1api3;
        lib1api3.doSomething();
        AppImpl22Core1 appimpl22core1;
        appimpl22core1.doSomething();
        AppImpl22Core2 appimpl22core2;
        appimpl22core2.doSomething();
        AppImpl23Api1 appimpl23api1;
        appimpl23api1.doSomething();
        AppImpl23Api2 appimpl23api2;
        appimpl23api2.doSomething();
        AppImpl23Api3 appimpl23api3;
        appimpl23api3.doSomething();
        visited = 1;
    }
}

