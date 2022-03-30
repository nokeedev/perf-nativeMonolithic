// GENERATED SOURCE FILE

#include "lib7core2_private.h"
#include "lib7core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib7core2impl15api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core2impl15api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core2impl15api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core2impl15api14(int a, int b) {
    return a + b;
}

int Lib7Core2Impl15Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib7Core2Impl15Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib7Core2Impl15Api1" << std::endl;
        Lib7Core2Impl16Api1 lib7core2impl16api1;
        lib7core2impl16api1.doSomething();
        Lib7Core2Impl15Impl lib7core2impl15impl;
        lib7core2impl15impl.doSomething();
        Lib7Core2Impl16Api2 lib7core2impl16api2;
        lib7core2impl16api2.doSomething();
        Lib7Core2Impl16Api3 lib7core2impl16api3;
        lib7core2impl16api3.doSomething();
        visited = 1;
    }
}

