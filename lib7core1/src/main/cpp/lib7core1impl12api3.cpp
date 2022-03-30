// GENERATED SOURCE FILE

#include "lib7core1_private.h"
#include "lib7core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib7core1impl12api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core1impl12api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core1impl12api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core1impl12api34(int a, int b) {
    return a + b;
}

int Lib7Core1Impl12Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib7Core1Impl12Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib7Core1Impl12Api3" << std::endl;
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

