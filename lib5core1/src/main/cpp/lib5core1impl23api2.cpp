// GENERATED SOURCE FILE

#include "lib5core1_private.h"
#include "lib5core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib5core1impl23api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core1impl23api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core1impl23api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core1impl23api24(int a, int b) {
    return a + b;
}

int Lib5Core1Impl23Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib5Core1Impl23Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib5Core1Impl23Api2" << std::endl;
        Lib5Core1Impl23Impl lib5core1impl23impl;
        lib5core1impl23impl.doSomething();
        Lib5Core1Impl24Api1 lib5core1impl24api1;
        lib5core1impl24api1.doSomething();
        Lib5Core1Impl24Api2 lib5core1impl24api2;
        lib5core1impl24api2.doSomething();
        Lib5Core1Impl24Api3 lib5core1impl24api3;
        lib5core1impl24api3.doSomething();
        visited = 1;
    }
}

