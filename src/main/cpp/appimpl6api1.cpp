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
int appimpl6api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl6api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl6api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl6api14(int a, int b) {
    return a + b;
}

int AppImpl6Api1::visited = 0;

/*
 * Here is a function.
 */
void AppImpl6Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit AppImpl6Api1" << std::endl;
        Lib1Api1 lib1api1;
        lib1api1.doSomething();
        Lib1Api2 lib1api2;
        lib1api2.doSomething();
        Lib1Api3 lib1api3;
        lib1api3.doSomething();
        AppImpl7Api1 appimpl7api1;
        appimpl7api1.doSomething();
        AppImpl6Impl appimpl6impl;
        appimpl6impl.doSomething();
        AppImpl7Api2 appimpl7api2;
        appimpl7api2.doSomething();
        AppImpl7Api3 appimpl7api3;
        appimpl7api3.doSomething();
        visited = 1;
    }
}

