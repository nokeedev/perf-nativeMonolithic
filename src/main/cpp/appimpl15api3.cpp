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
int appimpl15api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl15api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl15api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl15api34(int a, int b) {
    return a + b;
}

int AppImpl15Api3::visited = 0;

/*
 * Here is a function.
 */
void AppImpl15Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit AppImpl15Api3" << std::endl;
        Lib1Api1 lib1api1;
        lib1api1.doSomething();
        Lib1Api2 lib1api2;
        lib1api2.doSomething();
        Lib1Api3 lib1api3;
        lib1api3.doSomething();
        AppImpl15Impl appimpl15impl;
        appimpl15impl.doSomething();
        AppImpl16Api1 appimpl16api1;
        appimpl16api1.doSomething();
        AppImpl16Api2 appimpl16api2;
        appimpl16api2.doSomething();
        AppImpl16Api3 appimpl16api3;
        appimpl16api3.doSomething();
        visited = 1;
    }
}

