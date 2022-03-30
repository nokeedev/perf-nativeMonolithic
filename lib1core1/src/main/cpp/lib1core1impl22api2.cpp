// GENERATED SOURCE FILE

#include "lib1core1_private.h"
#include "lib1core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib1core1impl22api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core1impl22api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core1impl22api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core1impl22api24(int a, int b) {
    return a + b;
}

int Lib1Core1Impl22Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib1Core1Impl22Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib1Core1Impl22Api2" << std::endl;
        Lib1Core1Impl22Impl lib1core1impl22impl;
        lib1core1impl22impl.doSomething();
        Lib1Core1Impl23Api1 lib1core1impl23api1;
        lib1core1impl23api1.doSomething();
        Lib1Core1Impl23Api2 lib1core1impl23api2;
        lib1core1impl23api2.doSomething();
        Lib1Core1Impl23Api3 lib1core1impl23api3;
        lib1core1impl23api3.doSomething();
        visited = 1;
    }
}

