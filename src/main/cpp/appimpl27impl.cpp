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
int appimpl27impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl27impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl27impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl27impl4(int a, int b) {
    return a + b;
}

int AppImpl27Impl::visited = 0;

/*
 * Here is a function.
 */
void AppImpl27Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit AppImpl27Impl" << std::endl;
        Lib1Api1 lib1api1;
        lib1api1.doSomething();
        Lib1Api2 lib1api2;
        lib1api2.doSomething();
        Lib1Api3 lib1api3;
        lib1api3.doSomething();
        AppImpl27Core1 appimpl27core1;
        appimpl27core1.doSomething();
        AppImpl27Core2 appimpl27core2;
        appimpl27core2.doSomething();
        AppImpl28Api1 appimpl28api1;
        appimpl28api1.doSomething();
        AppImpl28Api2 appimpl28api2;
        appimpl28api2.doSomething();
        AppImpl28Api3 appimpl28api3;
        appimpl28api3.doSomething();
        visited = 1;
    }
}

