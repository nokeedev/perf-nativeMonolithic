// GENERATED SOURCE FILE

#include "lib10core1_private.h"
#include "lib10core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib10core1impl29api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core1impl29api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core1impl29api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core1impl29api34(int a, int b) {
    return a + b;
}

int Lib10Core1Impl29Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib10Core1Impl29Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib10Core1Impl29Api3" << std::endl;
        Lib10Core1Impl29Impl lib10core1impl29impl;
        lib10core1impl29impl.doSomething();
        Lib10Core1Impl30Api1 lib10core1impl30api1;
        lib10core1impl30api1.doSomething();
        Lib10Core1Impl30Api2 lib10core1impl30api2;
        lib10core1impl30api2.doSomething();
        Lib10Core1Impl30Api3 lib10core1impl30api3;
        lib10core1impl30api3.doSomething();
        visited = 1;
    }
}

