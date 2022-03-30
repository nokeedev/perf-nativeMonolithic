// GENERATED SOURCE FILE

#include "lib11core1_impl.h"
#include "lib11core1_private.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib11core11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core14(int a, int b) {
    return a + b;
}

int Lib11Core1::visited = 0;

/*
 * Here is a function.
 */
void Lib11Core1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib11Core1" << std::endl;
        Lib11Core1Impl1Api1 lib11core1impl1api1;
        lib11core1impl1api1.doSomething();
        Lib11Core1Impl1Api2 lib11core1impl1api2;
        lib11core1impl1api2.doSomething();
        Lib11Core1Impl1Api3 lib11core1impl1api3;
        lib11core1impl1api3.doSomething();
        visited = 1;
    }
}

