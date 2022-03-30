// GENERATED SOURCE FILE

#include "lib10core1_private.h"
#include "lib10core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib10core1impl9api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core1impl9api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core1impl9api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core1impl9api34(int a, int b) {
    return a + b;
}

int Lib10Core1Impl9Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib10Core1Impl9Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib10Core1Impl9Api3" << std::endl;
        Lib10Core1Impl9Impl lib10core1impl9impl;
        lib10core1impl9impl.doSomething();
        Lib10Core1Impl10Api1 lib10core1impl10api1;
        lib10core1impl10api1.doSomething();
        Lib10Core1Impl10Api2 lib10core1impl10api2;
        lib10core1impl10api2.doSomething();
        Lib10Core1Impl10Api3 lib10core1impl10api3;
        lib10core1impl10api3.doSomething();
        visited = 1;
    }
}

