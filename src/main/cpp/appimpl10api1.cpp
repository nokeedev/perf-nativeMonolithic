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
int appimpl10api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl10api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl10api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl10api14(int a, int b) {
    return a + b;
}

int AppImpl10Api1::visited = 0;

/*
 * Here is a function.
 */
void AppImpl10Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit AppImpl10Api1" << std::endl;
        Lib1Api1 lib1api1;
        lib1api1.doSomething();
        Lib1Api2 lib1api2;
        lib1api2.doSomething();
        Lib1Api3 lib1api3;
        lib1api3.doSomething();
        AppImpl11Api1 appimpl11api1;
        appimpl11api1.doSomething();
        AppImpl10Impl appimpl10impl;
        appimpl10impl.doSomething();
        AppImpl11Api2 appimpl11api2;
        appimpl11api2.doSomething();
        AppImpl11Api3 appimpl11api3;
        appimpl11api3.doSomething();
        visited = 1;
    }
}

