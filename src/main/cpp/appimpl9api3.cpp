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
int appimpl9api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl9api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl9api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl9api34(int a, int b) {
    return a + b;
}

int AppImpl9Api3::visited = 0;

/*
 * Here is a function.
 */
void AppImpl9Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit AppImpl9Api3" << std::endl;
        Lib1Api1 lib1api1;
        lib1api1.doSomething();
        Lib1Api2 lib1api2;
        lib1api2.doSomething();
        Lib1Api3 lib1api3;
        lib1api3.doSomething();
        AppImpl9Impl appimpl9impl;
        appimpl9impl.doSomething();
        AppImpl10Api1 appimpl10api1;
        appimpl10api1.doSomething();
        AppImpl10Api2 appimpl10api2;
        appimpl10api2.doSomething();
        AppImpl10Api3 appimpl10api3;
        appimpl10api3.doSomething();
        visited = 1;
    }
}

