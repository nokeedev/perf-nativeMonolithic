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
int lib16api1impl24api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api1impl24api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api1impl24api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api1impl24api14(int a, int b) {
    return a + b;
}

int Lib16Api1Impl24Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib16Api1Impl24Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib16Api1Impl24Api1" << std::endl;
        Lib17Api1 lib17api1;
        lib17api1.doSomething();
        Lib16Impl lib16impl;
        lib16impl.doSomething();
        Lib17Api2 lib17api2;
        lib17api2.doSomething();
        Lib16Api1Impl25Api1 lib16api1impl25api1;
        lib16api1impl25api1.doSomething();
        Lib16Api1Impl24Impl lib16api1impl24impl;
        lib16api1impl24impl.doSomething();
        Lib16Api1Impl25Api2 lib16api1impl25api2;
        lib16api1impl25api2.doSomething();
        Lib16Api1Impl25Api3 lib16api1impl25api3;
        lib16api1impl25api3.doSomething();
        visited = 1;
    }
}

