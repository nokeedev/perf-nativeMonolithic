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
int appimpl32api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl32api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl32api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl32api14(int a, int b) {
    return a + b;
}

int AppImpl32Api1::visited = 0;

/*
 * Here is a function.
 */
void AppImpl32Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit AppImpl32Api1" << std::endl;
        Lib1Api1 lib1api1;
        lib1api1.doSomething();
        Lib1Api2 lib1api2;
        lib1api2.doSomething();
        Lib1Api3 lib1api3;
        lib1api3.doSomething();
        AppImpl33Api1 appimpl33api1;
        appimpl33api1.doSomething();
        AppImpl32Impl appimpl32impl;
        appimpl32impl.doSomething();
        AppImpl33Api2 appimpl33api2;
        appimpl33api2.doSomething();
        AppImpl33Api3 appimpl33api3;
        appimpl33api3.doSomething();
        visited = 1;
    }
}

