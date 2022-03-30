// GENERATED SOURCE FILE

#include "lib16core2_private.h"
#include "lib16core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib16core2impl21api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core2impl21api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core2impl21api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core2impl21api24(int a, int b) {
    return a + b;
}

int Lib16Core2Impl21Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib16Core2Impl21Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib16Core2Impl21Api2" << std::endl;
        Lib16Core2Impl21Impl lib16core2impl21impl;
        lib16core2impl21impl.doSomething();
        Lib16Core2Impl22Api1 lib16core2impl22api1;
        lib16core2impl22api1.doSomething();
        Lib16Core2Impl22Api2 lib16core2impl22api2;
        lib16core2impl22api2.doSomething();
        Lib16Core2Impl22Api3 lib16core2impl22api3;
        lib16core2impl22api3.doSomething();
        visited = 1;
    }
}

