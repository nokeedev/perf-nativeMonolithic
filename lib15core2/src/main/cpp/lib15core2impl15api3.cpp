// GENERATED SOURCE FILE

#include "lib15core2_private.h"
#include "lib15core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib15core2impl15api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core2impl15api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core2impl15api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core2impl15api34(int a, int b) {
    return a + b;
}

int Lib15Core2Impl15Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib15Core2Impl15Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib15Core2Impl15Api3" << std::endl;
        Lib15Core2Impl15Impl lib15core2impl15impl;
        lib15core2impl15impl.doSomething();
        Lib15Core2Impl16Api1 lib15core2impl16api1;
        lib15core2impl16api1.doSomething();
        Lib15Core2Impl16Api2 lib15core2impl16api2;
        lib15core2impl16api2.doSomething();
        Lib15Core2Impl16Api3 lib15core2impl16api3;
        lib15core2impl16api3.doSomething();
        visited = 1;
    }
}

