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
int appimpl29impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl29impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl29impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl29impl4(int a, int b) {
    return a + b;
}

int AppImpl29Impl::visited = 0;

/*
 * Here is a function.
 */
void AppImpl29Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit AppImpl29Impl" << std::endl;
        Lib1Api1 lib1api1;
        lib1api1.doSomething();
        Lib1Api2 lib1api2;
        lib1api2.doSomething();
        Lib1Api3 lib1api3;
        lib1api3.doSomething();
        AppImpl29Core1 appimpl29core1;
        appimpl29core1.doSomething();
        AppImpl29Core2 appimpl29core2;
        appimpl29core2.doSomething();
        AppImpl30Api1 appimpl30api1;
        appimpl30api1.doSomething();
        AppImpl30Api2 appimpl30api2;
        appimpl30api2.doSomething();
        AppImpl30Api3 appimpl30api3;
        appimpl30api3.doSomething();
        visited = 1;
    }
}

