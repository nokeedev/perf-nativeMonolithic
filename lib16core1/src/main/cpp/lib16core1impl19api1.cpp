// GENERATED SOURCE FILE

#include "lib16core1_private.h"
#include "lib16core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib16core1impl19api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core1impl19api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core1impl19api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core1impl19api14(int a, int b) {
    return a + b;
}

int Lib16Core1Impl19Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib16Core1Impl19Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib16Core1Impl19Api1" << std::endl;
        Lib16Core1Impl20Api1 lib16core1impl20api1;
        lib16core1impl20api1.doSomething();
        Lib16Core1Impl19Impl lib16core1impl19impl;
        lib16core1impl19impl.doSomething();
        Lib16Core1Impl20Api2 lib16core1impl20api2;
        lib16core1impl20api2.doSomething();
        Lib16Core1Impl20Api3 lib16core1impl20api3;
        lib16core1impl20api3.doSomething();
        visited = 1;
    }
}
