// GENERATED SOURCE FILE

#include "lib14core1_private.h"
#include "lib14core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib14core1impl23api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core1impl23api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core1impl23api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core1impl23api24(int a, int b) {
    return a + b;
}

int Lib14Core1Impl23Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib14Core1Impl23Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib14Core1Impl23Api2" << std::endl;
        Lib14Core1Impl23Impl lib14core1impl23impl;
        lib14core1impl23impl.doSomething();
        Lib14Core1Impl24Api1 lib14core1impl24api1;
        lib14core1impl24api1.doSomething();
        Lib14Core1Impl24Api2 lib14core1impl24api2;
        lib14core1impl24api2.doSomething();
        Lib14Core1Impl24Api3 lib14core1impl24api3;
        lib14core1impl24api3.doSomething();
        visited = 1;
    }
}

