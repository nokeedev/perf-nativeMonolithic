// GENERATED SOURCE FILE

#include "lib12core1_private.h"
#include "lib12core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib12core1impl5api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12core1impl5api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12core1impl5api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12core1impl5api14(int a, int b) {
    return a + b;
}

int Lib12Core1Impl5Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib12Core1Impl5Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib12Core1Impl5Api1" << std::endl;
        Lib12Core1Impl6Api1 lib12core1impl6api1;
        lib12core1impl6api1.doSomething();
        Lib12Core1Impl5Impl lib12core1impl5impl;
        lib12core1impl5impl.doSomething();
        Lib12Core1Impl6Api2 lib12core1impl6api2;
        lib12core1impl6api2.doSomething();
        Lib12Core1Impl6Api3 lib12core1impl6api3;
        lib12core1impl6api3.doSomething();
        visited = 1;
    }
}

