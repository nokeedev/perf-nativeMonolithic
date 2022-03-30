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
int lib16api3impl24api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api3impl24api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api3impl24api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api3impl24api24(int a, int b) {
    return a + b;
}

int Lib16Api3Impl24Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib16Api3Impl24Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib16Api3Impl24Api2" << std::endl;
        Lib16Impl lib16impl;
        lib16impl.doSomething();
        Lib17Api1 lib17api1;
        lib17api1.doSomething();
        Lib17Api2 lib17api2;
        lib17api2.doSomething();
        Lib16Api3Impl24Impl lib16api3impl24impl;
        lib16api3impl24impl.doSomething();
        Lib16Api3Impl25Api1 lib16api3impl25api1;
        lib16api3impl25api1.doSomething();
        Lib16Api3Impl25Api2 lib16api3impl25api2;
        lib16api3impl25api2.doSomething();
        Lib16Api3Impl25Api3 lib16api3impl25api3;
        lib16api3impl25api3.doSomething();
        visited = 1;
    }
}

