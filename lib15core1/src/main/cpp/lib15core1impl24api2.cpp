// GENERATED SOURCE FILE

#include "lib15core1_private.h"
#include "lib15core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib15core1impl24api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core1impl24api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core1impl24api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core1impl24api24(int a, int b) {
    return a + b;
}

int Lib15Core1Impl24Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib15Core1Impl24Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib15Core1Impl24Api2" << std::endl;
        Lib15Core1Impl24Impl lib15core1impl24impl;
        lib15core1impl24impl.doSomething();
        Lib15Core1Impl25Api1 lib15core1impl25api1;
        lib15core1impl25api1.doSomething();
        Lib15Core1Impl25Api2 lib15core1impl25api2;
        lib15core1impl25api2.doSomething();
        Lib15Core1Impl25Api3 lib15core1impl25api3;
        lib15core1impl25api3.doSomething();
        visited = 1;
    }
}

