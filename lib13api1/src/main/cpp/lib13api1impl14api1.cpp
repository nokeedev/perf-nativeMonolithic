// GENERATED SOURCE FILE

#include "lib13api1_private.h"
#include "lib13api1_impl.h"
#include "lib14api1.h"
#include "lib13impl.h"
#include "lib14api2.h"
#include "lib14api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib13api1impl14api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13api1impl14api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13api1impl14api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13api1impl14api14(int a, int b) {
    return a + b;
}

int Lib13Api1Impl14Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib13Api1Impl14Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib13Api1Impl14Api1" << std::endl;
        Lib14Api1 lib14api1;
        lib14api1.doSomething();
        Lib13Impl lib13impl;
        lib13impl.doSomething();
        Lib14Api2 lib14api2;
        lib14api2.doSomething();
        Lib14Api3 lib14api3;
        lib14api3.doSomething();
        Lib13Api1Impl15Api1 lib13api1impl15api1;
        lib13api1impl15api1.doSomething();
        Lib13Api1Impl14Impl lib13api1impl14impl;
        lib13api1impl14impl.doSomething();
        Lib13Api1Impl15Api2 lib13api1impl15api2;
        lib13api1impl15api2.doSomething();
        Lib13Api1Impl15Api3 lib13api1impl15api3;
        lib13api1impl15api3.doSomething();
        visited = 1;
    }
}

