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
int lib16api1impl20api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api1impl20api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api1impl20api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api1impl20api24(int a, int b) {
    return a + b;
}

int Lib16Api1Impl20Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib16Api1Impl20Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib16Api1Impl20Api2" << std::endl;
        Lib17Api1 lib17api1;
        lib17api1.doSomething();
        Lib16Impl lib16impl;
        lib16impl.doSomething();
        Lib17Api2 lib17api2;
        lib17api2.doSomething();
        Lib16Api1Impl20Impl lib16api1impl20impl;
        lib16api1impl20impl.doSomething();
        Lib16Api1Impl21Api1 lib16api1impl21api1;
        lib16api1impl21api1.doSomething();
        Lib16Api1Impl21Api2 lib16api1impl21api2;
        lib16api1impl21api2.doSomething();
        Lib16Api1Impl21Api3 lib16api1impl21api3;
        lib16api1impl21api3.doSomething();
        visited = 1;
    }
}

