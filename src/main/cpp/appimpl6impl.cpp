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
int appimpl6impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl6impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl6impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl6impl4(int a, int b) {
    return a + b;
}

int AppImpl6Impl::visited = 0;

/*
 * Here is a function.
 */
void AppImpl6Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit AppImpl6Impl" << std::endl;
        Lib1Api1 lib1api1;
        lib1api1.doSomething();
        Lib1Api2 lib1api2;
        lib1api2.doSomething();
        Lib1Api3 lib1api3;
        lib1api3.doSomething();
        AppImpl6Core1 appimpl6core1;
        appimpl6core1.doSomething();
        AppImpl6Core2 appimpl6core2;
        appimpl6core2.doSomething();
        AppImpl7Api1 appimpl7api1;
        appimpl7api1.doSomething();
        AppImpl7Api2 appimpl7api2;
        appimpl7api2.doSomething();
        AppImpl7Api3 appimpl7api3;
        appimpl7api3.doSomething();
        visited = 1;
    }
}

