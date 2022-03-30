// GENERATED SOURCE FILE

#include "lib16core1_private.h"
#include "lib16core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib16core1impl17api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core1impl17api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core1impl17api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core1impl17api14(int a, int b) {
    return a + b;
}

int Lib16Core1Impl17Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib16Core1Impl17Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib16Core1Impl17Api1" << std::endl;
        Lib16Core1Impl18Api1 lib16core1impl18api1;
        lib16core1impl18api1.doSomething();
        Lib16Core1Impl17Impl lib16core1impl17impl;
        lib16core1impl17impl.doSomething();
        Lib16Core1Impl18Api2 lib16core1impl18api2;
        lib16core1impl18api2.doSomething();
        Lib16Core1Impl18Api3 lib16core1impl18api3;
        lib16core1impl18api3.doSomething();
        visited = 1;
    }
}

