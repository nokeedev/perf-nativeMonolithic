// GENERATED SOURCE FILE

#include "lib14core1_private.h"
#include "lib14core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib14core1impl22api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core1impl22api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core1impl22api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core1impl22api14(int a, int b) {
    return a + b;
}

int Lib14Core1Impl22Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib14Core1Impl22Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib14Core1Impl22Api1" << std::endl;
        Lib14Core1Impl23Api1 lib14core1impl23api1;
        lib14core1impl23api1.doSomething();
        Lib14Core1Impl22Impl lib14core1impl22impl;
        lib14core1impl22impl.doSomething();
        Lib14Core1Impl23Api2 lib14core1impl23api2;
        lib14core1impl23api2.doSomething();
        Lib14Core1Impl23Api3 lib14core1impl23api3;
        lib14core1impl23api3.doSomething();
        visited = 1;
    }
}

