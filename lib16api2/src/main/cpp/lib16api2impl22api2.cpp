// GENERATED SOURCE FILE

#include "lib16api2_private.h"
#include "lib16api2_impl.h"
#include "lib16impl.h"
#include "lib17api1.h"
#include "lib17api2.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib16api2impl22api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api2impl22api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api2impl22api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api2impl22api24(int a, int b) {
    return a + b;
}

int Lib16Api2Impl22Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib16Api2Impl22Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib16Api2Impl22Api2" << std::endl;
        Lib16Impl lib16impl;
        lib16impl.doSomething();
        Lib17Api1 lib17api1;
        lib17api1.doSomething();
        Lib17Api2 lib17api2;
        lib17api2.doSomething();
        Lib16Api2Impl22Impl lib16api2impl22impl;
        lib16api2impl22impl.doSomething();
        Lib16Api2Impl23Api1 lib16api2impl23api1;
        lib16api2impl23api1.doSomething();
        Lib16Api2Impl23Api2 lib16api2impl23api2;
        lib16api2impl23api2.doSomething();
        Lib16Api2Impl23Api3 lib16api2impl23api3;
        lib16api2impl23api3.doSomething();
        visited = 1;
    }
}

