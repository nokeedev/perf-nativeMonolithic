// GENERATED SOURCE FILE

#include "lib14core1_private.h"
#include "lib14core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib14core1impl10api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core1impl10api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core1impl10api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core1impl10api34(int a, int b) {
    return a + b;
}

int Lib14Core1Impl10Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib14Core1Impl10Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib14Core1Impl10Api3" << std::endl;
        Lib14Core1Impl10Impl lib14core1impl10impl;
        lib14core1impl10impl.doSomething();
        Lib14Core1Impl11Api1 lib14core1impl11api1;
        lib14core1impl11api1.doSomething();
        Lib14Core1Impl11Api2 lib14core1impl11api2;
        lib14core1impl11api2.doSomething();
        Lib14Core1Impl11Api3 lib14core1impl11api3;
        lib14core1impl11api3.doSomething();
        visited = 1;
    }
}

