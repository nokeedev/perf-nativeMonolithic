// GENERATED SOURCE FILE

#include "lib16core1_private.h"
#include "lib16core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib16core1impl28api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core1impl28api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core1impl28api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core1impl28api24(int a, int b) {
    return a + b;
}

int Lib16Core1Impl28Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib16Core1Impl28Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib16Core1Impl28Api2" << std::endl;
        Lib16Core1Impl28Impl lib16core1impl28impl;
        lib16core1impl28impl.doSomething();
        Lib16Core1Impl29Api1 lib16core1impl29api1;
        lib16core1impl29api1.doSomething();
        Lib16Core1Impl29Api2 lib16core1impl29api2;
        lib16core1impl29api2.doSomething();
        Lib16Core1Impl29Api3 lib16core1impl29api3;
        lib16core1impl29api3.doSomething();
        visited = 1;
    }
}

