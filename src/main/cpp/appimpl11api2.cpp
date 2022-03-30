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
int appimpl11api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl11api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl11api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl11api24(int a, int b) {
    return a + b;
}

int AppImpl11Api2::visited = 0;

/*
 * Here is a function.
 */
void AppImpl11Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit AppImpl11Api2" << std::endl;
        Lib1Api1 lib1api1;
        lib1api1.doSomething();
        Lib1Api2 lib1api2;
        lib1api2.doSomething();
        Lib1Api3 lib1api3;
        lib1api3.doSomething();
        AppImpl11Impl appimpl11impl;
        appimpl11impl.doSomething();
        AppImpl12Api1 appimpl12api1;
        appimpl12api1.doSomething();
        AppImpl12Api2 appimpl12api2;
        appimpl12api2.doSomething();
        AppImpl12Api3 appimpl12api3;
        appimpl12api3.doSomething();
        visited = 1;
    }
}

