// GENERATED SOURCE FILE

#include "lib14core1_private.h"
#include "lib14core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib14core1impl21api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core1impl21api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core1impl21api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core1impl21api34(int a, int b) {
    return a + b;
}

int Lib14Core1Impl21Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib14Core1Impl21Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib14Core1Impl21Api3" << std::endl;
        Lib14Core1Impl21Impl lib14core1impl21impl;
        lib14core1impl21impl.doSomething();
        Lib14Core1Impl22Api1 lib14core1impl22api1;
        lib14core1impl22api1.doSomething();
        Lib14Core1Impl22Api2 lib14core1impl22api2;
        lib14core1impl22api2.doSomething();
        Lib14Core1Impl22Api3 lib14core1impl22api3;
        lib14core1impl22api3.doSomething();
        visited = 1;
    }
}

