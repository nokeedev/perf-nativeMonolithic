// GENERATED SOURCE FILE

#include "lib13core1_private.h"
#include "lib13core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib13core1impl5api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core1impl5api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core1impl5api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core1impl5api24(int a, int b) {
    return a + b;
}

int Lib13Core1Impl5Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib13Core1Impl5Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib13Core1Impl5Api2" << std::endl;
        Lib13Core1Impl5Impl lib13core1impl5impl;
        lib13core1impl5impl.doSomething();
        Lib13Core1Impl6Api1 lib13core1impl6api1;
        lib13core1impl6api1.doSomething();
        Lib13Core1Impl6Api2 lib13core1impl6api2;
        lib13core1impl6api2.doSomething();
        Lib13Core1Impl6Api3 lib13core1impl6api3;
        lib13core1impl6api3.doSomething();
        visited = 1;
    }
}

