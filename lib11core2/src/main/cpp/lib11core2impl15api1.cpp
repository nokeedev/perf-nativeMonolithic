// GENERATED SOURCE FILE

#include "lib11core2_private.h"
#include "lib11core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib11core2impl15api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core2impl15api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core2impl15api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core2impl15api14(int a, int b) {
    return a + b;
}

int Lib11Core2Impl15Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib11Core2Impl15Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib11Core2Impl15Api1" << std::endl;
        Lib11Core2Impl16Api1 lib11core2impl16api1;
        lib11core2impl16api1.doSomething();
        Lib11Core2Impl15Impl lib11core2impl15impl;
        lib11core2impl15impl.doSomething();
        Lib11Core2Impl16Api2 lib11core2impl16api2;
        lib11core2impl16api2.doSomething();
        Lib11Core2Impl16Api3 lib11core2impl16api3;
        lib11core2impl16api3.doSomething();
        visited = 1;
    }
}

