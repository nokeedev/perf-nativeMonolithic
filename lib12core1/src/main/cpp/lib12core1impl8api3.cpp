// GENERATED SOURCE FILE

#include "lib12core1_private.h"
#include "lib12core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib12core1impl8api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12core1impl8api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12core1impl8api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12core1impl8api34(int a, int b) {
    return a + b;
}

int Lib12Core1Impl8Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib12Core1Impl8Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib12Core1Impl8Api3" << std::endl;
        Lib12Core1Impl8Impl lib12core1impl8impl;
        lib12core1impl8impl.doSomething();
        Lib12Core1Impl9Api1 lib12core1impl9api1;
        lib12core1impl9api1.doSomething();
        Lib12Core1Impl9Api2 lib12core1impl9api2;
        lib12core1impl9api2.doSomething();
        Lib12Core1Impl9Api3 lib12core1impl9api3;
        lib12core1impl9api3.doSomething();
        visited = 1;
    }
}

