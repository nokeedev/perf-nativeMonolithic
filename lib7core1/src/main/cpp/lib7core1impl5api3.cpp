// GENERATED SOURCE FILE

#include "lib7core1_private.h"
#include "lib7core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib7core1impl5api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core1impl5api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core1impl5api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core1impl5api34(int a, int b) {
    return a + b;
}

int Lib7Core1Impl5Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib7Core1Impl5Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib7Core1Impl5Api3" << std::endl;
        Lib7Core1Impl5Impl lib7core1impl5impl;
        lib7core1impl5impl.doSomething();
        Lib7Core1Impl6Api1 lib7core1impl6api1;
        lib7core1impl6api1.doSomething();
        Lib7Core1Impl6Api2 lib7core1impl6api2;
        lib7core1impl6api2.doSomething();
        Lib7Core1Impl6Api3 lib7core1impl6api3;
        lib7core1impl6api3.doSomething();
        visited = 1;
    }
}

