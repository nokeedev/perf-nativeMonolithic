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
int appimpl14api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl14api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl14api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl14api34(int a, int b) {
    return a + b;
}

int AppImpl14Api3::visited = 0;

/*
 * Here is a function.
 */
void AppImpl14Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit AppImpl14Api3" << std::endl;
        Lib1Api1 lib1api1;
        lib1api1.doSomething();
        Lib1Api2 lib1api2;
        lib1api2.doSomething();
        Lib1Api3 lib1api3;
        lib1api3.doSomething();
        AppImpl14Impl appimpl14impl;
        appimpl14impl.doSomething();
        AppImpl15Api1 appimpl15api1;
        appimpl15api1.doSomething();
        AppImpl15Api2 appimpl15api2;
        appimpl15api2.doSomething();
        AppImpl15Api3 appimpl15api3;
        appimpl15api3.doSomething();
        visited = 1;
    }
}

