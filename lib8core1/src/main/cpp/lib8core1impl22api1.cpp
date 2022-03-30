// GENERATED SOURCE FILE

#include "lib8core1_private.h"
#include "lib8core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib8core1impl22api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core1impl22api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core1impl22api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core1impl22api14(int a, int b) {
    return a + b;
}

int Lib8Core1Impl22Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib8Core1Impl22Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib8Core1Impl22Api1" << std::endl;
        Lib8Core1Impl23Api1 lib8core1impl23api1;
        lib8core1impl23api1.doSomething();
        Lib8Core1Impl22Impl lib8core1impl22impl;
        lib8core1impl22impl.doSomething();
        Lib8Core1Impl23Api2 lib8core1impl23api2;
        lib8core1impl23api2.doSomething();
        Lib8Core1Impl23Api3 lib8core1impl23api3;
        lib8core1impl23api3.doSomething();
        visited = 1;
    }
}

