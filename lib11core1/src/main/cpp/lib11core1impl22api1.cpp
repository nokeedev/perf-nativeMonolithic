// GENERATED SOURCE FILE

#include "lib11core1_private.h"
#include "lib11core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib11core1impl22api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core1impl22api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core1impl22api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core1impl22api14(int a, int b) {
    return a + b;
}

int Lib11Core1Impl22Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib11Core1Impl22Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib11Core1Impl22Api1" << std::endl;
        Lib11Core1Impl23Api1 lib11core1impl23api1;
        lib11core1impl23api1.doSomething();
        Lib11Core1Impl22Impl lib11core1impl22impl;
        lib11core1impl22impl.doSomething();
        Lib11Core1Impl23Api2 lib11core1impl23api2;
        lib11core1impl23api2.doSomething();
        Lib11Core1Impl23Api3 lib11core1impl23api3;
        lib11core1impl23api3.doSomething();
        visited = 1;
    }
}

