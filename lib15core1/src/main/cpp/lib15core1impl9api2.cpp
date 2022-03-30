// GENERATED SOURCE FILE

#include "lib15core1_private.h"
#include "lib15core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib15core1impl9api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core1impl9api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core1impl9api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core1impl9api24(int a, int b) {
    return a + b;
}

int Lib15Core1Impl9Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib15Core1Impl9Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib15Core1Impl9Api2" << std::endl;
        Lib15Core1Impl9Impl lib15core1impl9impl;
        lib15core1impl9impl.doSomething();
        Lib15Core1Impl10Api1 lib15core1impl10api1;
        lib15core1impl10api1.doSomething();
        Lib15Core1Impl10Api2 lib15core1impl10api2;
        lib15core1impl10api2.doSomething();
        Lib15Core1Impl10Api3 lib15core1impl10api3;
        lib15core1impl10api3.doSomething();
        visited = 1;
    }
}

