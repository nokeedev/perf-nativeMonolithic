// GENERATED SOURCE FILE

#include "lib15core1_private.h"
#include "lib15core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib15core1impl4api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core1impl4api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core1impl4api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core1impl4api14(int a, int b) {
    return a + b;
}

int Lib15Core1Impl4Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib15Core1Impl4Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib15Core1Impl4Api1" << std::endl;
        Lib15Core1Impl5Api1 lib15core1impl5api1;
        lib15core1impl5api1.doSomething();
        Lib15Core1Impl4Impl lib15core1impl4impl;
        lib15core1impl4impl.doSomething();
        Lib15Core1Impl5Api2 lib15core1impl5api2;
        lib15core1impl5api2.doSomething();
        Lib15Core1Impl5Api3 lib15core1impl5api3;
        lib15core1impl5api3.doSomething();
        visited = 1;
    }
}

