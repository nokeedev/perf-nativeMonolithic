// GENERATED SOURCE FILE

#include "lib10core1_private.h"
#include "lib10core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib10core1impl4api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core1impl4api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core1impl4api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core1impl4api14(int a, int b) {
    return a + b;
}

int Lib10Core1Impl4Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib10Core1Impl4Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib10Core1Impl4Api1" << std::endl;
        Lib10Core1Impl5Api1 lib10core1impl5api1;
        lib10core1impl5api1.doSomething();
        Lib10Core1Impl4Impl lib10core1impl4impl;
        lib10core1impl4impl.doSomething();
        Lib10Core1Impl5Api2 lib10core1impl5api2;
        lib10core1impl5api2.doSomething();
        Lib10Core1Impl5Api3 lib10core1impl5api3;
        lib10core1impl5api3.doSomething();
        visited = 1;
    }
}

