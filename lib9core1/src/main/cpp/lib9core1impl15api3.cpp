// GENERATED SOURCE FILE

#include "lib9core1_private.h"
#include "lib9core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib9core1impl15api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core1impl15api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core1impl15api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core1impl15api34(int a, int b) {
    return a + b;
}

int Lib9Core1Impl15Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib9Core1Impl15Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib9Core1Impl15Api3" << std::endl;
        Lib9Core1Impl15Impl lib9core1impl15impl;
        lib9core1impl15impl.doSomething();
        Lib9Core1Impl16Api1 lib9core1impl16api1;
        lib9core1impl16api1.doSomething();
        Lib9Core1Impl16Api2 lib9core1impl16api2;
        lib9core1impl16api2.doSomething();
        Lib9Core1Impl16Api3 lib9core1impl16api3;
        lib9core1impl16api3.doSomething();
        visited = 1;
    }
}

