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
int appimpl4impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl4impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl4impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl4impl4(int a, int b) {
    return a + b;
}

int AppImpl4Impl::visited = 0;

/*
 * Here is a function.
 */
void AppImpl4Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit AppImpl4Impl" << std::endl;
        Lib1Api1 lib1api1;
        lib1api1.doSomething();
        Lib1Api2 lib1api2;
        lib1api2.doSomething();
        Lib1Api3 lib1api3;
        lib1api3.doSomething();
        AppImpl4Core1 appimpl4core1;
        appimpl4core1.doSomething();
        AppImpl4Core2 appimpl4core2;
        appimpl4core2.doSomething();
        AppImpl5Api1 appimpl5api1;
        appimpl5api1.doSomething();
        AppImpl5Api2 appimpl5api2;
        appimpl5api2.doSomething();
        AppImpl5Api3 appimpl5api3;
        appimpl5api3.doSomething();
        visited = 1;
    }
}

