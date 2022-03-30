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
int appimpl33api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl33api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl33api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl33api24(int a, int b) {
    return a + b;
}

int AppImpl33Api2::visited = 0;

/*
 * Here is a function.
 */
void AppImpl33Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit AppImpl33Api2" << std::endl;
        Lib1Api1 lib1api1;
        lib1api1.doSomething();
        Lib1Api2 lib1api2;
        lib1api2.doSomething();
        Lib1Api3 lib1api3;
        lib1api3.doSomething();
        AppImpl33Impl appimpl33impl;
        appimpl33impl.doSomething();
        AppImpl34Api appimpl34api;
        appimpl34api.doSomething();
        visited = 1;
    }
}

