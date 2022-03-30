// GENERATED SOURCE FILE

#include "lib6core1_private.h"
#include "lib6core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib6core1impl2api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6core1impl2api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6core1impl2api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6core1impl2api24(int a, int b) {
    return a + b;
}

int Lib6Core1Impl2Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib6Core1Impl2Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib6Core1Impl2Api2" << std::endl;
        Lib6Core1Impl2Impl lib6core1impl2impl;
        lib6core1impl2impl.doSomething();
        Lib6Core1Impl3Api1 lib6core1impl3api1;
        lib6core1impl3api1.doSomething();
        Lib6Core1Impl3Api2 lib6core1impl3api2;
        lib6core1impl3api2.doSomething();
        Lib6Core1Impl3Api3 lib6core1impl3api3;
        lib6core1impl3api3.doSomething();
        visited = 1;
    }
}

