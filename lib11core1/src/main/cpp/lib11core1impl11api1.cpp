// GENERATED SOURCE FILE

#include "lib11core1_private.h"
#include "lib11core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib11core1impl11api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core1impl11api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core1impl11api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core1impl11api14(int a, int b) {
    return a + b;
}

int Lib11Core1Impl11Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib11Core1Impl11Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib11Core1Impl11Api1" << std::endl;
        Lib11Core1Impl12Api1 lib11core1impl12api1;
        lib11core1impl12api1.doSomething();
        Lib11Core1Impl11Impl lib11core1impl11impl;
        lib11core1impl11impl.doSomething();
        Lib11Core1Impl12Api2 lib11core1impl12api2;
        lib11core1impl12api2.doSomething();
        Lib11Core1Impl12Api3 lib11core1impl12api3;
        lib11core1impl12api3.doSomething();
        visited = 1;
    }
}

