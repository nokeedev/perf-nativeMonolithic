// GENERATED SOURCE FILE

#include "lib12core1_private.h"
#include "lib12core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib12core1impl4api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12core1impl4api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12core1impl4api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12core1impl4api34(int a, int b) {
    return a + b;
}

int Lib12Core1Impl4Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib12Core1Impl4Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib12Core1Impl4Api3" << std::endl;
        Lib12Core1Impl4Impl lib12core1impl4impl;
        lib12core1impl4impl.doSomething();
        Lib12Core1Impl5Api1 lib12core1impl5api1;
        lib12core1impl5api1.doSomething();
        Lib12Core1Impl5Api2 lib12core1impl5api2;
        lib12core1impl5api2.doSomething();
        Lib12Core1Impl5Api3 lib12core1impl5api3;
        lib12core1impl5api3.doSomething();
        visited = 1;
    }
}

