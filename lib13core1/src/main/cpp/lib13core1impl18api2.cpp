// GENERATED SOURCE FILE

#include "lib13core1_private.h"
#include "lib13core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib13core1impl18api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core1impl18api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core1impl18api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core1impl18api24(int a, int b) {
    return a + b;
}

int Lib13Core1Impl18Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib13Core1Impl18Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib13Core1Impl18Api2" << std::endl;
        Lib13Core1Impl18Impl lib13core1impl18impl;
        lib13core1impl18impl.doSomething();
        Lib13Core1Impl19Api1 lib13core1impl19api1;
        lib13core1impl19api1.doSomething();
        Lib13Core1Impl19Api2 lib13core1impl19api2;
        lib13core1impl19api2.doSomething();
        Lib13Core1Impl19Api3 lib13core1impl19api3;
        lib13core1impl19api3.doSomething();
        visited = 1;
    }
}

