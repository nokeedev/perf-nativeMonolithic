// GENERATED SOURCE FILE

#include "lib14core1_private.h"
#include "lib14core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib14core1impl30api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core1impl30api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core1impl30api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core1impl30api34(int a, int b) {
    return a + b;
}

int Lib14Core1Impl30Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib14Core1Impl30Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib14Core1Impl30Api3" << std::endl;
        Lib14Core1Impl30Impl lib14core1impl30impl;
        lib14core1impl30impl.doSomething();
        Lib14Core1Impl31Api1 lib14core1impl31api1;
        lib14core1impl31api1.doSomething();
        Lib14Core1Impl31Api2 lib14core1impl31api2;
        lib14core1impl31api2.doSomething();
        Lib14Core1Impl31Api3 lib14core1impl31api3;
        lib14core1impl31api3.doSomething();
        visited = 1;
    }
}

