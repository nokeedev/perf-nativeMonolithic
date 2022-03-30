// GENERATED SOURCE FILE

#include "lib17api2_private.h"
#include "lib17api2_impl.h"
#include "lib17core.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17api2impl22api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api2impl22api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api2impl22api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api2impl22api34(int a, int b) {
    return a + b;
}

int Lib17Api2Impl22Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib17Api2Impl22Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17Api2Impl22Api3" << std::endl;
        Lib17Core lib17core;
        lib17core.doSomething();
        Lib17Api2Impl22Impl lib17api2impl22impl;
        lib17api2impl22impl.doSomething();
        Lib17Api2Impl23Api1 lib17api2impl23api1;
        lib17api2impl23api1.doSomething();
        Lib17Api2Impl23Api2 lib17api2impl23api2;
        lib17api2impl23api2.doSomething();
        Lib17Api2Impl23Api3 lib17api2impl23api3;
        lib17api2impl23api3.doSomething();
        visited = 1;
    }
}

