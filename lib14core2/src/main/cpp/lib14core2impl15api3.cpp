// GENERATED SOURCE FILE

#include "lib14core2_private.h"
#include "lib14core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib14core2impl15api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core2impl15api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core2impl15api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core2impl15api34(int a, int b) {
    return a + b;
}

int Lib14Core2Impl15Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib14Core2Impl15Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib14Core2Impl15Api3" << std::endl;
        Lib14Core2Impl15Impl lib14core2impl15impl;
        lib14core2impl15impl.doSomething();
        Lib14Core2Impl16Api1 lib14core2impl16api1;
        lib14core2impl16api1.doSomething();
        Lib14Core2Impl16Api2 lib14core2impl16api2;
        lib14core2impl16api2.doSomething();
        Lib14Core2Impl16Api3 lib14core2impl16api3;
        lib14core2impl16api3.doSomething();
        visited = 1;
    }
}

