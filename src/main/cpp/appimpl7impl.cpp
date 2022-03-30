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
int appimpl7impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl7impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl7impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl7impl4(int a, int b) {
    return a + b;
}

int AppImpl7Impl::visited = 0;

/*
 * Here is a function.
 */
void AppImpl7Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit AppImpl7Impl" << std::endl;
        Lib1Api1 lib1api1;
        lib1api1.doSomething();
        Lib1Api2 lib1api2;
        lib1api2.doSomething();
        Lib1Api3 lib1api3;
        lib1api3.doSomething();
        AppImpl7Core1 appimpl7core1;
        appimpl7core1.doSomething();
        AppImpl7Core2 appimpl7core2;
        appimpl7core2.doSomething();
        AppImpl8Api1 appimpl8api1;
        appimpl8api1.doSomething();
        AppImpl8Api2 appimpl8api2;
        appimpl8api2.doSomething();
        AppImpl8Api3 appimpl8api3;
        appimpl8api3.doSomething();
        visited = 1;
    }
}

