// GENERATED SOURCE FILE

#include "lib10core1_impl.h"
#include "lib10core1_private.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib10core11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core14(int a, int b) {
    return a + b;
}

int Lib10Core1::visited = 0;

/*
 * Here is a function.
 */
void Lib10Core1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib10Core1" << std::endl;
        Lib10Core1Impl1Api1 lib10core1impl1api1;
        lib10core1impl1api1.doSomething();
        Lib10Core1Impl1Api2 lib10core1impl1api2;
        lib10core1impl1api2.doSomething();
        Lib10Core1Impl1Api3 lib10core1impl1api3;
        lib10core1impl1api3.doSomething();
        visited = 1;
    }
}

