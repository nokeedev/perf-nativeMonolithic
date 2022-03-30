// GENERATED SOURCE FILE

#include "lib13core1_private.h"
#include "lib13core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib13core1impl30api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core1impl30api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core1impl30api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core1impl30api24(int a, int b) {
    return a + b;
}

int Lib13Core1Impl30Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib13Core1Impl30Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib13Core1Impl30Api2" << std::endl;
        Lib13Core1Impl30Impl lib13core1impl30impl;
        lib13core1impl30impl.doSomething();
        Lib13Core1Impl31Api1 lib13core1impl31api1;
        lib13core1impl31api1.doSomething();
        Lib13Core1Impl31Api2 lib13core1impl31api2;
        lib13core1impl31api2.doSomething();
        Lib13Core1Impl31Api3 lib13core1impl31api3;
        lib13core1impl31api3.doSomething();
        visited = 1;
    }
}

