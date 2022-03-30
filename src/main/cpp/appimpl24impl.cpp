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
int appimpl24impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl24impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl24impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl24impl4(int a, int b) {
    return a + b;
}

int AppImpl24Impl::visited = 0;

/*
 * Here is a function.
 */
void AppImpl24Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit AppImpl24Impl" << std::endl;
        Lib1Api1 lib1api1;
        lib1api1.doSomething();
        Lib1Api2 lib1api2;
        lib1api2.doSomething();
        Lib1Api3 lib1api3;
        lib1api3.doSomething();
        AppImpl24Core1 appimpl24core1;
        appimpl24core1.doSomething();
        AppImpl24Core2 appimpl24core2;
        appimpl24core2.doSomething();
        AppImpl25Api1 appimpl25api1;
        appimpl25api1.doSomething();
        AppImpl25Api2 appimpl25api2;
        appimpl25api2.doSomething();
        AppImpl25Api3 appimpl25api3;
        appimpl25api3.doSomething();
        visited = 1;
    }
}

