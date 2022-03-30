// GENERATED SOURCE FILE

#include "lib8core1_private.h"
#include "lib8core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib8core1impl15api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core1impl15api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core1impl15api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core1impl15api14(int a, int b) {
    return a + b;
}

int Lib8Core1Impl15Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib8Core1Impl15Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib8Core1Impl15Api1" << std::endl;
        Lib8Core1Impl16Api1 lib8core1impl16api1;
        lib8core1impl16api1.doSomething();
        Lib8Core1Impl15Impl lib8core1impl15impl;
        lib8core1impl15impl.doSomething();
        Lib8Core1Impl16Api2 lib8core1impl16api2;
        lib8core1impl16api2.doSomething();
        Lib8Core1Impl16Api3 lib8core1impl16api3;
        lib8core1impl16api3.doSomething();
        visited = 1;
    }
}

