// GENERATED SOURCE FILE

#include "lib13core1_private.h"
#include "lib13core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib13core1impl17api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core1impl17api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core1impl17api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core1impl17api24(int a, int b) {
    return a + b;
}

int Lib13Core1Impl17Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib13Core1Impl17Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib13Core1Impl17Api2" << std::endl;
        Lib13Core1Impl17Impl lib13core1impl17impl;
        lib13core1impl17impl.doSomething();
        Lib13Core1Impl18Api1 lib13core1impl18api1;
        lib13core1impl18api1.doSomething();
        Lib13Core1Impl18Api2 lib13core1impl18api2;
        lib13core1impl18api2.doSomething();
        Lib13Core1Impl18Api3 lib13core1impl18api3;
        lib13core1impl18api3.doSomething();
        visited = 1;
    }
}

