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
int appimpl5impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl5impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl5impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl5impl4(int a, int b) {
    return a + b;
}

int AppImpl5Impl::visited = 0;

/*
 * Here is a function.
 */
void AppImpl5Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit AppImpl5Impl" << std::endl;
        Lib1Api1 lib1api1;
        lib1api1.doSomething();
        Lib1Api2 lib1api2;
        lib1api2.doSomething();
        Lib1Api3 lib1api3;
        lib1api3.doSomething();
        AppImpl5Core1 appimpl5core1;
        appimpl5core1.doSomething();
        AppImpl5Core2 appimpl5core2;
        appimpl5core2.doSomething();
        AppImpl6Api1 appimpl6api1;
        appimpl6api1.doSomething();
        AppImpl6Api2 appimpl6api2;
        appimpl6api2.doSomething();
        AppImpl6Api3 appimpl6api3;
        appimpl6api3.doSomething();
        visited = 1;
    }
}

