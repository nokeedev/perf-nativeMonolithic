// GENERATED SOURCE FILE

#include "lib10core1_private.h"
#include "lib10core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib10core1impl18api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core1impl18api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core1impl18api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core1impl18api24(int a, int b) {
    return a + b;
}

int Lib10Core1Impl18Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib10Core1Impl18Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib10Core1Impl18Api2" << std::endl;
        Lib10Core1Impl18Impl lib10core1impl18impl;
        lib10core1impl18impl.doSomething();
        Lib10Core1Impl19Api1 lib10core1impl19api1;
        lib10core1impl19api1.doSomething();
        Lib10Core1Impl19Api2 lib10core1impl19api2;
        lib10core1impl19api2.doSomething();
        Lib10Core1Impl19Api3 lib10core1impl19api3;
        lib10core1impl19api3.doSomething();
        visited = 1;
    }
}

