// GENERATED SOURCE FILE

#include "lib16api2_private.h"
#include "lib16api2_impl.h"
#include "lib16impl.h"
#include "lib17api1.h"
#include "lib17api2.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib16api2impl7api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api2impl7api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api2impl7api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api2impl7api14(int a, int b) {
    return a + b;
}

int Lib16Api2Impl7Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib16Api2Impl7Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib16Api2Impl7Api1" << std::endl;
        Lib16Impl lib16impl;
        lib16impl.doSomething();
        Lib17Api1 lib17api1;
        lib17api1.doSomething();
        Lib17Api2 lib17api2;
        lib17api2.doSomething();
        Lib16Api2Impl8Api1 lib16api2impl8api1;
        lib16api2impl8api1.doSomething();
        Lib16Api2Impl7Impl lib16api2impl7impl;
        lib16api2impl7impl.doSomething();
        Lib16Api2Impl8Api2 lib16api2impl8api2;
        lib16api2impl8api2.doSomething();
        Lib16Api2Impl8Api3 lib16api2impl8api3;
        lib16api2impl8api3.doSomething();
        visited = 1;
    }
}

