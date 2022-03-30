// GENERATED SOURCE FILE

#include "lib14core1_private.h"
#include "lib14core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib14core1impl24api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core1impl24api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core1impl24api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core1impl24api14(int a, int b) {
    return a + b;
}

int Lib14Core1Impl24Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib14Core1Impl24Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib14Core1Impl24Api1" << std::endl;
        Lib14Core1Impl25Api1 lib14core1impl25api1;
        lib14core1impl25api1.doSomething();
        Lib14Core1Impl24Impl lib14core1impl24impl;
        lib14core1impl24impl.doSomething();
        Lib14Core1Impl25Api2 lib14core1impl25api2;
        lib14core1impl25api2.doSomething();
        Lib14Core1Impl25Api3 lib14core1impl25api3;
        lib14core1impl25api3.doSomething();
        visited = 1;
    }
}

