// GENERATED SOURCE FILE

#include "lib9core1_private.h"
#include "lib9core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib9core1impl12api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core1impl12api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core1impl12api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core1impl12api14(int a, int b) {
    return a + b;
}

int Lib9Core1Impl12Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib9Core1Impl12Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib9Core1Impl12Api1" << std::endl;
        Lib9Core1Impl13Api1 lib9core1impl13api1;
        lib9core1impl13api1.doSomething();
        Lib9Core1Impl12Impl lib9core1impl12impl;
        lib9core1impl12impl.doSomething();
        Lib9Core1Impl13Api2 lib9core1impl13api2;
        lib9core1impl13api2.doSomething();
        Lib9Core1Impl13Api3 lib9core1impl13api3;
        lib9core1impl13api3.doSomething();
        visited = 1;
    }
}

