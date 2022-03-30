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
int appimpl16api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl16api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl16api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl16api24(int a, int b) {
    return a + b;
}

int AppImpl16Api2::visited = 0;

/*
 * Here is a function.
 */
void AppImpl16Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit AppImpl16Api2" << std::endl;
        Lib1Api1 lib1api1;
        lib1api1.doSomething();
        Lib1Api2 lib1api2;
        lib1api2.doSomething();
        Lib1Api3 lib1api3;
        lib1api3.doSomething();
        AppImpl16Impl appimpl16impl;
        appimpl16impl.doSomething();
        AppImpl17Api1 appimpl17api1;
        appimpl17api1.doSomething();
        AppImpl17Api2 appimpl17api2;
        appimpl17api2.doSomething();
        AppImpl17Api3 appimpl17api3;
        appimpl17api3.doSomething();
        visited = 1;
    }
}

