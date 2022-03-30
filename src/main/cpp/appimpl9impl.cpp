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
int appimpl9impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl9impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl9impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl9impl4(int a, int b) {
    return a + b;
}

int AppImpl9Impl::visited = 0;

/*
 * Here is a function.
 */
void AppImpl9Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit AppImpl9Impl" << std::endl;
        Lib1Api1 lib1api1;
        lib1api1.doSomething();
        Lib1Api2 lib1api2;
        lib1api2.doSomething();
        Lib1Api3 lib1api3;
        lib1api3.doSomething();
        AppImpl9Core1 appimpl9core1;
        appimpl9core1.doSomething();
        AppImpl9Core2 appimpl9core2;
        appimpl9core2.doSomething();
        AppImpl10Api1 appimpl10api1;
        appimpl10api1.doSomething();
        AppImpl10Api2 appimpl10api2;
        appimpl10api2.doSomething();
        AppImpl10Api3 appimpl10api3;
        appimpl10api3.doSomething();
        visited = 1;
    }
}

