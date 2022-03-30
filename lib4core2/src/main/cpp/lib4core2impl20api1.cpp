// GENERATED SOURCE FILE

#include "lib4core2_private.h"
#include "lib4core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib4core2impl20api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core2impl20api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core2impl20api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core2impl20api14(int a, int b) {
    return a + b;
}

int Lib4Core2Impl20Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib4Core2Impl20Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib4Core2Impl20Api1" << std::endl;
        Lib4Core2Impl21Api1 lib4core2impl21api1;
        lib4core2impl21api1.doSomething();
        Lib4Core2Impl20Impl lib4core2impl20impl;
        lib4core2impl20impl.doSomething();
        Lib4Core2Impl21Api2 lib4core2impl21api2;
        lib4core2impl21api2.doSomething();
        Lib4Core2Impl21Api3 lib4core2impl21api3;
        lib4core2impl21api3.doSomething();
        visited = 1;
    }
}

