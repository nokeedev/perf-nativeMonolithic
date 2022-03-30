// GENERATED SOURCE FILE

#include "lib16api1_private.h"
#include "lib16api1_impl.h"
#include "lib17api1.h"
#include "lib16impl.h"
#include "lib17api2.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib16api1impl7api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api1impl7api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api1impl7api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api1impl7api14(int a, int b) {
    return a + b;
}

int Lib16Api1Impl7Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib16Api1Impl7Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib16Api1Impl7Api1" << std::endl;
        Lib17Api1 lib17api1;
        lib17api1.doSomething();
        Lib16Impl lib16impl;
        lib16impl.doSomething();
        Lib17Api2 lib17api2;
        lib17api2.doSomething();
        Lib16Api1Impl8Api1 lib16api1impl8api1;
        lib16api1impl8api1.doSomething();
        Lib16Api1Impl7Impl lib16api1impl7impl;
        lib16api1impl7impl.doSomething();
        Lib16Api1Impl8Api2 lib16api1impl8api2;
        lib16api1impl8api2.doSomething();
        Lib16Api1Impl8Api3 lib16api1impl8api3;
        lib16api1impl8api3.doSomething();
        visited = 1;
    }
}

