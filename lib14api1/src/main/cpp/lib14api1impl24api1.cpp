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
int lib14api1impl24api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api1impl24api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api1impl24api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api1impl24api14(int a, int b) {
    return a + b;
}

int Lib14Api1Impl24Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib14Api1Impl24Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib14Api1Impl24Api1" << std::endl;
        Lib15Api1 lib15api1;
        lib15api1.doSomething();
        Lib14Impl lib14impl;
        lib14impl.doSomething();
        Lib15Api2 lib15api2;
        lib15api2.doSomething();
        Lib15Api3 lib15api3;
        lib15api3.doSomething();
        Lib14Api1Impl25Api1 lib14api1impl25api1;
        lib14api1impl25api1.doSomething();
        Lib14Api1Impl24Impl lib14api1impl24impl;
        lib14api1impl24impl.doSomething();
        Lib14Api1Impl25Api2 lib14api1impl25api2;
        lib14api1impl25api2.doSomething();
        Lib14Api1Impl25Api3 lib14api1impl25api3;
        lib14api1impl25api3.doSomething();
        visited = 1;
    }
}

