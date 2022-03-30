// GENERATED SOURCE FILE

#include "lib10core1_private.h"
#include "lib10core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib10core1impl5api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core1impl5api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core1impl5api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core1impl5api24(int a, int b) {
    return a + b;
}

int Lib10Core1Impl5Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib10Core1Impl5Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib10Core1Impl5Api2" << std::endl;
        Lib10Core1Impl5Impl lib10core1impl5impl;
        lib10core1impl5impl.doSomething();
        Lib10Core1Impl6Api1 lib10core1impl6api1;
        lib10core1impl6api1.doSomething();
        Lib10Core1Impl6Api2 lib10core1impl6api2;
        lib10core1impl6api2.doSomething();
        Lib10Core1Impl6Api3 lib10core1impl6api3;
        lib10core1impl6api3.doSomething();
        visited = 1;
    }
}

