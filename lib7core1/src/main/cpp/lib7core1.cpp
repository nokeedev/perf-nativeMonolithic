// GENERATED SOURCE FILE

#include "lib7core1_impl.h"
#include "lib7core1_private.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib7core11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core14(int a, int b) {
    return a + b;
}

int Lib7Core1::visited = 0;

/*
 * Here is a function.
 */
void Lib7Core1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib7Core1" << std::endl;
        Lib7Core1Impl1Api1 lib7core1impl1api1;
        lib7core1impl1api1.doSomething();
        Lib7Core1Impl1Api2 lib7core1impl1api2;
        lib7core1impl1api2.doSomething();
        Lib7Core1Impl1Api3 lib7core1impl1api3;
        lib7core1impl1api3.doSomething();
        visited = 1;
    }
}

