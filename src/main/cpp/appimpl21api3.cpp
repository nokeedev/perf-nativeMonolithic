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
int appimpl21api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl21api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl21api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl21api34(int a, int b) {
    return a + b;
}

int AppImpl21Api3::visited = 0;

/*
 * Here is a function.
 */
void AppImpl21Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit AppImpl21Api3" << std::endl;
        Lib1Api1 lib1api1;
        lib1api1.doSomething();
        Lib1Api2 lib1api2;
        lib1api2.doSomething();
        Lib1Api3 lib1api3;
        lib1api3.doSomething();
        AppImpl21Impl appimpl21impl;
        appimpl21impl.doSomething();
        AppImpl22Api1 appimpl22api1;
        appimpl22api1.doSomething();
        AppImpl22Api2 appimpl22api2;
        appimpl22api2.doSomething();
        AppImpl22Api3 appimpl22api3;
        appimpl22api3.doSomething();
        visited = 1;
    }
}

