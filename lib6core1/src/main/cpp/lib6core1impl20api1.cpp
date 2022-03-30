// GENERATED SOURCE FILE

#include "lib6core1_private.h"
#include "lib6core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib6core1impl20api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6core1impl20api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6core1impl20api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6core1impl20api14(int a, int b) {
    return a + b;
}

int Lib6Core1Impl20Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib6Core1Impl20Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib6Core1Impl20Api1" << std::endl;
        Lib6Core1Impl21Api1 lib6core1impl21api1;
        lib6core1impl21api1.doSomething();
        Lib6Core1Impl20Impl lib6core1impl20impl;
        lib6core1impl20impl.doSomething();
        Lib6Core1Impl21Api2 lib6core1impl21api2;
        lib6core1impl21api2.doSomething();
        Lib6Core1Impl21Api3 lib6core1impl21api3;
        lib6core1impl21api3.doSomething();
        visited = 1;
    }
}

