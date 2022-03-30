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
int appimpl1impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl1impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl1impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl1impl4(int a, int b) {
    return a + b;
}

int AppImpl1Impl::visited = 0;

/*
 * Here is a function.
 */
void AppImpl1Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit AppImpl1Impl" << std::endl;
        Lib1Api1 lib1api1;
        lib1api1.doSomething();
        Lib1Api2 lib1api2;
        lib1api2.doSomething();
        Lib1Api3 lib1api3;
        lib1api3.doSomething();
        AppImpl1Core1 appimpl1core1;
        appimpl1core1.doSomething();
        AppImpl1Core2 appimpl1core2;
        appimpl1core2.doSomething();
        AppImpl2Api1 appimpl2api1;
        appimpl2api1.doSomething();
        AppImpl2Api2 appimpl2api2;
        appimpl2api2.doSomething();
        AppImpl2Api3 appimpl2api3;
        appimpl2api3.doSomething();
        visited = 1;
    }
}

