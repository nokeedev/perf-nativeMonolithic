// GENERATED SOURCE FILE

#include "lib15api2_private.h"
#include "lib15api2_impl.h"
#include "lib15impl.h"
#include "lib16api1.h"
#include "lib16api2.h"
#include "lib16api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib15api2impl22api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api2impl22api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api2impl22api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api2impl22api24(int a, int b) {
    return a + b;
}

int Lib15Api2Impl22Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib15Api2Impl22Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib15Api2Impl22Api2" << std::endl;
        Lib15Impl lib15impl;
        lib15impl.doSomething();
        Lib16Api1 lib16api1;
        lib16api1.doSomething();
        Lib16Api2 lib16api2;
        lib16api2.doSomething();
        Lib16Api3 lib16api3;
        lib16api3.doSomething();
        Lib15Api2Impl22Impl lib15api2impl22impl;
        lib15api2impl22impl.doSomething();
        Lib15Api2Impl23Api1 lib15api2impl23api1;
        lib15api2impl23api1.doSomething();
        Lib15Api2Impl23Api2 lib15api2impl23api2;
        lib15api2impl23api2.doSomething();
        Lib15Api2Impl23Api3 lib15api2impl23api3;
        lib15api2impl23api3.doSomething();
        visited = 1;
    }
}

