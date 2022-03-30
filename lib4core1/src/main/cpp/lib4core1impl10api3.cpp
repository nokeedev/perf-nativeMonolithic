// GENERATED SOURCE FILE

#include "lib4core1_private.h"
#include "lib4core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib4core1impl10api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core1impl10api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core1impl10api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core1impl10api34(int a, int b) {
    return a + b;
}

int Lib4Core1Impl10Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib4Core1Impl10Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib4Core1Impl10Api3" << std::endl;
        Lib4Core1Impl10Impl lib4core1impl10impl;
        lib4core1impl10impl.doSomething();
        Lib4Core1Impl11Api1 lib4core1impl11api1;
        lib4core1impl11api1.doSomething();
        Lib4Core1Impl11Api2 lib4core1impl11api2;
        lib4core1impl11api2.doSomething();
        Lib4Core1Impl11Api3 lib4core1impl11api3;
        lib4core1impl11api3.doSomething();
        visited = 1;
    }
}

