// GENERATED SOURCE FILE

#include "lib10core1_private.h"
#include "lib10core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib10core1impl12api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core1impl12api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core1impl12api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core1impl12api24(int a, int b) {
    return a + b;
}

int Lib10Core1Impl12Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib10Core1Impl12Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib10Core1Impl12Api2" << std::endl;
        Lib10Core1Impl12Impl lib10core1impl12impl;
        lib10core1impl12impl.doSomething();
        Lib10Core1Impl13Api1 lib10core1impl13api1;
        lib10core1impl13api1.doSomething();
        Lib10Core1Impl13Api2 lib10core1impl13api2;
        lib10core1impl13api2.doSomething();
        Lib10Core1Impl13Api3 lib10core1impl13api3;
        lib10core1impl13api3.doSomething();
        visited = 1;
    }
}

