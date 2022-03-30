// GENERATED SOURCE FILE

#include "lib16core1_private.h"
#include "lib16core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib16core1impl5api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core1impl5api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core1impl5api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core1impl5api14(int a, int b) {
    return a + b;
}

int Lib16Core1Impl5Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib16Core1Impl5Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib16Core1Impl5Api1" << std::endl;
        Lib16Core1Impl6Api1 lib16core1impl6api1;
        lib16core1impl6api1.doSomething();
        Lib16Core1Impl5Impl lib16core1impl5impl;
        lib16core1impl5impl.doSomething();
        Lib16Core1Impl6Api2 lib16core1impl6api2;
        lib16core1impl6api2.doSomething();
        Lib16Core1Impl6Api3 lib16core1impl6api3;
        lib16core1impl6api3.doSomething();
        visited = 1;
    }
}

