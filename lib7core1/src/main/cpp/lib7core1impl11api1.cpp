// GENERATED SOURCE FILE

#include "lib7core1_private.h"
#include "lib7core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib7core1impl11api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core1impl11api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core1impl11api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core1impl11api14(int a, int b) {
    return a + b;
}

int Lib7Core1Impl11Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib7Core1Impl11Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib7Core1Impl11Api1" << std::endl;
        Lib7Core1Impl12Api1 lib7core1impl12api1;
        lib7core1impl12api1.doSomething();
        Lib7Core1Impl11Impl lib7core1impl11impl;
        lib7core1impl11impl.doSomething();
        Lib7Core1Impl12Api2 lib7core1impl12api2;
        lib7core1impl12api2.doSomething();
        Lib7Core1Impl12Api3 lib7core1impl12api3;
        lib7core1impl12api3.doSomething();
        visited = 1;
    }
}

