// GENERATED SOURCE FILE

#include "lib4core1_private.h"
#include "lib4core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib4core1impl9api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core1impl9api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core1impl9api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core1impl9api34(int a, int b) {
    return a + b;
}

int Lib4Core1Impl9Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib4Core1Impl9Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib4Core1Impl9Api3" << std::endl;
        Lib4Core1Impl9Impl lib4core1impl9impl;
        lib4core1impl9impl.doSomething();
        Lib4Core1Impl10Api1 lib4core1impl10api1;
        lib4core1impl10api1.doSomething();
        Lib4Core1Impl10Api2 lib4core1impl10api2;
        lib4core1impl10api2.doSomething();
        Lib4Core1Impl10Api3 lib4core1impl10api3;
        lib4core1impl10api3.doSomething();
        visited = 1;
    }
}

