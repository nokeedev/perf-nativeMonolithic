// GENERATED SOURCE FILE

#include "lib8core1_private.h"
#include "lib8core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib8core1impl29api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core1impl29api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core1impl29api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core1impl29api24(int a, int b) {
    return a + b;
}

int Lib8Core1Impl29Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib8Core1Impl29Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib8Core1Impl29Api2" << std::endl;
        Lib8Core1Impl29Impl lib8core1impl29impl;
        lib8core1impl29impl.doSomething();
        Lib8Core1Impl30Api1 lib8core1impl30api1;
        lib8core1impl30api1.doSomething();
        Lib8Core1Impl30Api2 lib8core1impl30api2;
        lib8core1impl30api2.doSomething();
        Lib8Core1Impl30Api3 lib8core1impl30api3;
        lib8core1impl30api3.doSomething();
        visited = 1;
    }
}

