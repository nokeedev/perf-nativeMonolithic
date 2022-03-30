// GENERATED SOURCE FILE

#include "lib5core1_private.h"
#include "lib5core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib5core1impl10api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core1impl10api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core1impl10api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core1impl10api34(int a, int b) {
    return a + b;
}

int Lib5Core1Impl10Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib5Core1Impl10Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib5Core1Impl10Api3" << std::endl;
        Lib5Core1Impl10Impl lib5core1impl10impl;
        lib5core1impl10impl.doSomething();
        Lib5Core1Impl11Api1 lib5core1impl11api1;
        lib5core1impl11api1.doSomething();
        Lib5Core1Impl11Api2 lib5core1impl11api2;
        lib5core1impl11api2.doSomething();
        Lib5Core1Impl11Api3 lib5core1impl11api3;
        lib5core1impl11api3.doSomething();
        visited = 1;
    }
}

