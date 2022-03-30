// GENERATED SOURCE FILE

#include "lib7core1_private.h"
#include "lib7core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib7core1impl21api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core1impl21api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core1impl21api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core1impl21api14(int a, int b) {
    return a + b;
}

int Lib7Core1Impl21Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib7Core1Impl21Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib7Core1Impl21Api1" << std::endl;
        Lib7Core1Impl22Api1 lib7core1impl22api1;
        lib7core1impl22api1.doSomething();
        Lib7Core1Impl21Impl lib7core1impl21impl;
        lib7core1impl21impl.doSomething();
        Lib7Core1Impl22Api2 lib7core1impl22api2;
        lib7core1impl22api2.doSomething();
        Lib7Core1Impl22Api3 lib7core1impl22api3;
        lib7core1impl22api3.doSomething();
        visited = 1;
    }
}

