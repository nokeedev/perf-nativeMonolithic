// GENERATED SOURCE FILE

#include "lib4core1_private.h"
#include "lib4core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib4core1impl5api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core1impl5api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core1impl5api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core1impl5api24(int a, int b) {
    return a + b;
}

int Lib4Core1Impl5Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib4Core1Impl5Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib4Core1Impl5Api2" << std::endl;
        Lib4Core1Impl5Impl lib4core1impl5impl;
        lib4core1impl5impl.doSomething();
        Lib4Core1Impl6Api1 lib4core1impl6api1;
        lib4core1impl6api1.doSomething();
        Lib4Core1Impl6Api2 lib4core1impl6api2;
        lib4core1impl6api2.doSomething();
        Lib4Core1Impl6Api3 lib4core1impl6api3;
        lib4core1impl6api3.doSomething();
        visited = 1;
    }
}

