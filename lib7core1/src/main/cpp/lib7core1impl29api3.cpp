// GENERATED SOURCE FILE

#include "lib7core1_private.h"
#include "lib7core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib7core1impl29api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core1impl29api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core1impl29api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core1impl29api34(int a, int b) {
    return a + b;
}

int Lib7Core1Impl29Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib7Core1Impl29Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib7Core1Impl29Api3" << std::endl;
        Lib7Core1Impl29Impl lib7core1impl29impl;
        lib7core1impl29impl.doSomething();
        Lib7Core1Impl30Api1 lib7core1impl30api1;
        lib7core1impl30api1.doSomething();
        Lib7Core1Impl30Api2 lib7core1impl30api2;
        lib7core1impl30api2.doSomething();
        Lib7Core1Impl30Api3 lib7core1impl30api3;
        lib7core1impl30api3.doSomething();
        visited = 1;
    }
}

