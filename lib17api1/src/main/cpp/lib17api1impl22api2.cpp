// GENERATED SOURCE FILE

#include "lib17api1_private.h"
#include "lib17api1_impl.h"
#include "lib17core.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17api1impl22api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api1impl22api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api1impl22api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api1impl22api24(int a, int b) {
    return a + b;
}

int Lib17Api1Impl22Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib17Api1Impl22Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17Api1Impl22Api2" << std::endl;
        Lib17Core lib17core;
        lib17core.doSomething();
        Lib17Api1Impl22Impl lib17api1impl22impl;
        lib17api1impl22impl.doSomething();
        Lib17Api1Impl23Api1 lib17api1impl23api1;
        lib17api1impl23api1.doSomething();
        Lib17Api1Impl23Api2 lib17api1impl23api2;
        lib17api1impl23api2.doSomething();
        Lib17Api1Impl23Api3 lib17api1impl23api3;
        lib17api1impl23api3.doSomething();
        visited = 1;
    }
}

