// GENERATED SOURCE FILE

#include "lib14api1_private.h"
#include "lib14api1_impl.h"
#include "lib15api1.h"
#include "lib14impl.h"
#include "lib15api2.h"
#include "lib15api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib14api1impl9api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api1impl9api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api1impl9api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api1impl9api14(int a, int b) {
    return a + b;
}

int Lib14Api1Impl9Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib14Api1Impl9Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib14Api1Impl9Api1" << std::endl;
        Lib15Api1 lib15api1;
        lib15api1.doSomething();
        Lib14Impl lib14impl;
        lib14impl.doSomething();
        Lib15Api2 lib15api2;
        lib15api2.doSomething();
        Lib15Api3 lib15api3;
        lib15api3.doSomething();
        Lib14Api1Impl10Api1 lib14api1impl10api1;
        lib14api1impl10api1.doSomething();
        Lib14Api1Impl9Impl lib14api1impl9impl;
        lib14api1impl9impl.doSomething();
        Lib14Api1Impl10Api2 lib14api1impl10api2;
        lib14api1impl10api2.doSomething();
        Lib14Api1Impl10Api3 lib14api1impl10api3;
        lib14api1impl10api3.doSomething();
        visited = 1;
    }
}

