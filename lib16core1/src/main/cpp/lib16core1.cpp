// GENERATED SOURCE FILE

#include "lib16core1_impl.h"
#include "lib16core1_private.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib16core11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core14(int a, int b) {
    return a + b;
}

int Lib16Core1::visited = 0;

/*
 * Here is a function.
 */
void Lib16Core1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib16Core1" << std::endl;
        Lib16Core1Impl1Api1 lib16core1impl1api1;
        lib16core1impl1api1.doSomething();
        Lib16Core1Impl1Api2 lib16core1impl1api2;
        lib16core1impl1api2.doSomething();
        Lib16Core1Impl1Api3 lib16core1impl1api3;
        lib16core1impl1api3.doSomething();
        visited = 1;
    }
}

