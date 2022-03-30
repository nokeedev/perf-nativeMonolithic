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
int appimpl7api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl7api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl7api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl7api24(int a, int b) {
    return a + b;
}

int AppImpl7Api2::visited = 0;

/*
 * Here is a function.
 */
void AppImpl7Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit AppImpl7Api2" << std::endl;
        Lib1Api1 lib1api1;
        lib1api1.doSomething();
        Lib1Api2 lib1api2;
        lib1api2.doSomething();
        Lib1Api3 lib1api3;
        lib1api3.doSomething();
        AppImpl7Impl appimpl7impl;
        appimpl7impl.doSomething();
        AppImpl8Api1 appimpl8api1;
        appimpl8api1.doSomething();
        AppImpl8Api2 appimpl8api2;
        appimpl8api2.doSomething();
        AppImpl8Api3 appimpl8api3;
        appimpl8api3.doSomething();
        visited = 1;
    }
}

