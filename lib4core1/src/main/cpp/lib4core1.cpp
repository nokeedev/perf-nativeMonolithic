// GENERATED SOURCE FILE

#include "lib4core1_impl.h"
#include "lib4core1_private.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib4core11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core14(int a, int b) {
    return a + b;
}

int Lib4Core1::visited = 0;

/*
 * Here is a function.
 */
void Lib4Core1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib4Core1" << std::endl;
        Lib4Core1Impl1Api1 lib4core1impl1api1;
        lib4core1impl1api1.doSomething();
        Lib4Core1Impl1Api2 lib4core1impl1api2;
        lib4core1impl1api2.doSomething();
        Lib4Core1Impl1Api3 lib4core1impl1api3;
        lib4core1impl1api3.doSomething();
        visited = 1;
    }
}

