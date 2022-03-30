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
int lib14api1impl33api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api1impl33api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api1impl33api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api1impl33api14(int a, int b) {
    return a + b;
}

int Lib14Api1Impl33Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib14Api1Impl33Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib14Api1Impl33Api1" << std::endl;
        Lib15Api1 lib15api1;
        lib15api1.doSomething();
        Lib14Impl lib14impl;
        lib14impl.doSomething();
        Lib15Api2 lib15api2;
        lib15api2.doSomething();
        Lib15Api3 lib15api3;
        lib15api3.doSomething();
        Lib14Api1Impl34Api lib14api1impl34api;
        lib14api1impl34api.doSomething();
        Lib14Api1Impl33Impl lib14api1impl33impl;
        lib14api1impl33impl.doSomething();
        visited = 1;
    }
}

