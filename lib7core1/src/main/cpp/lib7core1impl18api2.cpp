// GENERATED SOURCE FILE

#include "lib7core1_private.h"
#include "lib7core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib7core1impl18api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core1impl18api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core1impl18api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core1impl18api24(int a, int b) {
    return a + b;
}

int Lib7Core1Impl18Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib7Core1Impl18Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib7Core1Impl18Api2" << std::endl;
        Lib7Core1Impl18Impl lib7core1impl18impl;
        lib7core1impl18impl.doSomething();
        Lib7Core1Impl19Api1 lib7core1impl19api1;
        lib7core1impl19api1.doSomething();
        Lib7Core1Impl19Api2 lib7core1impl19api2;
        lib7core1impl19api2.doSomething();
        Lib7Core1Impl19Api3 lib7core1impl19api3;
        lib7core1impl19api3.doSomething();
        visited = 1;
    }
}

