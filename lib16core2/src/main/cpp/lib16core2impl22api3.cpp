// GENERATED SOURCE FILE

#include "lib16core2_private.h"
#include "lib16core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib16core2impl22api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core2impl22api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core2impl22api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core2impl22api34(int a, int b) {
    return a + b;
}

int Lib16Core2Impl22Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib16Core2Impl22Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib16Core2Impl22Api3" << std::endl;
        Lib16Core2Impl22Impl lib16core2impl22impl;
        lib16core2impl22impl.doSomething();
        Lib16Core2Impl23Api1 lib16core2impl23api1;
        lib16core2impl23api1.doSomething();
        Lib16Core2Impl23Api2 lib16core2impl23api2;
        lib16core2impl23api2.doSomething();
        Lib16Core2Impl23Api3 lib16core2impl23api3;
        lib16core2impl23api3.doSomething();
        visited = 1;
    }
}

