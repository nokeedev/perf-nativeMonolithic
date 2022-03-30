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
int appimpl18impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl18impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl18impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl18impl4(int a, int b) {
    return a + b;
}

int AppImpl18Impl::visited = 0;

/*
 * Here is a function.
 */
void AppImpl18Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit AppImpl18Impl" << std::endl;
        Lib1Api1 lib1api1;
        lib1api1.doSomething();
        Lib1Api2 lib1api2;
        lib1api2.doSomething();
        Lib1Api3 lib1api3;
        lib1api3.doSomething();
        AppImpl18Core1 appimpl18core1;
        appimpl18core1.doSomething();
        AppImpl18Core2 appimpl18core2;
        appimpl18core2.doSomething();
        AppImpl19Api1 appimpl19api1;
        appimpl19api1.doSomething();
        AppImpl19Api2 appimpl19api2;
        appimpl19api2.doSomething();
        AppImpl19Api3 appimpl19api3;
        appimpl19api3.doSomething();
        visited = 1;
    }
}

