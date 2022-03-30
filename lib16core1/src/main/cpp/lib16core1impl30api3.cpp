// GENERATED SOURCE FILE

#include "lib16core1_private.h"
#include "lib16core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib16core1impl30api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core1impl30api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core1impl30api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core1impl30api34(int a, int b) {
    return a + b;
}

int Lib16Core1Impl30Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib16Core1Impl30Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib16Core1Impl30Api3" << std::endl;
        Lib16Core1Impl30Impl lib16core1impl30impl;
        lib16core1impl30impl.doSomething();
        Lib16Core1Impl31Api1 lib16core1impl31api1;
        lib16core1impl31api1.doSomething();
        Lib16Core1Impl31Api2 lib16core1impl31api2;
        lib16core1impl31api2.doSomething();
        Lib16Core1Impl31Api3 lib16core1impl31api3;
        lib16core1impl31api3.doSomething();
        visited = 1;
    }
}

