// GENERATED SOURCE FILE

#include "lib14core1_private.h"
#include "lib14core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib14core1impl4api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core1impl4api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core1impl4api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core1impl4api24(int a, int b) {
    return a + b;
}

int Lib14Core1Impl4Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib14Core1Impl4Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib14Core1Impl4Api2" << std::endl;
        Lib14Core1Impl4Impl lib14core1impl4impl;
        lib14core1impl4impl.doSomething();
        Lib14Core1Impl5Api1 lib14core1impl5api1;
        lib14core1impl5api1.doSomething();
        Lib14Core1Impl5Api2 lib14core1impl5api2;
        lib14core1impl5api2.doSomething();
        Lib14Core1Impl5Api3 lib14core1impl5api3;
        lib14core1impl5api3.doSomething();
        visited = 1;
    }
}

