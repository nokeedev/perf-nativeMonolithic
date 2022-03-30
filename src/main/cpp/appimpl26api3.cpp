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
int appimpl26api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl26api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl26api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl26api34(int a, int b) {
    return a + b;
}

int AppImpl26Api3::visited = 0;

/*
 * Here is a function.
 */
void AppImpl26Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit AppImpl26Api3" << std::endl;
        Lib1Api1 lib1api1;
        lib1api1.doSomething();
        Lib1Api2 lib1api2;
        lib1api2.doSomething();
        Lib1Api3 lib1api3;
        lib1api3.doSomething();
        AppImpl26Impl appimpl26impl;
        appimpl26impl.doSomething();
        AppImpl27Api1 appimpl27api1;
        appimpl27api1.doSomething();
        AppImpl27Api2 appimpl27api2;
        appimpl27api2.doSomething();
        AppImpl27Api3 appimpl27api3;
        appimpl27api3.doSomething();
        visited = 1;
    }
}

