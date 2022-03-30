// GENERATED SOURCE FILE

#include "lib16core2_private.h"
#include "lib16core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib16core2impl15api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core2impl15api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core2impl15api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core2impl15api24(int a, int b) {
    return a + b;
}

int Lib16Core2Impl15Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib16Core2Impl15Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib16Core2Impl15Api2" << std::endl;
        Lib16Core2Impl15Impl lib16core2impl15impl;
        lib16core2impl15impl.doSomething();
        Lib16Core2Impl16Api1 lib16core2impl16api1;
        lib16core2impl16api1.doSomething();
        Lib16Core2Impl16Api2 lib16core2impl16api2;
        lib16core2impl16api2.doSomething();
        Lib16Core2Impl16Api3 lib16core2impl16api3;
        lib16core2impl16api3.doSomething();
        visited = 1;
    }
}

