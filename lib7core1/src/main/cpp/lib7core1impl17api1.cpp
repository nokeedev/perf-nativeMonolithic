// GENERATED SOURCE FILE

#include "lib7core1_private.h"
#include "lib7core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib7core1impl17api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core1impl17api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core1impl17api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core1impl17api14(int a, int b) {
    return a + b;
}

int Lib7Core1Impl17Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib7Core1Impl17Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib7Core1Impl17Api1" << std::endl;
        Lib7Core1Impl18Api1 lib7core1impl18api1;
        lib7core1impl18api1.doSomething();
        Lib7Core1Impl17Impl lib7core1impl17impl;
        lib7core1impl17impl.doSomething();
        Lib7Core1Impl18Api2 lib7core1impl18api2;
        lib7core1impl18api2.doSomething();
        Lib7Core1Impl18Api3 lib7core1impl18api3;
        lib7core1impl18api3.doSomething();
        visited = 1;
    }
}

