// GENERATED SOURCE FILE

#include "lib11core1_private.h"
#include "lib11core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib11core1impl14api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core1impl14api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core1impl14api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core1impl14api34(int a, int b) {
    return a + b;
}

int Lib11Core1Impl14Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib11Core1Impl14Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib11Core1Impl14Api3" << std::endl;
        Lib11Core1Impl14Impl lib11core1impl14impl;
        lib11core1impl14impl.doSomething();
        Lib11Core1Impl15Api1 lib11core1impl15api1;
        lib11core1impl15api1.doSomething();
        Lib11Core1Impl15Api2 lib11core1impl15api2;
        lib11core1impl15api2.doSomething();
        Lib11Core1Impl15Api3 lib11core1impl15api3;
        lib11core1impl15api3.doSomething();
        visited = 1;
    }
}

