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
int lib13api1impl8api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13api1impl8api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13api1impl8api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13api1impl8api14(int a, int b) {
    return a + b;
}

int Lib13Api1Impl8Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib13Api1Impl8Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib13Api1Impl8Api1" << std::endl;
        Lib14Api1 lib14api1;
        lib14api1.doSomething();
        Lib13Impl lib13impl;
        lib13impl.doSomething();
        Lib14Api2 lib14api2;
        lib14api2.doSomething();
        Lib14Api3 lib14api3;
        lib14api3.doSomething();
        Lib13Api1Impl9Api1 lib13api1impl9api1;
        lib13api1impl9api1.doSomething();
        Lib13Api1Impl8Impl lib13api1impl8impl;
        lib13api1impl8impl.doSomething();
        Lib13Api1Impl9Api2 lib13api1impl9api2;
        lib13api1impl9api2.doSomething();
        Lib13Api1Impl9Api3 lib13api1impl9api3;
        lib13api1impl9api3.doSomething();
        visited = 1;
    }
}

