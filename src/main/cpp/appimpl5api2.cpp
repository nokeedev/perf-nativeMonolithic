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
int appimpl5api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl5api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl5api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl5api24(int a, int b) {
    return a + b;
}

int AppImpl5Api2::visited = 0;

/*
 * Here is a function.
 */
void AppImpl5Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit AppImpl5Api2" << std::endl;
        Lib1Api1 lib1api1;
        lib1api1.doSomething();
        Lib1Api2 lib1api2;
        lib1api2.doSomething();
        Lib1Api3 lib1api3;
        lib1api3.doSomething();
        AppImpl5Impl appimpl5impl;
        appimpl5impl.doSomething();
        AppImpl6Api1 appimpl6api1;
        appimpl6api1.doSomething();
        AppImpl6Api2 appimpl6api2;
        appimpl6api2.doSomething();
        AppImpl6Api3 appimpl6api3;
        appimpl6api3.doSomething();
        visited = 1;
    }
}

