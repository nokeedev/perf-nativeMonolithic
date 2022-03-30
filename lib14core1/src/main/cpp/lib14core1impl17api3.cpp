// GENERATED SOURCE FILE

#include "lib14core1_private.h"
#include "lib14core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib14core1impl17api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core1impl17api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core1impl17api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core1impl17api34(int a, int b) {
    return a + b;
}

int Lib14Core1Impl17Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib14Core1Impl17Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib14Core1Impl17Api3" << std::endl;
        Lib14Core1Impl17Impl lib14core1impl17impl;
        lib14core1impl17impl.doSomething();
        Lib14Core1Impl18Api1 lib14core1impl18api1;
        lib14core1impl18api1.doSomething();
        Lib14Core1Impl18Api2 lib14core1impl18api2;
        lib14core1impl18api2.doSomething();
        Lib14Core1Impl18Api3 lib14core1impl18api3;
        lib14core1impl18api3.doSomething();
        visited = 1;
    }
}

