// GENERATED SOURCE FILE

#include "lib11core1_private.h"
#include "lib11core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib11core1impl17api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core1impl17api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core1impl17api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core1impl17api24(int a, int b) {
    return a + b;
}

int Lib11Core1Impl17Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib11Core1Impl17Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib11Core1Impl17Api2" << std::endl;
        Lib11Core1Impl17Impl lib11core1impl17impl;
        lib11core1impl17impl.doSomething();
        Lib11Core1Impl18Api1 lib11core1impl18api1;
        lib11core1impl18api1.doSomething();
        Lib11Core1Impl18Api2 lib11core1impl18api2;
        lib11core1impl18api2.doSomething();
        Lib11Core1Impl18Api3 lib11core1impl18api3;
        lib11core1impl18api3.doSomething();
        visited = 1;
    }
}

