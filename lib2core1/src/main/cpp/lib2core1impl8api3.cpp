// GENERATED SOURCE FILE

#include "lib2core1_private.h"
#include "lib2core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib2core1impl8api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core1impl8api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core1impl8api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core1impl8api34(int a, int b) {
    return a + b;
}

int Lib2Core1Impl8Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib2Core1Impl8Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib2Core1Impl8Api3" << std::endl;
        Lib2Core1Impl8Impl lib2core1impl8impl;
        lib2core1impl8impl.doSomething();
        Lib2Core1Impl9Api1 lib2core1impl9api1;
        lib2core1impl9api1.doSomething();
        Lib2Core1Impl9Api2 lib2core1impl9api2;
        lib2core1impl9api2.doSomething();
        Lib2Core1Impl9Api3 lib2core1impl9api3;
        lib2core1impl9api3.doSomething();
        visited = 1;
    }
}

