// GENERATED SOURCE FILE

#include "lib6core1_private.h"
#include "lib6core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib6core1impl22api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6core1impl22api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6core1impl22api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6core1impl22api24(int a, int b) {
    return a + b;
}

int Lib6Core1Impl22Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib6Core1Impl22Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib6Core1Impl22Api2" << std::endl;
        Lib6Core1Impl22Impl lib6core1impl22impl;
        lib6core1impl22impl.doSomething();
        Lib6Core1Impl23Api1 lib6core1impl23api1;
        lib6core1impl23api1.doSomething();
        Lib6Core1Impl23Api2 lib6core1impl23api2;
        lib6core1impl23api2.doSomething();
        Lib6Core1Impl23Api3 lib6core1impl23api3;
        lib6core1impl23api3.doSomething();
        visited = 1;
    }
}

