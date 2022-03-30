// GENERATED SOURCE FILE

#include "lib9core1_private.h"
#include "lib9core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib9core1impl17api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core1impl17api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core1impl17api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core1impl17api24(int a, int b) {
    return a + b;
}

int Lib9Core1Impl17Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib9Core1Impl17Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib9Core1Impl17Api2" << std::endl;
        Lib9Core1Impl17Impl lib9core1impl17impl;
        lib9core1impl17impl.doSomething();
        Lib9Core1Impl18Api1 lib9core1impl18api1;
        lib9core1impl18api1.doSomething();
        Lib9Core1Impl18Api2 lib9core1impl18api2;
        lib9core1impl18api2.doSomething();
        Lib9Core1Impl18Api3 lib9core1impl18api3;
        lib9core1impl18api3.doSomething();
        visited = 1;
    }
}

