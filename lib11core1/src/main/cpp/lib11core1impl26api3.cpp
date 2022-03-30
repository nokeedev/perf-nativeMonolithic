// GENERATED SOURCE FILE

#include "lib11core1_private.h"
#include "lib11core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib11core1impl26api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core1impl26api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core1impl26api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core1impl26api34(int a, int b) {
    return a + b;
}

int Lib11Core1Impl26Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib11Core1Impl26Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib11Core1Impl26Api3" << std::endl;
        Lib11Core1Impl26Impl lib11core1impl26impl;
        lib11core1impl26impl.doSomething();
        Lib11Core1Impl27Api1 lib11core1impl27api1;
        lib11core1impl27api1.doSomething();
        Lib11Core1Impl27Api2 lib11core1impl27api2;
        lib11core1impl27api2.doSomething();
        Lib11Core1Impl27Api3 lib11core1impl27api3;
        lib11core1impl27api3.doSomething();
        visited = 1;
    }
}

