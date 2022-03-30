// GENERATED SOURCE FILE

#include "lib8core2_private.h"
#include "lib8core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib8core2impl11api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core2impl11api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core2impl11api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core2impl11api14(int a, int b) {
    return a + b;
}

int Lib8Core2Impl11Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib8Core2Impl11Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib8Core2Impl11Api1" << std::endl;
        Lib8Core2Impl12Api1 lib8core2impl12api1;
        lib8core2impl12api1.doSomething();
        Lib8Core2Impl11Impl lib8core2impl11impl;
        lib8core2impl11impl.doSomething();
        Lib8Core2Impl12Api2 lib8core2impl12api2;
        lib8core2impl12api2.doSomething();
        Lib8Core2Impl12Api3 lib8core2impl12api3;
        lib8core2impl12api3.doSomething();
        visited = 1;
    }
}

