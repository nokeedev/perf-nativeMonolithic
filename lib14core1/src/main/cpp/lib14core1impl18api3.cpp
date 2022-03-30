// GENERATED SOURCE FILE

#include "lib14core1_private.h"
#include "lib14core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib14core1impl18api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core1impl18api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core1impl18api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core1impl18api34(int a, int b) {
    return a + b;
}

int Lib14Core1Impl18Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib14Core1Impl18Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib14Core1Impl18Api3" << std::endl;
        Lib14Core1Impl18Impl lib14core1impl18impl;
        lib14core1impl18impl.doSomething();
        Lib14Core1Impl19Api1 lib14core1impl19api1;
        lib14core1impl19api1.doSomething();
        Lib14Core1Impl19Api2 lib14core1impl19api2;
        lib14core1impl19api2.doSomething();
        Lib14Core1Impl19Api3 lib14core1impl19api3;
        lib14core1impl19api3.doSomething();
        visited = 1;
    }
}

