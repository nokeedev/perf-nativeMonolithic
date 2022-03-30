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
int appimpl2impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl2impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl2impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl2impl4(int a, int b) {
    return a + b;
}

int AppImpl2Impl::visited = 0;

/*
 * Here is a function.
 */
void AppImpl2Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit AppImpl2Impl" << std::endl;
        Lib1Api1 lib1api1;
        lib1api1.doSomething();
        Lib1Api2 lib1api2;
        lib1api2.doSomething();
        Lib1Api3 lib1api3;
        lib1api3.doSomething();
        AppImpl2Core1 appimpl2core1;
        appimpl2core1.doSomething();
        AppImpl2Core2 appimpl2core2;
        appimpl2core2.doSomething();
        AppImpl3Api1 appimpl3api1;
        appimpl3api1.doSomething();
        AppImpl3Api2 appimpl3api2;
        appimpl3api2.doSomething();
        AppImpl3Api3 appimpl3api3;
        appimpl3api3.doSomething();
        visited = 1;
    }
}

