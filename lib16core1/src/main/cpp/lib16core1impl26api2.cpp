// GENERATED SOURCE FILE

#include "lib16core1_private.h"
#include "lib16core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib16core1impl26api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core1impl26api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core1impl26api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core1impl26api24(int a, int b) {
    return a + b;
}

int Lib16Core1Impl26Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib16Core1Impl26Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib16Core1Impl26Api2" << std::endl;
        Lib16Core1Impl26Impl lib16core1impl26impl;
        lib16core1impl26impl.doSomething();
        Lib16Core1Impl27Api1 lib16core1impl27api1;
        lib16core1impl27api1.doSomething();
        Lib16Core1Impl27Api2 lib16core1impl27api2;
        lib16core1impl27api2.doSomething();
        Lib16Core1Impl27Api3 lib16core1impl27api3;
        lib16core1impl27api3.doSomething();
        visited = 1;
    }
}

