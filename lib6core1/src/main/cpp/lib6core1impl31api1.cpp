// GENERATED SOURCE FILE

#include "lib6core1_private.h"
#include "lib6core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib6core1impl31api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6core1impl31api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6core1impl31api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6core1impl31api14(int a, int b) {
    return a + b;
}

int Lib6Core1Impl31Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib6Core1Impl31Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib6Core1Impl31Api1" << std::endl;
        Lib6Core1Impl32Api1 lib6core1impl32api1;
        lib6core1impl32api1.doSomething();
        Lib6Core1Impl31Impl lib6core1impl31impl;
        lib6core1impl31impl.doSomething();
        Lib6Core1Impl32Api2 lib6core1impl32api2;
        lib6core1impl32api2.doSomething();
        Lib6Core1Impl32Api3 lib6core1impl32api3;
        lib6core1impl32api3.doSomething();
        visited = 1;
    }
}

