// GENERATED SOURCE FILE

#include "lib15core1_impl.h"
#include "lib15core1_private.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib15core11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core14(int a, int b) {
    return a + b;
}

int Lib15Core1::visited = 0;

/*
 * Here is a function.
 */
void Lib15Core1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib15Core1" << std::endl;
        Lib15Core1Impl1Api1 lib15core1impl1api1;
        lib15core1impl1api1.doSomething();
        Lib15Core1Impl1Api2 lib15core1impl1api2;
        lib15core1impl1api2.doSomething();
        Lib15Core1Impl1Api3 lib15core1impl1api3;
        lib15core1impl1api3.doSomething();
        visited = 1;
    }
}

