// GENERATED SOURCE FILE

#include "lib15core1_private.h"
#include "lib15core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib15core1impl9api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core1impl9api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core1impl9api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core1impl9api34(int a, int b) {
    return a + b;
}

int Lib15Core1Impl9Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib15Core1Impl9Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib15Core1Impl9Api3" << std::endl;
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

