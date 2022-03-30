// GENERATED SOURCE FILE

#include "lib10core2_private.h"
#include "lib10core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib10core2impl15api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core2impl15api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core2impl15api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core2impl15api14(int a, int b) {
    return a + b;
}

int Lib10Core2Impl15Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib10Core2Impl15Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib10Core2Impl15Api1" << std::endl;
        Lib10Core2Impl16Api1 lib10core2impl16api1;
        lib10core2impl16api1.doSomething();
        Lib10Core2Impl15Impl lib10core2impl15impl;
        lib10core2impl15impl.doSomething();
        Lib10Core2Impl16Api2 lib10core2impl16api2;
        lib10core2impl16api2.doSomething();
        Lib10Core2Impl16Api3 lib10core2impl16api3;
        lib10core2impl16api3.doSomething();
        visited = 1;
    }
}

