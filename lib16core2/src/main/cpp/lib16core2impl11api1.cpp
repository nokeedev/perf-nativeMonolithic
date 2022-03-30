// GENERATED SOURCE FILE

#include "lib16core2_private.h"
#include "lib16core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib16core2impl11api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core2impl11api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core2impl11api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core2impl11api14(int a, int b) {
    return a + b;
}

int Lib16Core2Impl11Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib16Core2Impl11Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib16Core2Impl11Api1" << std::endl;
        Lib16Core2Impl12Api1 lib16core2impl12api1;
        lib16core2impl12api1.doSomething();
        Lib16Core2Impl11Impl lib16core2impl11impl;
        lib16core2impl11impl.doSomething();
        Lib16Core2Impl12Api2 lib16core2impl12api2;
        lib16core2impl12api2.doSomething();
        Lib16Core2Impl12Api3 lib16core2impl12api3;
        lib16core2impl12api3.doSomething();
        visited = 1;
    }
}

