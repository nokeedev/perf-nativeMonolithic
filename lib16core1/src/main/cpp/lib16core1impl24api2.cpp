// GENERATED SOURCE FILE

#include "lib16core1_private.h"
#include "lib16core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib16core1impl24api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core1impl24api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core1impl24api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core1impl24api24(int a, int b) {
    return a + b;
}

int Lib16Core1Impl24Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib16Core1Impl24Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib16Core1Impl24Api2" << std::endl;
        Lib16Core1Impl24Impl lib16core1impl24impl;
        lib16core1impl24impl.doSomething();
        Lib16Core1Impl25Api1 lib16core1impl25api1;
        lib16core1impl25api1.doSomething();
        Lib16Core1Impl25Api2 lib16core1impl25api2;
        lib16core1impl25api2.doSomething();
        Lib16Core1Impl25Api3 lib16core1impl25api3;
        lib16core1impl25api3.doSomething();
        visited = 1;
    }
}

