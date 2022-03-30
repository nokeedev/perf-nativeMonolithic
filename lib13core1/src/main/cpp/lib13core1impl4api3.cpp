// GENERATED SOURCE FILE

#include "lib13core1_private.h"
#include "lib13core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib13core1impl4api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core1impl4api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core1impl4api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core1impl4api34(int a, int b) {
    return a + b;
}

int Lib13Core1Impl4Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib13Core1Impl4Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib13Core1Impl4Api3" << std::endl;
        Lib13Core1Impl4Impl lib13core1impl4impl;
        lib13core1impl4impl.doSomething();
        Lib13Core1Impl5Api1 lib13core1impl5api1;
        lib13core1impl5api1.doSomething();
        Lib13Core1Impl5Api2 lib13core1impl5api2;
        lib13core1impl5api2.doSomething();
        Lib13Core1Impl5Api3 lib13core1impl5api3;
        lib13core1impl5api3.doSomething();
        visited = 1;
    }
}

