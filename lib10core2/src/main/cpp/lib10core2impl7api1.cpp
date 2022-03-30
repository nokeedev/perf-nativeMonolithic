// GENERATED SOURCE FILE

#include "lib10core2_private.h"
#include "lib10core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib10core2impl7api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core2impl7api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core2impl7api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core2impl7api14(int a, int b) {
    return a + b;
}

int Lib10Core2Impl7Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib10Core2Impl7Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib10Core2Impl7Api1" << std::endl;
        Lib10Core2Impl8Api1 lib10core2impl8api1;
        lib10core2impl8api1.doSomething();
        Lib10Core2Impl7Impl lib10core2impl7impl;
        lib10core2impl7impl.doSomething();
        Lib10Core2Impl8Api2 lib10core2impl8api2;
        lib10core2impl8api2.doSomething();
        Lib10Core2Impl8Api3 lib10core2impl8api3;
        lib10core2impl8api3.doSomething();
        visited = 1;
    }
}

