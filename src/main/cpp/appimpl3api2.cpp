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
int appimpl3api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl3api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl3api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl3api24(int a, int b) {
    return a + b;
}

int AppImpl3Api2::visited = 0;

/*
 * Here is a function.
 */
void AppImpl3Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit AppImpl3Api2" << std::endl;
        Lib1Api1 lib1api1;
        lib1api1.doSomething();
        Lib1Api2 lib1api2;
        lib1api2.doSomething();
        Lib1Api3 lib1api3;
        lib1api3.doSomething();
        AppImpl3Impl appimpl3impl;
        appimpl3impl.doSomething();
        AppImpl4Api1 appimpl4api1;
        appimpl4api1.doSomething();
        AppImpl4Api2 appimpl4api2;
        appimpl4api2.doSomething();
        AppImpl4Api3 appimpl4api3;
        appimpl4api3.doSomething();
        visited = 1;
    }
}

