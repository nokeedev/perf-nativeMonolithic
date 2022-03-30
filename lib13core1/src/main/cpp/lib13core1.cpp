// GENERATED SOURCE FILE

#include "lib13core1_impl.h"
#include "lib13core1_private.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib13core11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core14(int a, int b) {
    return a + b;
}

int Lib13Core1::visited = 0;

/*
 * Here is a function.
 */
void Lib13Core1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib13Core1" << std::endl;
        Lib13Core1Impl1Api1 lib13core1impl1api1;
        lib13core1impl1api1.doSomething();
        Lib13Core1Impl1Api2 lib13core1impl1api2;
        lib13core1impl1api2.doSomething();
        Lib13Core1Impl1Api3 lib13core1impl1api3;
        lib13core1impl1api3.doSomething();
        visited = 1;
    }
}

