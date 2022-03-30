// GENERATED SOURCE FILE

#include "lib16core1_private.h"
#include "lib16core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib16core1impl11api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core1impl11api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core1impl11api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core1impl11api24(int a, int b) {
    return a + b;
}

int Lib16Core1Impl11Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib16Core1Impl11Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib16Core1Impl11Api2" << std::endl;
        Lib16Core1Impl11Impl lib16core1impl11impl;
        lib16core1impl11impl.doSomething();
        Lib16Core1Impl12Api1 lib16core1impl12api1;
        lib16core1impl12api1.doSomething();
        Lib16Core1Impl12Api2 lib16core1impl12api2;
        lib16core1impl12api2.doSomething();
        Lib16Core1Impl12Api3 lib16core1impl12api3;
        lib16core1impl12api3.doSomething();
        visited = 1;
    }
}

