// GENERATED SOURCE FILE

#include "lib9core1_private.h"
#include "lib9core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib9core1impl18api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core1impl18api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core1impl18api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core1impl18api14(int a, int b) {
    return a + b;
}

int Lib9Core1Impl18Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib9Core1Impl18Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib9Core1Impl18Api1" << std::endl;
        Lib9Core1Impl19Api1 lib9core1impl19api1;
        lib9core1impl19api1.doSomething();
        Lib9Core1Impl18Impl lib9core1impl18impl;
        lib9core1impl18impl.doSomething();
        Lib9Core1Impl19Api2 lib9core1impl19api2;
        lib9core1impl19api2.doSomething();
        Lib9Core1Impl19Api3 lib9core1impl19api3;
        lib9core1impl19api3.doSomething();
        visited = 1;
    }
}

