// GENERATED SOURCE FILE

#include "lib2core1_private.h"
#include "lib2core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib2core1impl5api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core1impl5api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core1impl5api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core1impl5api14(int a, int b) {
    return a + b;
}

int Lib2Core1Impl5Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib2Core1Impl5Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib2Core1Impl5Api1" << std::endl;
        Lib2Core1Impl6Api1 lib2core1impl6api1;
        lib2core1impl6api1.doSomething();
        Lib2Core1Impl5Impl lib2core1impl5impl;
        lib2core1impl5impl.doSomething();
        Lib2Core1Impl6Api2 lib2core1impl6api2;
        lib2core1impl6api2.doSomething();
        Lib2Core1Impl6Api3 lib2core1impl6api3;
        lib2core1impl6api3.doSomething();
        visited = 1;
    }
}

