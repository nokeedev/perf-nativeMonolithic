// GENERATED SOURCE FILE

#include "lib7core1_private.h"
#include "lib7core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib7core1impl31api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core1impl31api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core1impl31api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core1impl31api34(int a, int b) {
    return a + b;
}

int Lib7Core1Impl31Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib7Core1Impl31Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib7Core1Impl31Api3" << std::endl;
        Lib7Core1Impl31Impl lib7core1impl31impl;
        lib7core1impl31impl.doSomething();
        Lib7Core1Impl32Api1 lib7core1impl32api1;
        lib7core1impl32api1.doSomething();
        Lib7Core1Impl32Api2 lib7core1impl32api2;
        lib7core1impl32api2.doSomething();
        Lib7Core1Impl32Api3 lib7core1impl32api3;
        lib7core1impl32api3.doSomething();
        visited = 1;
    }
}

