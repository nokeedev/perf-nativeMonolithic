// GENERATED SOURCE FILE

#include "lib7core1_private.h"
#include "lib7core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib7core1impl12api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core1impl12api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core1impl12api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core1impl12api24(int a, int b) {
    return a + b;
}

int Lib7Core1Impl12Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib7Core1Impl12Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib7Core1Impl12Api2" << std::endl;
        Lib7Core1Impl12Impl lib7core1impl12impl;
        lib7core1impl12impl.doSomething();
        Lib7Core1Impl13Api1 lib7core1impl13api1;
        lib7core1impl13api1.doSomething();
        Lib7Core1Impl13Api2 lib7core1impl13api2;
        lib7core1impl13api2.doSomething();
        Lib7Core1Impl13Api3 lib7core1impl13api3;
        lib7core1impl13api3.doSomething();
        visited = 1;
    }
}

