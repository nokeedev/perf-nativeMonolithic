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
int appimpl19impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl19impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl19impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl19impl4(int a, int b) {
    return a + b;
}

int AppImpl19Impl::visited = 0;

/*
 * Here is a function.
 */
void AppImpl19Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit AppImpl19Impl" << std::endl;
        Lib1Api1 lib1api1;
        lib1api1.doSomething();
        Lib1Api2 lib1api2;
        lib1api2.doSomething();
        Lib1Api3 lib1api3;
        lib1api3.doSomething();
        AppImpl19Core1 appimpl19core1;
        appimpl19core1.doSomething();
        AppImpl19Core2 appimpl19core2;
        appimpl19core2.doSomething();
        AppImpl20Api1 appimpl20api1;
        appimpl20api1.doSomething();
        AppImpl20Api2 appimpl20api2;
        appimpl20api2.doSomething();
        AppImpl20Api3 appimpl20api3;
        appimpl20api3.doSomething();
        visited = 1;
    }
}

