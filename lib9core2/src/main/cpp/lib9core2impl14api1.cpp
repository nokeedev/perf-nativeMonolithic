// GENERATED SOURCE FILE

#include "lib9core2_private.h"
#include "lib9core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib9core2impl14api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core2impl14api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core2impl14api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core2impl14api14(int a, int b) {
    return a + b;
}

int Lib9Core2Impl14Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib9Core2Impl14Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib9Core2Impl14Api1" << std::endl;
        Lib9Core2Impl15Api1 lib9core2impl15api1;
        lib9core2impl15api1.doSomething();
        Lib9Core2Impl14Impl lib9core2impl14impl;
        lib9core2impl14impl.doSomething();
        Lib9Core2Impl15Api2 lib9core2impl15api2;
        lib9core2impl15api2.doSomething();
        Lib9Core2Impl15Api3 lib9core2impl15api3;
        lib9core2impl15api3.doSomething();
        visited = 1;
    }
}

