// GENERATED SOURCE FILE

#include "lib13core2_private.h"
#include "lib13core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib13core2impl14api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core2impl14api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core2impl14api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core2impl14api24(int a, int b) {
    return a + b;
}

int Lib13Core2Impl14Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib13Core2Impl14Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib13Core2Impl14Api2" << std::endl;
        Lib13Core2Impl14Impl lib13core2impl14impl;
        lib13core2impl14impl.doSomething();
        Lib13Core2Impl15Api1 lib13core2impl15api1;
        lib13core2impl15api1.doSomething();
        Lib13Core2Impl15Api2 lib13core2impl15api2;
        lib13core2impl15api2.doSomething();
        Lib13Core2Impl15Api3 lib13core2impl15api3;
        lib13core2impl15api3.doSomething();
        visited = 1;
    }
}

