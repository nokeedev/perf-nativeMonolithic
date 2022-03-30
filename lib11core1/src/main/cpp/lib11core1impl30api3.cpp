// GENERATED SOURCE FILE

#include "lib11core1_private.h"
#include "lib11core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib11core1impl30api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core1impl30api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core1impl30api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core1impl30api34(int a, int b) {
    return a + b;
}

int Lib11Core1Impl30Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib11Core1Impl30Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib11Core1Impl30Api3" << std::endl;
        Lib11Core1Impl30Impl lib11core1impl30impl;
        lib11core1impl30impl.doSomething();
        Lib11Core1Impl31Api1 lib11core1impl31api1;
        lib11core1impl31api1.doSomething();
        Lib11Core1Impl31Api2 lib11core1impl31api2;
        lib11core1impl31api2.doSomething();
        Lib11Core1Impl31Api3 lib11core1impl31api3;
        lib11core1impl31api3.doSomething();
        visited = 1;
    }
}

