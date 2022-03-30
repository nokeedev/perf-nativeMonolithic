// GENERATED SOURCE FILE

#include "lib9core1_impl.h"
#include "lib9core1_private.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib9core11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core14(int a, int b) {
    return a + b;
}

int Lib9Core1::visited = 0;

/*
 * Here is a function.
 */
void Lib9Core1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib9Core1" << std::endl;
        Lib9Core1Impl1Api1 lib9core1impl1api1;
        lib9core1impl1api1.doSomething();
        Lib9Core1Impl1Api2 lib9core1impl1api2;
        lib9core1impl1api2.doSomething();
        Lib9Core1Impl1Api3 lib9core1impl1api3;
        lib9core1impl1api3.doSomething();
        visited = 1;
    }
}

