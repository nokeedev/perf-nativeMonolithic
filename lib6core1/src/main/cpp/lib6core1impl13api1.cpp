// GENERATED SOURCE FILE

#include "lib6core1_private.h"
#include "lib6core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib6core1impl13api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6core1impl13api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6core1impl13api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6core1impl13api14(int a, int b) {
    return a + b;
}

int Lib6Core1Impl13Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib6Core1Impl13Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib6Core1Impl13Api1" << std::endl;
        Lib6Core1Impl14Api1 lib6core1impl14api1;
        lib6core1impl14api1.doSomething();
        Lib6Core1Impl13Impl lib6core1impl13impl;
        lib6core1impl13impl.doSomething();
        Lib6Core1Impl14Api2 lib6core1impl14api2;
        lib6core1impl14api2.doSomething();
        Lib6Core1Impl14Api3 lib6core1impl14api3;
        lib6core1impl14api3.doSomething();
        visited = 1;
    }
}

