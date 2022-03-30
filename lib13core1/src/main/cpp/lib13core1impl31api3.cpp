// GENERATED SOURCE FILE

#include "lib13core1_private.h"
#include "lib13core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib13core1impl31api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core1impl31api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core1impl31api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core1impl31api34(int a, int b) {
    return a + b;
}

int Lib13Core1Impl31Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib13Core1Impl31Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib13Core1Impl31Api3" << std::endl;
        Lib13Core1Impl31Impl lib13core1impl31impl;
        lib13core1impl31impl.doSomething();
        Lib13Core1Impl32Api1 lib13core1impl32api1;
        lib13core1impl32api1.doSomething();
        Lib13Core1Impl32Api2 lib13core1impl32api2;
        lib13core1impl32api2.doSomething();
        Lib13Core1Impl32Api3 lib13core1impl32api3;
        lib13core1impl32api3.doSomething();
        visited = 1;
    }
}

