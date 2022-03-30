// GENERATED SOURCE FILE

#include "lib11core1_private.h"
#include "lib11core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib11core1impl7api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core1impl7api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core1impl7api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core1impl7api34(int a, int b) {
    return a + b;
}

int Lib11Core1Impl7Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib11Core1Impl7Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib11Core1Impl7Api3" << std::endl;
        Lib11Core1Impl7Impl lib11core1impl7impl;
        lib11core1impl7impl.doSomething();
        Lib11Core1Impl8Api1 lib11core1impl8api1;
        lib11core1impl8api1.doSomething();
        Lib11Core1Impl8Api2 lib11core1impl8api2;
        lib11core1impl8api2.doSomething();
        Lib11Core1Impl8Api3 lib11core1impl8api3;
        lib11core1impl8api3.doSomething();
        visited = 1;
    }
}

