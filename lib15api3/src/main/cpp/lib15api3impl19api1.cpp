// GENERATED SOURCE FILE

#include "lib15api3_private.h"
#include "lib15api3_impl.h"
#include "lib15impl.h"
#include "lib16api1.h"
#include "lib16api2.h"
#include "lib16api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib15api3impl19api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api3impl19api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api3impl19api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api3impl19api14(int a, int b) {
    return a + b;
}

int Lib15Api3Impl19Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib15Api3Impl19Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib15Api3Impl19Api1" << std::endl;
        Lib15Impl lib15impl;
        lib15impl.doSomething();
        Lib16Api1 lib16api1;
        lib16api1.doSomething();
        Lib16Api2 lib16api2;
        lib16api2.doSomething();
        Lib16Api3 lib16api3;
        lib16api3.doSomething();
        Lib15Api3Impl20Api1 lib15api3impl20api1;
        lib15api3impl20api1.doSomething();
        Lib15Api3Impl19Impl lib15api3impl19impl;
        lib15api3impl19impl.doSomething();
        Lib15Api3Impl20Api2 lib15api3impl20api2;
        lib15api3impl20api2.doSomething();
        Lib15Api3Impl20Api3 lib15api3impl20api3;
        lib15api3impl20api3.doSomething();
        visited = 1;
    }
}

