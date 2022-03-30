// GENERATED SOURCE FILE

#include "lib16core1_private.h"
#include "lib16core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib16core1impl9api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core1impl9api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core1impl9api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core1impl9api14(int a, int b) {
    return a + b;
}

int Lib16Core1Impl9Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib16Core1Impl9Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib16Core1Impl9Api1" << std::endl;
        Lib16Core1Impl10Api1 lib16core1impl10api1;
        lib16core1impl10api1.doSomething();
        Lib16Core1Impl9Impl lib16core1impl9impl;
        lib16core1impl9impl.doSomething();
        Lib16Core1Impl10Api2 lib16core1impl10api2;
        lib16core1impl10api2.doSomething();
        Lib16Core1Impl10Api3 lib16core1impl10api3;
        lib16core1impl10api3.doSomething();
        visited = 1;
    }
}

