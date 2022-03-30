// GENERATED SOURCE FILE

#include "lib9core1_private.h"
#include "lib9core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib9core1impl11api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core1impl11api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core1impl11api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core1impl11api14(int a, int b) {
    return a + b;
}

int Lib9Core1Impl11Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib9Core1Impl11Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib9Core1Impl11Api1" << std::endl;
        Lib9Core1Impl12Api1 lib9core1impl12api1;
        lib9core1impl12api1.doSomething();
        Lib9Core1Impl11Impl lib9core1impl11impl;
        lib9core1impl11impl.doSomething();
        Lib9Core1Impl12Api2 lib9core1impl12api2;
        lib9core1impl12api2.doSomething();
        Lib9Core1Impl12Api3 lib9core1impl12api3;
        lib9core1impl12api3.doSomething();
        visited = 1;
    }
}

