// GENERATED SOURCE FILE

#include "lib16core2_private.h"
#include "lib16core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib16core2impl14api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core2impl14api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core2impl14api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core2impl14api24(int a, int b) {
    return a + b;
}

int Lib16Core2Impl14Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib16Core2Impl14Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib16Core2Impl14Api2" << std::endl;
        Lib16Core2Impl14Impl lib16core2impl14impl;
        lib16core2impl14impl.doSomething();
        Lib16Core2Impl15Api1 lib16core2impl15api1;
        lib16core2impl15api1.doSomething();
        Lib16Core2Impl15Api2 lib16core2impl15api2;
        lib16core2impl15api2.doSomething();
        Lib16Core2Impl15Api3 lib16core2impl15api3;
        lib16core2impl15api3.doSomething();
        visited = 1;
    }
}

