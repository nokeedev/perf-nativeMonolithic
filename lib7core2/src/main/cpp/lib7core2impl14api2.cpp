// GENERATED SOURCE FILE

#include "lib7core2_private.h"
#include "lib7core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib7core2impl14api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core2impl14api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core2impl14api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core2impl14api24(int a, int b) {
    return a + b;
}

int Lib7Core2Impl14Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib7Core2Impl14Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib7Core2Impl14Api2" << std::endl;
        Lib7Core2Impl14Impl lib7core2impl14impl;
        lib7core2impl14impl.doSomething();
        Lib7Core2Impl15Api1 lib7core2impl15api1;
        lib7core2impl15api1.doSomething();
        Lib7Core2Impl15Api2 lib7core2impl15api2;
        lib7core2impl15api2.doSomething();
        Lib7Core2Impl15Api3 lib7core2impl15api3;
        lib7core2impl15api3.doSomething();
        visited = 1;
    }
}

