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
int appimpl28api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl28api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl28api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl28api34(int a, int b) {
    return a + b;
}

int AppImpl28Api3::visited = 0;

/*
 * Here is a function.
 */
void AppImpl28Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit AppImpl28Api3" << std::endl;
        Lib1Api1 lib1api1;
        lib1api1.doSomething();
        Lib1Api2 lib1api2;
        lib1api2.doSomething();
        Lib1Api3 lib1api3;
        lib1api3.doSomething();
        AppImpl28Impl appimpl28impl;
        appimpl28impl.doSomething();
        AppImpl29Api1 appimpl29api1;
        appimpl29api1.doSomething();
        AppImpl29Api2 appimpl29api2;
        appimpl29api2.doSomething();
        AppImpl29Api3 appimpl29api3;
        appimpl29api3.doSomething();
        visited = 1;
    }
}

