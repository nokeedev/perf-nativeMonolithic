// GENERATED SOURCE FILE

#include "lib13core1_private.h"
#include "lib13core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib13core1impl19api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core1impl19api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core1impl19api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core1impl19api34(int a, int b) {
    return a + b;
}

int Lib13Core1Impl19Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib13Core1Impl19Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib13Core1Impl19Api3" << std::endl;
        Lib13Core1Impl19Impl lib13core1impl19impl;
        lib13core1impl19impl.doSomething();
        Lib13Core1Impl20Api1 lib13core1impl20api1;
        lib13core1impl20api1.doSomething();
        Lib13Core1Impl20Api2 lib13core1impl20api2;
        lib13core1impl20api2.doSomething();
        Lib13Core1Impl20Api3 lib13core1impl20api3;
        lib13core1impl20api3.doSomething();
        visited = 1;
    }
}

