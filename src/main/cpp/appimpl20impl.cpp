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
int appimpl20impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl20impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl20impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl20impl4(int a, int b) {
    return a + b;
}

int AppImpl20Impl::visited = 0;

/*
 * Here is a function.
 */
void AppImpl20Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit AppImpl20Impl" << std::endl;
        Lib1Api1 lib1api1;
        lib1api1.doSomething();
        Lib1Api2 lib1api2;
        lib1api2.doSomething();
        Lib1Api3 lib1api3;
        lib1api3.doSomething();
        AppImpl20Core1 appimpl20core1;
        appimpl20core1.doSomething();
        AppImpl20Core2 appimpl20core2;
        appimpl20core2.doSomething();
        AppImpl21Api1 appimpl21api1;
        appimpl21api1.doSomething();
        AppImpl21Api2 appimpl21api2;
        appimpl21api2.doSomething();
        AppImpl21Api3 appimpl21api3;
        appimpl21api3.doSomething();
        visited = 1;
    }
}

