// GENERATED SOURCE FILE

#include "lib4core1_private.h"
#include "lib4core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib4core1impl20api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core1impl20api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core1impl20api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core1impl20api34(int a, int b) {
    return a + b;
}

int Lib4Core1Impl20Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib4Core1Impl20Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib4Core1Impl20Api3" << std::endl;
        Lib4Core1Impl20Impl lib4core1impl20impl;
        lib4core1impl20impl.doSomething();
        Lib4Core1Impl21Api1 lib4core1impl21api1;
        lib4core1impl21api1.doSomething();
        Lib4Core1Impl21Api2 lib4core1impl21api2;
        lib4core1impl21api2.doSomething();
        Lib4Core1Impl21Api3 lib4core1impl21api3;
        lib4core1impl21api3.doSomething();
        visited = 1;
    }
}

