// GENERATED SOURCE FILE

#include "lib13core1_private.h"
#include "lib13core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib13core1impl21api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core1impl21api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core1impl21api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core1impl21api24(int a, int b) {
    return a + b;
}

int Lib13Core1Impl21Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib13Core1Impl21Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib13Core1Impl21Api2" << std::endl;
        Lib13Core1Impl21Impl lib13core1impl21impl;
        lib13core1impl21impl.doSomething();
        Lib13Core1Impl22Api1 lib13core1impl22api1;
        lib13core1impl22api1.doSomething();
        Lib13Core1Impl22Api2 lib13core1impl22api2;
        lib13core1impl22api2.doSomething();
        Lib13Core1Impl22Api3 lib13core1impl22api3;
        lib13core1impl22api3.doSomething();
        visited = 1;
    }
}

