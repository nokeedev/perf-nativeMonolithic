// GENERATED SOURCE FILE

#include "lib16core1_private.h"
#include "lib16core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib16core1impl21api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core1impl21api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core1impl21api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core1impl21api14(int a, int b) {
    return a + b;
}

int Lib16Core1Impl21Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib16Core1Impl21Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib16Core1Impl21Api1" << std::endl;
        Lib16Core1Impl22Api1 lib16core1impl22api1;
        lib16core1impl22api1.doSomething();
        Lib16Core1Impl21Impl lib16core1impl21impl;
        lib16core1impl21impl.doSomething();
        Lib16Core1Impl22Api2 lib16core1impl22api2;
        lib16core1impl22api2.doSomething();
        Lib16Core1Impl22Api3 lib16core1impl22api3;
        lib16core1impl22api3.doSomething();
        visited = 1;
    }
}

