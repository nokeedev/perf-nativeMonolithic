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
int appimpl13impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl13impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl13impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl13impl4(int a, int b) {
    return a + b;
}

int AppImpl13Impl::visited = 0;

/*
 * Here is a function.
 */
void AppImpl13Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit AppImpl13Impl" << std::endl;
        Lib1Api1 lib1api1;
        lib1api1.doSomething();
        Lib1Api2 lib1api2;
        lib1api2.doSomething();
        Lib1Api3 lib1api3;
        lib1api3.doSomething();
        AppImpl13Core1 appimpl13core1;
        appimpl13core1.doSomething();
        AppImpl13Core2 appimpl13core2;
        appimpl13core2.doSomething();
        AppImpl14Api1 appimpl14api1;
        appimpl14api1.doSomething();
        AppImpl14Api2 appimpl14api2;
        appimpl14api2.doSomething();
        AppImpl14Api3 appimpl14api3;
        appimpl14api3.doSomething();
        visited = 1;
    }
}

