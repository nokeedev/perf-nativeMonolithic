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
int appimpl8api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl8api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl8api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl8api34(int a, int b) {
    return a + b;
}

int AppImpl8Api3::visited = 0;

/*
 * Here is a function.
 */
void AppImpl8Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit AppImpl8Api3" << std::endl;
        Lib1Api1 lib1api1;
        lib1api1.doSomething();
        Lib1Api2 lib1api2;
        lib1api2.doSomething();
        Lib1Api3 lib1api3;
        lib1api3.doSomething();
        AppImpl8Impl appimpl8impl;
        appimpl8impl.doSomething();
        AppImpl9Api1 appimpl9api1;
        appimpl9api1.doSomething();
        AppImpl9Api2 appimpl9api2;
        appimpl9api2.doSomething();
        AppImpl9Api3 appimpl9api3;
        appimpl9api3.doSomething();
        visited = 1;
    }
}

