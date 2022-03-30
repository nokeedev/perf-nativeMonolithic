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
int lib16api3impl25api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api3impl25api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api3impl25api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api3impl25api24(int a, int b) {
    return a + b;
}

int Lib16Api3Impl25Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib16Api3Impl25Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib16Api3Impl25Api2" << std::endl;
        Lib16Impl lib16impl;
        lib16impl.doSomething();
        Lib17Api1 lib17api1;
        lib17api1.doSomething();
        Lib17Api2 lib17api2;
        lib17api2.doSomething();
        Lib16Api3Impl25Impl lib16api3impl25impl;
        lib16api3impl25impl.doSomething();
        Lib16Api3Impl26Api1 lib16api3impl26api1;
        lib16api3impl26api1.doSomething();
        Lib16Api3Impl26Api2 lib16api3impl26api2;
        lib16api3impl26api2.doSomething();
        Lib16Api3Impl26Api3 lib16api3impl26api3;
        lib16api3impl26api3.doSomething();
        visited = 1;
    }
}

