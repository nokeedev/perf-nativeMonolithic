// GENERATED SOURCE FILE

#include "lib14api1_impl.h"
#include "lib14api1_private.h"
#include "lib15api1.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib14api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api14(int a, int b) {
    return a + b;
}

int Lib14Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib14Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib14Api1" << std::endl;
        Lib15Api1 lib15api1;
        lib15api1.doSomething();
        Lib14Api1Impl1Api1 lib14api1impl1api1;
        lib14api1impl1api1.doSomething();
        Lib14Api1Impl1Api2 lib14api1impl1api2;
        lib14api1impl1api2.doSomething();
        Lib14Api1Impl1Api3 lib14api1impl1api3;
        lib14api1impl1api3.doSomething();
        visited = 1;
    }
}

