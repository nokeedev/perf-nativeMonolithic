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
int appimpl20api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl20api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl20api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl20api14(int a, int b) {
    return a + b;
}

int AppImpl20Api1::visited = 0;

/*
 * Here is a function.
 */
void AppImpl20Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit AppImpl20Api1" << std::endl;
        Lib1Api1 lib1api1;
        lib1api1.doSomething();
        Lib1Api2 lib1api2;
        lib1api2.doSomething();
        Lib1Api3 lib1api3;
        lib1api3.doSomething();
        AppImpl21Api1 appimpl21api1;
        appimpl21api1.doSomething();
        AppImpl20Impl appimpl20impl;
        appimpl20impl.doSomething();
        AppImpl21Api2 appimpl21api2;
        appimpl21api2.doSomething();
        AppImpl21Api3 appimpl21api3;
        appimpl21api3.doSomething();
        visited = 1;
    }
}

