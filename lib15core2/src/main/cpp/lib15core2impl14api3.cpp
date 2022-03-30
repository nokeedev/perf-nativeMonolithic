// GENERATED SOURCE FILE

#include "lib15core2_private.h"
#include "lib15core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib15core2impl14api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core2impl14api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core2impl14api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core2impl14api34(int a, int b) {
    return a + b;
}

int Lib15Core2Impl14Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib15Core2Impl14Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib15Core2Impl14Api3" << std::endl;
        Lib15Core2Impl14Impl lib15core2impl14impl;
        lib15core2impl14impl.doSomething();
        Lib15Core2Impl15Api1 lib15core2impl15api1;
        lib15core2impl15api1.doSomething();
        Lib15Core2Impl15Api2 lib15core2impl15api2;
        lib15core2impl15api2.doSomething();
        Lib15Core2Impl15Api3 lib15core2impl15api3;
        lib15core2impl15api3.doSomething();
        visited = 1;
    }
}

