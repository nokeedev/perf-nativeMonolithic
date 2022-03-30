// GENERATED SOURCE FILE

#include "lib6core1_private.h"
#include "lib6core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib6core1impl30api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6core1impl30api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6core1impl30api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6core1impl30api24(int a, int b) {
    return a + b;
}

int Lib6Core1Impl30Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib6Core1Impl30Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib6Core1Impl30Api2" << std::endl;
        Lib6Core1Impl30Impl lib6core1impl30impl;
        lib6core1impl30impl.doSomething();
        Lib6Core1Impl31Api1 lib6core1impl31api1;
        lib6core1impl31api1.doSomething();
        Lib6Core1Impl31Api2 lib6core1impl31api2;
        lib6core1impl31api2.doSomething();
        Lib6Core1Impl31Api3 lib6core1impl31api3;
        lib6core1impl31api3.doSomething();
        visited = 1;
    }
}

