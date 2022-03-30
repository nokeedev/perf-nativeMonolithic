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
int appimpl24api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl24api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl24api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl24api14(int a, int b) {
    return a + b;
}

int AppImpl24Api1::visited = 0;

/*
 * Here is a function.
 */
void AppImpl24Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit AppImpl24Api1" << std::endl;
        Lib1Api1 lib1api1;
        lib1api1.doSomething();
        Lib1Api2 lib1api2;
        lib1api2.doSomething();
        Lib1Api3 lib1api3;
        lib1api3.doSomething();
        AppImpl25Api1 appimpl25api1;
        appimpl25api1.doSomething();
        AppImpl24Impl appimpl24impl;
        appimpl24impl.doSomething();
        AppImpl25Api2 appimpl25api2;
        appimpl25api2.doSomething();
        AppImpl25Api3 appimpl25api3;
        appimpl25api3.doSomething();
        visited = 1;
    }
}

