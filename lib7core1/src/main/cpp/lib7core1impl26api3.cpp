// GENERATED SOURCE FILE

#include "lib7core1_private.h"
#include "lib7core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib7core1impl26api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core1impl26api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core1impl26api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core1impl26api34(int a, int b) {
    return a + b;
}

int Lib7Core1Impl26Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib7Core1Impl26Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib7Core1Impl26Api3" << std::endl;
        Lib7Core1Impl26Impl lib7core1impl26impl;
        lib7core1impl26impl.doSomething();
        Lib7Core1Impl27Api1 lib7core1impl27api1;
        lib7core1impl27api1.doSomething();
        Lib7Core1Impl27Api2 lib7core1impl27api2;
        lib7core1impl27api2.doSomething();
        Lib7Core1Impl27Api3 lib7core1impl27api3;
        lib7core1impl27api3.doSomething();
        visited = 1;
    }
}

