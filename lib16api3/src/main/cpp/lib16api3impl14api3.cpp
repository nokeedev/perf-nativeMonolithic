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
int lib16api3impl14api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api3impl14api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api3impl14api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api3impl14api34(int a, int b) {
    return a + b;
}

int Lib16Api3Impl14Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib16Api3Impl14Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib16Api3Impl14Api3" << std::endl;
        Lib16Impl lib16impl;
        lib16impl.doSomething();
        Lib17Api1 lib17api1;
        lib17api1.doSomething();
        Lib17Api2 lib17api2;
        lib17api2.doSomething();
        Lib16Api3Impl14Impl lib16api3impl14impl;
        lib16api3impl14impl.doSomething();
        Lib16Api3Impl15Api1 lib16api3impl15api1;
        lib16api3impl15api1.doSomething();
        Lib16Api3Impl15Api2 lib16api3impl15api2;
        lib16api3impl15api2.doSomething();
        Lib16Api3Impl15Api3 lib16api3impl15api3;
        lib16api3impl15api3.doSomething();
        visited = 1;
    }
}

