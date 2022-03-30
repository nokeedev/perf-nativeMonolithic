// GENERATED SOURCE FILE

#include "lib13core2_private.h"
#include "lib13core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib13core2impl15api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core2impl15api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core2impl15api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core2impl15api14(int a, int b) {
    return a + b;
}

int Lib13Core2Impl15Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib13Core2Impl15Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib13Core2Impl15Api1" << std::endl;
        Lib13Core2Impl16Api1 lib13core2impl16api1;
        lib13core2impl16api1.doSomething();
        Lib13Core2Impl15Impl lib13core2impl15impl;
        lib13core2impl15impl.doSomething();
        Lib13Core2Impl16Api2 lib13core2impl16api2;
        lib13core2impl16api2.doSomething();
        Lib13Core2Impl16Api3 lib13core2impl16api3;
        lib13core2impl16api3.doSomething();
        visited = 1;
    }
}

