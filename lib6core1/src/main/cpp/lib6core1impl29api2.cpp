// GENERATED SOURCE FILE

#include "lib6core1_private.h"
#include "lib6core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib6core1impl29api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6core1impl29api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6core1impl29api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6core1impl29api24(int a, int b) {
    return a + b;
}

int Lib6Core1Impl29Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib6Core1Impl29Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib6Core1Impl29Api2" << std::endl;
        Lib6Core1Impl29Impl lib6core1impl29impl;
        lib6core1impl29impl.doSomething();
        Lib6Core1Impl30Api1 lib6core1impl30api1;
        lib6core1impl30api1.doSomething();
        Lib6Core1Impl30Api2 lib6core1impl30api2;
        lib6core1impl30api2.doSomething();
        Lib6Core1Impl30Api3 lib6core1impl30api3;
        lib6core1impl30api3.doSomething();
        visited = 1;
    }
}

