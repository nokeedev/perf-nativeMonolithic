// GENERATED SOURCE FILE

#include "lib17api1_private.h"
#include "lib17api1_impl.h"
#include "lib17core.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17api1impl7api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api1impl7api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api1impl7api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api1impl7api14(int a, int b) {
    return a + b;
}

int Lib17Api1Impl7Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib17Api1Impl7Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17Api1Impl7Api1" << std::endl;
        Lib17Core lib17core;
        lib17core.doSomething();
        Lib17Api1Impl8Api1 lib17api1impl8api1;
        lib17api1impl8api1.doSomething();
        Lib17Api1Impl7Impl lib17api1impl7impl;
        lib17api1impl7impl.doSomething();
        Lib17Api1Impl8Api2 lib17api1impl8api2;
        lib17api1impl8api2.doSomething();
        Lib17Api1Impl8Api3 lib17api1impl8api3;
        lib17api1impl8api3.doSomething();
        visited = 1;
    }
}

