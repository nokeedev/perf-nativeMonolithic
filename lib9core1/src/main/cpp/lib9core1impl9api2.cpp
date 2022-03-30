// GENERATED SOURCE FILE

#include "lib9core1_private.h"
#include "lib9core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib9core1impl9api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core1impl9api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core1impl9api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core1impl9api24(int a, int b) {
    return a + b;
}

int Lib9Core1Impl9Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib9Core1Impl9Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib9Core1Impl9Api2" << std::endl;
        Lib9Core1Impl9Impl lib9core1impl9impl;
        lib9core1impl9impl.doSomething();
        Lib9Core1Impl10Api1 lib9core1impl10api1;
        lib9core1impl10api1.doSomething();
        Lib9Core1Impl10Api2 lib9core1impl10api2;
        lib9core1impl10api2.doSomething();
        Lib9Core1Impl10Api3 lib9core1impl10api3;
        lib9core1impl10api3.doSomething();
        visited = 1;
    }
}

