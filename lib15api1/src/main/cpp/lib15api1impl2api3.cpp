// GENERATED SOURCE FILE

#include "lib15api1_private.h"
#include "lib15api1_impl.h"
#include "lib16api1.h"
#include "lib15impl.h"
#include "lib16api2.h"
#include "lib16api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib15api1impl2api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api1impl2api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api1impl2api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api1impl2api34(int a, int b) {
    return a + b;
}

int Lib15Api1Impl2Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib15Api1Impl2Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib15Api1Impl2Api3" << std::endl;
        Lib16Api1 lib16api1;
        lib16api1.doSomething();
        Lib15Impl lib15impl;
        lib15impl.doSomething();
        Lib16Api2 lib16api2;
        lib16api2.doSomething();
        Lib16Api3 lib16api3;
        lib16api3.doSomething();
        Lib15Api1Impl2Impl lib15api1impl2impl;
        lib15api1impl2impl.doSomething();
        Lib15Api1Impl3Api1 lib15api1impl3api1;
        lib15api1impl3api1.doSomething();
        Lib15Api1Impl3Api2 lib15api1impl3api2;
        lib15api1impl3api2.doSomething();
        Lib15Api1Impl3Api3 lib15api1impl3api3;
        lib15api1impl3api3.doSomething();
        visited = 1;
    }
}

