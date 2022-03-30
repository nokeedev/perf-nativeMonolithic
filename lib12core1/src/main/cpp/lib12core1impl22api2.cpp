// GENERATED SOURCE FILE

#include "lib12core1_private.h"
#include "lib12core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib12core1impl22api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12core1impl22api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12core1impl22api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12core1impl22api24(int a, int b) {
    return a + b;
}

int Lib12Core1Impl22Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib12Core1Impl22Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib12Core1Impl22Api2" << std::endl;
        Lib12Core1Impl22Impl lib12core1impl22impl;
        lib12core1impl22impl.doSomething();
        Lib12Core1Impl23Api1 lib12core1impl23api1;
        lib12core1impl23api1.doSomething();
        Lib12Core1Impl23Api2 lib12core1impl23api2;
        lib12core1impl23api2.doSomething();
        Lib12Core1Impl23Api3 lib12core1impl23api3;
        lib12core1impl23api3.doSomething();
        visited = 1;
    }
}

