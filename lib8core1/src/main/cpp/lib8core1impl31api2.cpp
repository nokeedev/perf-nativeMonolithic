// GENERATED SOURCE FILE

#include "lib8core1_private.h"
#include "lib8core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib8core1impl31api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core1impl31api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core1impl31api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core1impl31api24(int a, int b) {
    return a + b;
}

int Lib8Core1Impl31Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib8Core1Impl31Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib8Core1Impl31Api2" << std::endl;
        Lib8Core1Impl31Impl lib8core1impl31impl;
        lib8core1impl31impl.doSomething();
        Lib8Core1Impl32Api1 lib8core1impl32api1;
        lib8core1impl32api1.doSomething();
        Lib8Core1Impl32Api2 lib8core1impl32api2;
        lib8core1impl32api2.doSomething();
        Lib8Core1Impl32Api3 lib8core1impl32api3;
        lib8core1impl32api3.doSomething();
        visited = 1;
    }
}

