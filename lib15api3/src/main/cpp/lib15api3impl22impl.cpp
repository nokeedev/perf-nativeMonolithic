// GENERATED SOURCE FILE

#include "lib15api3_private.h"
#include "lib15api3_impl.h"
#include "lib15impl.h"
#include "lib16api1.h"
#include "lib16api2.h"
#include "lib16api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib15api3impl22impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api3impl22impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api3impl22impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api3impl22impl4(int a, int b) {
    return a + b;
}

int Lib15Api3Impl22Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib15Api3Impl22Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib15Api3Impl22Impl" << std::endl;
        Lib15Impl lib15impl;
        lib15impl.doSomething();
        Lib16Api1 lib16api1;
        lib16api1.doSomething();
        Lib16Api2 lib16api2;
        lib16api2.doSomething();
        Lib16Api3 lib16api3;
        lib16api3.doSomething();
        Lib15Api3Impl22Core1 lib15api3impl22core1;
        lib15api3impl22core1.doSomething();
        Lib15Api3Impl22Core2 lib15api3impl22core2;
        lib15api3impl22core2.doSomething();
        Lib15Api3Impl23Api1 lib15api3impl23api1;
        lib15api3impl23api1.doSomething();
        Lib15Api3Impl23Api2 lib15api3impl23api2;
        lib15api3impl23api2.doSomething();
        Lib15Api3Impl23Api3 lib15api3impl23api3;
        lib15api3impl23api3.doSomething();
        visited = 1;
    }
}

