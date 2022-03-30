// GENERATED SOURCE FILE

#include "lib2core1_private.h"
#include "lib2core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib2core1impl15api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core1impl15api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core1impl15api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core1impl15api24(int a, int b) {
    return a + b;
}

int Lib2Core1Impl15Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib2Core1Impl15Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib2Core1Impl15Api2" << std::endl;
        Lib2Core1Impl15Impl lib2core1impl15impl;
        lib2core1impl15impl.doSomething();
        Lib2Core1Impl16Api1 lib2core1impl16api1;
        lib2core1impl16api1.doSomething();
        Lib2Core1Impl16Api2 lib2core1impl16api2;
        lib2core1impl16api2.doSomething();
        Lib2Core1Impl16Api3 lib2core1impl16api3;
        lib2core1impl16api3.doSomething();
        visited = 1;
    }
}

