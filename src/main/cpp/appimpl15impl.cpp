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
int appimpl15impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl15impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl15impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl15impl4(int a, int b) {
    return a + b;
}

int AppImpl15Impl::visited = 0;

/*
 * Here is a function.
 */
void AppImpl15Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit AppImpl15Impl" << std::endl;
        Lib1Api1 lib1api1;
        lib1api1.doSomething();
        Lib1Api2 lib1api2;
        lib1api2.doSomething();
        Lib1Api3 lib1api3;
        lib1api3.doSomething();
        AppImpl15Core1 appimpl15core1;
        appimpl15core1.doSomething();
        AppImpl15Core2 appimpl15core2;
        appimpl15core2.doSomething();
        AppImpl16Api1 appimpl16api1;
        appimpl16api1.doSomething();
        AppImpl16Api2 appimpl16api2;
        appimpl16api2.doSomething();
        AppImpl16Api3 appimpl16api3;
        appimpl16api3.doSomething();
        visited = 1;
    }
}

