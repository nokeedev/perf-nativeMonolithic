// GENERATED SOURCE FILE

#include "lib7core1_private.h"
#include "lib7core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib7core1impl4api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core1impl4api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core1impl4api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core1impl4api14(int a, int b) {
    return a + b;
}

int Lib7Core1Impl4Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib7Core1Impl4Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib7Core1Impl4Api1" << std::endl;
        Lib7Core1Impl5Api1 lib7core1impl5api1;
        lib7core1impl5api1.doSomething();
        Lib7Core1Impl4Impl lib7core1impl4impl;
        lib7core1impl4impl.doSomething();
        Lib7Core1Impl5Api2 lib7core1impl5api2;
        lib7core1impl5api2.doSomething();
        Lib7Core1Impl5Api3 lib7core1impl5api3;
        lib7core1impl5api3.doSomething();
        visited = 1;
    }
}

