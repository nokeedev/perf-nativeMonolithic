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
int appimpl17impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl17impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl17impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl17impl4(int a, int b) {
    return a + b;
}

int AppImpl17Impl::visited = 0;

/*
 * Here is a function.
 */
void AppImpl17Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit AppImpl17Impl" << std::endl;
        Lib1Api1 lib1api1;
        lib1api1.doSomething();
        Lib1Api2 lib1api2;
        lib1api2.doSomething();
        Lib1Api3 lib1api3;
        lib1api3.doSomething();
        AppImpl17Core1 appimpl17core1;
        appimpl17core1.doSomething();
        AppImpl17Core2 appimpl17core2;
        appimpl17core2.doSomething();
        AppImpl18Api1 appimpl18api1;
        appimpl18api1.doSomething();
        AppImpl18Api2 appimpl18api2;
        appimpl18api2.doSomething();
        AppImpl18Api3 appimpl18api3;
        appimpl18api3.doSomething();
        visited = 1;
    }
}

