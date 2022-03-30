// GENERATED SOURCE FILE

#include "lib10core1_private.h"
#include "lib10core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib10core1impl19api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core1impl19api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core1impl19api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core1impl19api34(int a, int b) {
    return a + b;
}

int Lib10Core1Impl19Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib10Core1Impl19Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib10Core1Impl19Api3" << std::endl;
        Lib10Core1Impl19Impl lib10core1impl19impl;
        lib10core1impl19impl.doSomething();
        Lib10Core1Impl20Api1 lib10core1impl20api1;
        lib10core1impl20api1.doSomething();
        Lib10Core1Impl20Api2 lib10core1impl20api2;
        lib10core1impl20api2.doSomething();
        Lib10Core1Impl20Api3 lib10core1impl20api3;
        lib10core1impl20api3.doSomething();
        visited = 1;
    }
}

