// GENERATED SOURCE FILE

#include "lib2core1_private.h"
#include "lib2core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib2core1impl8api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core1impl8api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core1impl8api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core1impl8api14(int a, int b) {
    return a + b;
}

int Lib2Core1Impl8Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib2Core1Impl8Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib2Core1Impl8Api1" << std::endl;
        Lib2Core1Impl9Api1 lib2core1impl9api1;
        lib2core1impl9api1.doSomething();
        Lib2Core1Impl8Impl lib2core1impl8impl;
        lib2core1impl8impl.doSomething();
        Lib2Core1Impl9Api2 lib2core1impl9api2;
        lib2core1impl9api2.doSomething();
        Lib2Core1Impl9Api3 lib2core1impl9api3;
        lib2core1impl9api3.doSomething();
        visited = 1;
    }
}

