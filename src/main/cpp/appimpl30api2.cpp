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
int appimpl30api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl30api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl30api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl30api24(int a, int b) {
    return a + b;
}

int AppImpl30Api2::visited = 0;

/*
 * Here is a function.
 */
void AppImpl30Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit AppImpl30Api2" << std::endl;
        Lib1Api1 lib1api1;
        lib1api1.doSomething();
        Lib1Api2 lib1api2;
        lib1api2.doSomething();
        Lib1Api3 lib1api3;
        lib1api3.doSomething();
        AppImpl30Impl appimpl30impl;
        appimpl30impl.doSomething();
        AppImpl31Api1 appimpl31api1;
        appimpl31api1.doSomething();
        AppImpl31Api2 appimpl31api2;
        appimpl31api2.doSomething();
        AppImpl31Api3 appimpl31api3;
        appimpl31api3.doSomething();
        visited = 1;
    }
}

