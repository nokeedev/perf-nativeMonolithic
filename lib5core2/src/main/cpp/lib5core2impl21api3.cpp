// GENERATED SOURCE FILE

#include "lib5core2_private.h"
#include "lib5core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib5core2impl21api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core2impl21api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core2impl21api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core2impl21api34(int a, int b) {
    return a + b;
}

int Lib5Core2Impl21Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib5Core2Impl21Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib5Core2Impl21Api3" << std::endl;
        Lib5Core2Impl21Impl lib5core2impl21impl;
        lib5core2impl21impl.doSomething();
        Lib5Core2Impl22Api1 lib5core2impl22api1;
        lib5core2impl22api1.doSomething();
        Lib5Core2Impl22Api2 lib5core2impl22api2;
        lib5core2impl22api2.doSomething();
        Lib5Core2Impl22Api3 lib5core2impl22api3;
        lib5core2impl22api3.doSomething();
        visited = 1;
    }
}

