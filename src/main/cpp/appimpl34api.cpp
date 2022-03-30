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
int appimpl34api1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl34api2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl34api3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl34api4(int a, int b) {
    return a + b;
}

int AppImpl34Api::visited = 0;

/*
 * Here is a function.
 */
void AppImpl34Api::doSomething() {
    if (visited == 0) {
        std::cout << "visit AppImpl34Api" << std::endl;
        Lib1Api1 lib1api1;
        lib1api1.doSomething();
        Lib1Api2 lib1api2;
        lib1api2.doSomething();
        Lib1Api3 lib1api3;
        lib1api3.doSomething();
        AppImpl34Core appimpl34core;
        appimpl34core.doSomething();
        visited = 1;
    }
}

