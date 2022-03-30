// GENERATED SOURCE FILE

#include "lib15core1_private.h"
#include "lib15core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib15core1impl11api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core1impl11api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core1impl11api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core1impl11api24(int a, int b) {
    return a + b;
}

int Lib15Core1Impl11Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib15Core1Impl11Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib15Core1Impl11Api2" << std::endl;
        Lib15Core1Impl11Impl lib15core1impl11impl;
        lib15core1impl11impl.doSomething();
        Lib15Core1Impl12Api1 lib15core1impl12api1;
        lib15core1impl12api1.doSomething();
        Lib15Core1Impl12Api2 lib15core1impl12api2;
        lib15core1impl12api2.doSomething();
        Lib15Core1Impl12Api3 lib15core1impl12api3;
        lib15core1impl12api3.doSomething();
        visited = 1;
    }
}

