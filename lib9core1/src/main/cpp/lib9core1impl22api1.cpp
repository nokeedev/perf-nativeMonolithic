// GENERATED SOURCE FILE

#include "lib9core1_private.h"
#include "lib9core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib9core1impl22api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core1impl22api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core1impl22api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core1impl22api14(int a, int b) {
    return a + b;
}

int Lib9Core1Impl22Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib9Core1Impl22Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib9Core1Impl22Api1" << std::endl;
        Lib9Core1Impl23Api1 lib9core1impl23api1;
        lib9core1impl23api1.doSomething();
        Lib9Core1Impl22Impl lib9core1impl22impl;
        lib9core1impl22impl.doSomething();
        Lib9Core1Impl23Api2 lib9core1impl23api2;
        lib9core1impl23api2.doSomething();
        Lib9Core1Impl23Api3 lib9core1impl23api3;
        lib9core1impl23api3.doSomething();
        visited = 1;
    }
}

