// GENERATED SOURCE FILE

#include "lib2core1_private.h"
#include "lib2core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib2core1impl14api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core1impl14api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core1impl14api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core1impl14api14(int a, int b) {
    return a + b;
}

int Lib2Core1Impl14Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib2Core1Impl14Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib2Core1Impl14Api1" << std::endl;
        Lib2Core1Impl15Api1 lib2core1impl15api1;
        lib2core1impl15api1.doSomething();
        Lib2Core1Impl14Impl lib2core1impl14impl;
        lib2core1impl14impl.doSomething();
        Lib2Core1Impl15Api2 lib2core1impl15api2;
        lib2core1impl15api2.doSomething();
        Lib2Core1Impl15Api3 lib2core1impl15api3;
        lib2core1impl15api3.doSomething();
        visited = 1;
    }
}

