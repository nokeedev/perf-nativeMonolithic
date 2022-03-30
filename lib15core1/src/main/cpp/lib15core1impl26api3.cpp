// GENERATED SOURCE FILE

#include "lib15core1_private.h"
#include "lib15core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib15core1impl26api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core1impl26api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core1impl26api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core1impl26api34(int a, int b) {
    return a + b;
}

int Lib15Core1Impl26Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib15Core1Impl26Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib15Core1Impl26Api3" << std::endl;
        Lib15Core1Impl26Impl lib15core1impl26impl;
        lib15core1impl26impl.doSomething();
        Lib15Core1Impl27Api1 lib15core1impl27api1;
        lib15core1impl27api1.doSomething();
        Lib15Core1Impl27Api2 lib15core1impl27api2;
        lib15core1impl27api2.doSomething();
        Lib15Core1Impl27Api3 lib15core1impl27api3;
        lib15core1impl27api3.doSomething();
        visited = 1;
    }
}

