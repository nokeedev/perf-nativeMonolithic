// GENERATED SOURCE FILE

#include "lib17api1_private.h"
#include "lib17api1_impl.h"
#include "lib17core.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17api1impl6api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api1impl6api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api1impl6api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api1impl6api14(int a, int b) {
    return a + b;
}

int Lib17Api1Impl6Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib17Api1Impl6Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17Api1Impl6Api1" << std::endl;
        Lib17Core lib17core;
        lib17core.doSomething();
        Lib17Api1Impl7Api1 lib17api1impl7api1;
        lib17api1impl7api1.doSomething();
        Lib17Api1Impl6Impl lib17api1impl6impl;
        lib17api1impl6impl.doSomething();
        Lib17Api1Impl7Api2 lib17api1impl7api2;
        lib17api1impl7api2.doSomething();
        Lib17Api1Impl7Api3 lib17api1impl7api3;
        lib17api1impl7api3.doSomething();
        visited = 1;
    }
}

