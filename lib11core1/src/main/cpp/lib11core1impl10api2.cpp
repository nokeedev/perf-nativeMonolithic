// GENERATED SOURCE FILE

#include "lib11core1_private.h"
#include "lib11core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib11core1impl10api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core1impl10api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core1impl10api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core1impl10api24(int a, int b) {
    return a + b;
}

int Lib11Core1Impl10Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib11Core1Impl10Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib11Core1Impl10Api2" << std::endl;
        Lib11Core1Impl10Impl lib11core1impl10impl;
        lib11core1impl10impl.doSomething();
        Lib11Core1Impl11Api1 lib11core1impl11api1;
        lib11core1impl11api1.doSomething();
        Lib11Core1Impl11Api2 lib11core1impl11api2;
        lib11core1impl11api2.doSomething();
        Lib11Core1Impl11Api3 lib11core1impl11api3;
        lib11core1impl11api3.doSomething();
        visited = 1;
    }
}

