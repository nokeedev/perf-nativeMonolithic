// GENERATED SOURCE FILE

#include "lib12core1_private.h"
#include "lib12core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib12core1impl29api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12core1impl29api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12core1impl29api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12core1impl29api34(int a, int b) {
    return a + b;
}

int Lib12Core1Impl29Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib12Core1Impl29Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib12Core1Impl29Api3" << std::endl;
        Lib12Core1Impl29Impl lib12core1impl29impl;
        lib12core1impl29impl.doSomething();
        Lib12Core1Impl30Api1 lib12core1impl30api1;
        lib12core1impl30api1.doSomething();
        Lib12Core1Impl30Api2 lib12core1impl30api2;
        lib12core1impl30api2.doSomething();
        Lib12Core1Impl30Api3 lib12core1impl30api3;
        lib12core1impl30api3.doSomething();
        visited = 1;
    }
}

