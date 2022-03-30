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
int appimpl30impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl30impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl30impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl30impl4(int a, int b) {
    return a + b;
}

int AppImpl30Impl::visited = 0;

/*
 * Here is a function.
 */
void AppImpl30Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit AppImpl30Impl" << std::endl;
        Lib1Api1 lib1api1;
        lib1api1.doSomething();
        Lib1Api2 lib1api2;
        lib1api2.doSomething();
        Lib1Api3 lib1api3;
        lib1api3.doSomething();
        AppImpl30Core1 appimpl30core1;
        appimpl30core1.doSomething();
        AppImpl30Core2 appimpl30core2;
        appimpl30core2.doSomething();
        AppImpl31Api1 appimpl31api1;
        appimpl31api1.doSomething();
        AppImpl31Api2 appimpl31api2;
        appimpl31api2.doSomething();
        AppImpl31Api3 appimpl31api3;
        appimpl31api3.doSomething();
        visited = 1;
    }
}

