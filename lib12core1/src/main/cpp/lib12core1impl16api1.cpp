// GENERATED SOURCE FILE

#include "lib12core1_private.h"
#include "lib12core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib12core1impl16api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12core1impl16api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12core1impl16api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12core1impl16api14(int a, int b) {
    return a + b;
}

int Lib12Core1Impl16Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib12Core1Impl16Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib12Core1Impl16Api1" << std::endl;
        Lib12Core1Impl17Api1 lib12core1impl17api1;
        lib12core1impl17api1.doSomething();
        Lib12Core1Impl16Impl lib12core1impl16impl;
        lib12core1impl16impl.doSomething();
        Lib12Core1Impl17Api2 lib12core1impl17api2;
        lib12core1impl17api2.doSomething();
        Lib12Core1Impl17Api3 lib12core1impl17api3;
        lib12core1impl17api3.doSomething();
        visited = 1;
    }
}

