// GENERATED SOURCE FILE

#include "lib14api3_private.h"
#include "lib14api3_impl.h"
#include "lib14impl.h"
#include "lib15api1.h"
#include "lib15api2.h"
#include "lib15api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib14api3impl22api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api3impl22api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api3impl22api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api3impl22api24(int a, int b) {
    return a + b;
}

int Lib14Api3Impl22Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib14Api3Impl22Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib14Api3Impl22Api2" << std::endl;
        Lib14Impl lib14impl;
        lib14impl.doSomething();
        Lib15Api1 lib15api1;
        lib15api1.doSomething();
        Lib15Api2 lib15api2;
        lib15api2.doSomething();
        Lib15Api3 lib15api3;
        lib15api3.doSomething();
        Lib14Api3Impl22Impl lib14api3impl22impl;
        lib14api3impl22impl.doSomething();
        Lib14Api3Impl23Api1 lib14api3impl23api1;
        lib14api3impl23api1.doSomething();
        Lib14Api3Impl23Api2 lib14api3impl23api2;
        lib14api3impl23api2.doSomething();
        Lib14Api3Impl23Api3 lib14api3impl23api3;
        lib14api3impl23api3.doSomething();
        visited = 1;
    }
}

