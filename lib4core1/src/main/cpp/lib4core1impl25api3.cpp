// GENERATED SOURCE FILE

#include "lib4core1_private.h"
#include "lib4core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib4core1impl25api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core1impl25api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core1impl25api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core1impl25api34(int a, int b) {
    return a + b;
}

int Lib4Core1Impl25Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib4Core1Impl25Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib4Core1Impl25Api3" << std::endl;
        Lib4Core1Impl25Impl lib4core1impl25impl;
        lib4core1impl25impl.doSomething();
        Lib4Core1Impl26Api1 lib4core1impl26api1;
        lib4core1impl26api1.doSomething();
        Lib4Core1Impl26Api2 lib4core1impl26api2;
        lib4core1impl26api2.doSomething();
        Lib4Core1Impl26Api3 lib4core1impl26api3;
        lib4core1impl26api3.doSomething();
        visited = 1;
    }
}

