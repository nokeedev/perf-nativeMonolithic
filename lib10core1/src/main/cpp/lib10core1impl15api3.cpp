// GENERATED SOURCE FILE

#include "lib10core1_private.h"
#include "lib10core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib10core1impl15api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core1impl15api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core1impl15api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core1impl15api34(int a, int b) {
    return a + b;
}

int Lib10Core1Impl15Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib10Core1Impl15Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib10Core1Impl15Api3" << std::endl;
        Lib10Core1Impl15Impl lib10core1impl15impl;
        lib10core1impl15impl.doSomething();
        Lib10Core1Impl16Api1 lib10core1impl16api1;
        lib10core1impl16api1.doSomething();
        Lib10Core1Impl16Api2 lib10core1impl16api2;
        lib10core1impl16api2.doSomething();
        Lib10Core1Impl16Api3 lib10core1impl16api3;
        lib10core1impl16api3.doSomething();
        visited = 1;
    }
}

