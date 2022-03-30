// GENERATED SOURCE FILE

#include "lib11core1_private.h"
#include "lib11core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib11core1impl21api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core1impl21api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core1impl21api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core1impl21api14(int a, int b) {
    return a + b;
}

int Lib11Core1Impl21Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib11Core1Impl21Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib11Core1Impl21Api1" << std::endl;
        Lib11Core1Impl22Api1 lib11core1impl22api1;
        lib11core1impl22api1.doSomething();
        Lib11Core1Impl21Impl lib11core1impl21impl;
        lib11core1impl21impl.doSomething();
        Lib11Core1Impl22Api2 lib11core1impl22api2;
        lib11core1impl22api2.doSomething();
        Lib11Core1Impl22Api3 lib11core1impl22api3;
        lib11core1impl22api3.doSomething();
        visited = 1;
    }
}

