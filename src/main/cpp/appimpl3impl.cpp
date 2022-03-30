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
int appimpl3impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl3impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl3impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl3impl4(int a, int b) {
    return a + b;
}

int AppImpl3Impl::visited = 0;

/*
 * Here is a function.
 */
void AppImpl3Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit AppImpl3Impl" << std::endl;
        Lib1Api1 lib1api1;
        lib1api1.doSomething();
        Lib1Api2 lib1api2;
        lib1api2.doSomething();
        Lib1Api3 lib1api3;
        lib1api3.doSomething();
        AppImpl3Core1 appimpl3core1;
        appimpl3core1.doSomething();
        AppImpl3Core2 appimpl3core2;
        appimpl3core2.doSomething();
        AppImpl4Api1 appimpl4api1;
        appimpl4api1.doSomething();
        AppImpl4Api2 appimpl4api2;
        appimpl4api2.doSomething();
        AppImpl4Api3 appimpl4api3;
        appimpl4api3.doSomething();
        visited = 1;
    }
}

