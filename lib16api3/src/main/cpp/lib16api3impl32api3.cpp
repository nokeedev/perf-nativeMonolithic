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
int lib16api3impl32api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api3impl32api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api3impl32api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api3impl32api34(int a, int b) {
    return a + b;
}

int Lib16Api3Impl32Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib16Api3Impl32Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib16Api3Impl32Api3" << std::endl;
        Lib16Impl lib16impl;
        lib16impl.doSomething();
        Lib17Api1 lib17api1;
        lib17api1.doSomething();
        Lib17Api2 lib17api2;
        lib17api2.doSomething();
        Lib16Api3Impl32Impl lib16api3impl32impl;
        lib16api3impl32impl.doSomething();
        Lib16Api3Impl33Api1 lib16api3impl33api1;
        lib16api3impl33api1.doSomething();
        Lib16Api3Impl33Api2 lib16api3impl33api2;
        lib16api3impl33api2.doSomething();
        Lib16Api3Impl33Api3 lib16api3impl33api3;
        lib16api3impl33api3.doSomething();
        visited = 1;
    }
}

