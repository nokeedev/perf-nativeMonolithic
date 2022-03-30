// GENERATED SOURCE FILE

#include "lib4core1_private.h"
#include "lib4core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib4core1impl3api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core1impl3api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core1impl3api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core1impl3api24(int a, int b) {
    return a + b;
}

int Lib4Core1Impl3Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib4Core1Impl3Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib4Core1Impl3Api2" << std::endl;
        Lib4Core1Impl3Impl lib4core1impl3impl;
        lib4core1impl3impl.doSomething();
        Lib4Core1Impl4Api1 lib4core1impl4api1;
        lib4core1impl4api1.doSomething();
        Lib4Core1Impl4Api2 lib4core1impl4api2;
        lib4core1impl4api2.doSomething();
        Lib4Core1Impl4Api3 lib4core1impl4api3;
        lib4core1impl4api3.doSomething();
        visited = 1;
    }
}

