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
int appimpl4api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl4api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl4api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int appimpl4api14(int a, int b) {
    return a + b;
}

int AppImpl4Api1::visited = 0;

/*
 * Here is a function.
 */
void AppImpl4Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit AppImpl4Api1" << std::endl;
        Lib1Api1 lib1api1;
        lib1api1.doSomething();
        Lib1Api2 lib1api2;
        lib1api2.doSomething();
        Lib1Api3 lib1api3;
        lib1api3.doSomething();
        AppImpl5Api1 appimpl5api1;
        appimpl5api1.doSomething();
        AppImpl4Impl appimpl4impl;
        appimpl4impl.doSomething();
        AppImpl5Api2 appimpl5api2;
        appimpl5api2.doSomething();
        AppImpl5Api3 appimpl5api3;
        appimpl5api3.doSomething();
        visited = 1;
    }
}

