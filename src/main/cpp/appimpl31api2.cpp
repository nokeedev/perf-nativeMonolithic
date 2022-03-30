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
int appimpl31api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl31api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl31api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl31api24(int a, int b) {
    return a + b;
}

int AppImpl31Api2::visited = 0;

/*
 * Here is a function.
 */
void AppImpl31Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit AppImpl31Api2" << std::endl;
        Lib1Api1 lib1api1;
        lib1api1.doSomething();
        Lib1Api2 lib1api2;
        lib1api2.doSomething();
        Lib1Api3 lib1api3;
        lib1api3.doSomething();
        AppImpl31Impl appimpl31impl;
        appimpl31impl.doSomething();
        AppImpl32Api1 appimpl32api1;
        appimpl32api1.doSomething();
        AppImpl32Api2 appimpl32api2;
        appimpl32api2.doSomething();
        AppImpl32Api3 appimpl32api3;
        appimpl32api3.doSomething();
        visited = 1;
    }
}

