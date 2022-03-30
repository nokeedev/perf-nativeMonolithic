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
int appimpl1api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl1api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl1api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl1api14(int a, int b) {
    return a + b;
}

int AppImpl1Api1::visited = 0;

/*
 * Here is a function.
 */
void AppImpl1Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit AppImpl1Api1" << std::endl;
        Lib1Api1 lib1api1;
        lib1api1.doSomething();
        Lib1Api2 lib1api2;
        lib1api2.doSomething();
        Lib1Api3 lib1api3;
        lib1api3.doSomething();
        AppImpl2Api1 appimpl2api1;
        appimpl2api1.doSomething();
        AppImpl1Impl appimpl1impl;
        appimpl1impl.doSomething();
        AppImpl2Api2 appimpl2api2;
        appimpl2api2.doSomething();
        AppImpl2Api3 appimpl2api3;
        appimpl2api3.doSomething();
        visited = 1;
    }
}

