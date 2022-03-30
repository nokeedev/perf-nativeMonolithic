// GENERATED SOURCE FILE

#include "lib7api1_private.h"
#include "lib7api1_impl.h"
#include "lib8api1.h"
#include "lib7impl.h"
#include "lib8api2.h"
#include "lib8api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib7api1impl8api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7api1impl8api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7api1impl8api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7api1impl8api14(int a, int b) {
    return a + b;
}

int Lib7Api1Impl8Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib7Api1Impl8Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib7Api1Impl8Api1" << std::endl;
        Lib8Api1 lib8api1;
        lib8api1.doSomething();
        Lib7Impl lib7impl;
        lib7impl.doSomething();
        Lib8Api2 lib8api2;
        lib8api2.doSomething();
        Lib8Api3 lib8api3;
        lib8api3.doSomething();
        Lib7Api1Impl9Api1 lib7api1impl9api1;
        lib7api1impl9api1.doSomething();
        Lib7Api1Impl8Impl lib7api1impl8impl;
        lib7api1impl8impl.doSomething();
        Lib7Api1Impl9Api2 lib7api1impl9api2;
        lib7api1impl9api2.doSomething();
        Lib7Api1Impl9Api3 lib7api1impl9api3;
        lib7api1impl9api3.doSomething();
        visited = 1;
    }
}

