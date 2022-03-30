// GENERATED SOURCE FILE

#include "lib16api3_private.h"
#include "lib16api3_impl.h"
#include "lib16impl.h"
#include "lib17api1.h"
#include "lib17api2.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib16api3impl16api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api3impl16api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api3impl16api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api3impl16api14(int a, int b) {
    return a + b;
}

int Lib16Api3Impl16Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib16Api3Impl16Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib16Api3Impl16Api1" << std::endl;
        Lib16Impl lib16impl;
        lib16impl.doSomething();
        Lib17Api1 lib17api1;
        lib17api1.doSomething();
        Lib17Api2 lib17api2;
        lib17api2.doSomething();
        Lib16Api3Impl17Api1 lib16api3impl17api1;
        lib16api3impl17api1.doSomething();
        Lib16Api3Impl16Impl lib16api3impl16impl;
        lib16api3impl16impl.doSomething();
        Lib16Api3Impl17Api2 lib16api3impl17api2;
        lib16api3impl17api2.doSomething();
        Lib16Api3Impl17Api3 lib16api3impl17api3;
        lib16api3impl17api3.doSomething();
        visited = 1;
    }
}

