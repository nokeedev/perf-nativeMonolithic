// GENERATED SOURCE FILE

#include "lib10core2_private.h"
#include "lib10core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib10core2impl14api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core2impl14api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core2impl14api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core2impl14api34(int a, int b) {
    return a + b;
}

int Lib10Core2Impl14Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib10Core2Impl14Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib10Core2Impl14Api3" << std::endl;
        Lib10Core2Impl14Impl lib10core2impl14impl;
        lib10core2impl14impl.doSomething();
        Lib10Core2Impl15Api1 lib10core2impl15api1;
        lib10core2impl15api1.doSomething();
        Lib10Core2Impl15Api2 lib10core2impl15api2;
        lib10core2impl15api2.doSomething();
        Lib10Core2Impl15Api3 lib10core2impl15api3;
        lib10core2impl15api3.doSomething();
        visited = 1;
    }
}

