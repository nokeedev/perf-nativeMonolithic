// GENERATED SOURCE FILE

#include "lib10core1_private.h"
#include "lib10core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib10core1impl10api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core1impl10api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core1impl10api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core1impl10api34(int a, int b) {
    return a + b;
}

int Lib10Core1Impl10Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib10Core1Impl10Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib10Core1Impl10Api3" << std::endl;
        Lib10Core1Impl10Impl lib10core1impl10impl;
        lib10core1impl10impl.doSomething();
        Lib10Core1Impl11Api1 lib10core1impl11api1;
        lib10core1impl11api1.doSomething();
        Lib10Core1Impl11Api2 lib10core1impl11api2;
        lib10core1impl11api2.doSomething();
        Lib10Core1Impl11Api3 lib10core1impl11api3;
        lib10core1impl11api3.doSomething();
        visited = 1;
    }
}

