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
int appimpl12api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl12api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl12api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl12api24(int a, int b) {
    return a + b;
}

int AppImpl12Api2::visited = 0;

/*
 * Here is a function.
 */
void AppImpl12Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit AppImpl12Api2" << std::endl;
        Lib1Api1 lib1api1;
        lib1api1.doSomething();
        Lib1Api2 lib1api2;
        lib1api2.doSomething();
        Lib1Api3 lib1api3;
        lib1api3.doSomething();
        AppImpl12Impl appimpl12impl;
        appimpl12impl.doSomething();
        AppImpl13Api1 appimpl13api1;
        appimpl13api1.doSomething();
        AppImpl13Api2 appimpl13api2;
        appimpl13api2.doSomething();
        AppImpl13Api3 appimpl13api3;
        appimpl13api3.doSomething();
        visited = 1;
    }
}

