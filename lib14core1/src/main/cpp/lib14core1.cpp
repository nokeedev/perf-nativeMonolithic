// GENERATED SOURCE FILE

#include "lib14core1_impl.h"
#include "lib14core1_private.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib14core11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core14(int a, int b) {
    return a + b;
}

int Lib14Core1::visited = 0;

/*
 * Here is a function.
 */
void Lib14Core1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib14Core1" << std::endl;
        Lib14Core1Impl1Api1 lib14core1impl1api1;
        lib14core1impl1api1.doSomething();
        Lib14Core1Impl1Api2 lib14core1impl1api2;
        lib14core1impl1api2.doSomething();
        Lib14Core1Impl1Api3 lib14core1impl1api3;
        lib14core1impl1api3.doSomething();
        visited = 1;
    }
}

