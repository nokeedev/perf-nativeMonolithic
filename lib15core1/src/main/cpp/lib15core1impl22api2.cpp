// GENERATED SOURCE FILE

#include "lib15core1_private.h"
#include "lib15core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib15core1impl22api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core1impl22api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core1impl22api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core1impl22api24(int a, int b) {
    return a + b;
}

int Lib15Core1Impl22Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib15Core1Impl22Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib15Core1Impl22Api2" << std::endl;
        Lib15Core1Impl22Impl lib15core1impl22impl;
        lib15core1impl22impl.doSomething();
        Lib15Core1Impl23Api1 lib15core1impl23api1;
        lib15core1impl23api1.doSomething();
        Lib15Core1Impl23Api2 lib15core1impl23api2;
        lib15core1impl23api2.doSomething();
        Lib15Core1Impl23Api3 lib15core1impl23api3;
        lib15core1impl23api3.doSomething();
        visited = 1;
    }
}

