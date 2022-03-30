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
int appimpl27api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl27api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl27api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl27api34(int a, int b) {
    return a + b;
}

int AppImpl27Api3::visited = 0;

/*
 * Here is a function.
 */
void AppImpl27Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit AppImpl27Api3" << std::endl;
        Lib1Api1 lib1api1;
        lib1api1.doSomething();
        Lib1Api2 lib1api2;
        lib1api2.doSomething();
        Lib1Api3 lib1api3;
        lib1api3.doSomething();
        AppImpl27Impl appimpl27impl;
        appimpl27impl.doSomething();
        AppImpl28Api1 appimpl28api1;
        appimpl28api1.doSomething();
        AppImpl28Api2 appimpl28api2;
        appimpl28api2.doSomething();
        AppImpl28Api3 appimpl28api3;
        appimpl28api3.doSomething();
        visited = 1;
    }
}

