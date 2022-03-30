// GENERATED SOURCE FILE

#include "lib14core1_private.h"
#include "lib14core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib14core1impl5api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core1impl5api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core1impl5api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core1impl5api14(int a, int b) {
    return a + b;
}

int Lib14Core1Impl5Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib14Core1Impl5Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib14Core1Impl5Api1" << std::endl;
        Lib14Core1Impl6Api1 lib14core1impl6api1;
        lib14core1impl6api1.doSomething();
        Lib14Core1Impl5Impl lib14core1impl5impl;
        lib14core1impl5impl.doSomething();
        Lib14Core1Impl6Api2 lib14core1impl6api2;
        lib14core1impl6api2.doSomething();
        Lib14Core1Impl6Api3 lib14core1impl6api3;
        lib14core1impl6api3.doSomething();
        visited = 1;
    }
}

