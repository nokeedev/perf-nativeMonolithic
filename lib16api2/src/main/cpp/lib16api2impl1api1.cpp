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
int lib16api2impl1api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api2impl1api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api2impl1api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api2impl1api14(int a, int b) {
    return a + b;
}

int Lib16Api2Impl1Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib16Api2Impl1Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib16Api2Impl1Api1" << std::endl;
        Lib16Impl lib16impl;
        lib16impl.doSomething();
        Lib17Api1 lib17api1;
        lib17api1.doSomething();
        Lib17Api2 lib17api2;
        lib17api2.doSomething();
        Lib16Api2Impl2Api1 lib16api2impl2api1;
        lib16api2impl2api1.doSomething();
        Lib16Api2Impl1Impl lib16api2impl1impl;
        lib16api2impl1impl.doSomething();
        Lib16Api2Impl2Api2 lib16api2impl2api2;
        lib16api2impl2api2.doSomething();
        Lib16Api2Impl2Api3 lib16api2impl2api3;
        lib16api2impl2api3.doSomething();
        visited = 1;
    }
}

