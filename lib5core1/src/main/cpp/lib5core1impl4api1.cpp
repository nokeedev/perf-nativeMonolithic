// GENERATED SOURCE FILE

#include "lib5core1_private.h"
#include "lib5core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib5core1impl4api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core1impl4api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core1impl4api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core1impl4api14(int a, int b) {
    return a + b;
}

int Lib5Core1Impl4Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib5Core1Impl4Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib5Core1Impl4Api1" << std::endl;
        Lib5Core1Impl5Api1 lib5core1impl5api1;
        lib5core1impl5api1.doSomething();
        Lib5Core1Impl4Impl lib5core1impl4impl;
        lib5core1impl4impl.doSomething();
        Lib5Core1Impl5Api2 lib5core1impl5api2;
        lib5core1impl5api2.doSomething();
        Lib5Core1Impl5Api3 lib5core1impl5api3;
        lib5core1impl5api3.doSomething();
        visited = 1;
    }
}

