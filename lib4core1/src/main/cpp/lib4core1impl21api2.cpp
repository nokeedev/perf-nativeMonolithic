// GENERATED SOURCE FILE

#include "lib4core1_private.h"
#include "lib4core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib4core1impl21api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core1impl21api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core1impl21api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core1impl21api24(int a, int b) {
    return a + b;
}

int Lib4Core1Impl21Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib4Core1Impl21Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib4Core1Impl21Api2" << std::endl;
        Lib4Core1Impl21Impl lib4core1impl21impl;
        lib4core1impl21impl.doSomething();
        Lib4Core1Impl22Api1 lib4core1impl22api1;
        lib4core1impl22api1.doSomething();
        Lib4Core1Impl22Api2 lib4core1impl22api2;
        lib4core1impl22api2.doSomething();
        Lib4Core1Impl22Api3 lib4core1impl22api3;
        lib4core1impl22api3.doSomething();
        visited = 1;
    }
}

