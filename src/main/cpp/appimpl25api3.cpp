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
int appimpl25api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl25api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl25api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl25api34(int a, int b) {
    return a + b;
}

int AppImpl25Api3::visited = 0;

/*
 * Here is a function.
 */
void AppImpl25Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit AppImpl25Api3" << std::endl;
        Lib1Api1 lib1api1;
        lib1api1.doSomething();
        Lib1Api2 lib1api2;
        lib1api2.doSomething();
        Lib1Api3 lib1api3;
        lib1api3.doSomething();
        AppImpl25Impl appimpl25impl;
        appimpl25impl.doSomething();
        AppImpl26Api1 appimpl26api1;
        appimpl26api1.doSomething();
        AppImpl26Api2 appimpl26api2;
        appimpl26api2.doSomething();
        AppImpl26Api3 appimpl26api3;
        appimpl26api3.doSomething();
        visited = 1;
    }
}

