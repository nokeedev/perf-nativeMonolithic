// GENERATED SOURCE FILE

#include "lib11core2_private.h"
#include "lib11core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib11core2impl20api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core2impl20api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core2impl20api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core2impl20api14(int a, int b) {
    return a + b;
}

int Lib11Core2Impl20Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib11Core2Impl20Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib11Core2Impl20Api1" << std::endl;
        Lib11Core2Impl21Api1 lib11core2impl21api1;
        lib11core2impl21api1.doSomething();
        Lib11Core2Impl20Impl lib11core2impl20impl;
        lib11core2impl20impl.doSomething();
        Lib11Core2Impl21Api2 lib11core2impl21api2;
        lib11core2impl21api2.doSomething();
        Lib11Core2Impl21Api3 lib11core2impl21api3;
        lib11core2impl21api3.doSomething();
        visited = 1;
    }
}

