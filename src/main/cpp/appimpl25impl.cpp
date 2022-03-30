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
int appimpl25impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl25impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl25impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl25impl4(int a, int b) {
    return a + b;
}

int AppImpl25Impl::visited = 0;

/*
 * Here is a function.
 */
void AppImpl25Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit AppImpl25Impl" << std::endl;
        Lib1Api1 lib1api1;
        lib1api1.doSomething();
        Lib1Api2 lib1api2;
        lib1api2.doSomething();
        Lib1Api3 lib1api3;
        lib1api3.doSomething();
        AppImpl25Core1 appimpl25core1;
        appimpl25core1.doSomething();
        AppImpl25Core2 appimpl25core2;
        appimpl25core2.doSomething();
        AppImpl26Api1 appimpl26api1;
        appimpl26api1.doSomething();
        AppImpl26Api2 appimpl26api2;
        appimpl26api2.doSomething();
        AppImpl26Api3 appimpl26api3;
        appimpl26api3.doSomething();
        visited = 1;
    }
}

