// GENERATED SOURCE FILE

#include "lib8core1_private.h"
#include "lib8core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib8core1impl16api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core1impl16api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core1impl16api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core1impl16api14(int a, int b) {
    return a + b;
}

int Lib8Core1Impl16Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib8Core1Impl16Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib8Core1Impl16Api1" << std::endl;
        Lib8Core1Impl17Api1 lib8core1impl17api1;
        lib8core1impl17api1.doSomething();
        Lib8Core1Impl16Impl lib8core1impl16impl;
        lib8core1impl16impl.doSomething();
        Lib8Core1Impl17Api2 lib8core1impl17api2;
        lib8core1impl17api2.doSomething();
        Lib8Core1Impl17Api3 lib8core1impl17api3;
        lib8core1impl17api3.doSomething();
        visited = 1;
    }
}

