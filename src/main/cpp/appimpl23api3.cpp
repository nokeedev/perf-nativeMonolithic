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
int appimpl23api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl23api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl23api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl23api34(int a, int b) {
    return a + b;
}

int AppImpl23Api3::visited = 0;

/*
 * Here is a function.
 */
void AppImpl23Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit AppImpl23Api3" << std::endl;
        Lib1Api1 lib1api1;
        lib1api1.doSomething();
        Lib1Api2 lib1api2;
        lib1api2.doSomething();
        Lib1Api3 lib1api3;
        lib1api3.doSomething();
        AppImpl23Impl appimpl23impl;
        appimpl23impl.doSomething();
        AppImpl24Api1 appimpl24api1;
        appimpl24api1.doSomething();
        AppImpl24Api2 appimpl24api2;
        appimpl24api2.doSomething();
        AppImpl24Api3 appimpl24api3;
        appimpl24api3.doSomething();
        visited = 1;
    }
}

