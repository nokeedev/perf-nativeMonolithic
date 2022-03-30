// GENERATED SOURCE FILE

#include "lib15core2_private.h"
#include "lib15core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib15core2impl7api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core2impl7api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core2impl7api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core2impl7api24(int a, int b) {
    return a + b;
}

int Lib15Core2Impl7Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib15Core2Impl7Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib15Core2Impl7Api2" << std::endl;
        Lib15Core2Impl7Impl lib15core2impl7impl;
        lib15core2impl7impl.doSomething();
        Lib15Core2Impl8Api1 lib15core2impl8api1;
        lib15core2impl8api1.doSomething();
        Lib15Core2Impl8Api2 lib15core2impl8api2;
        lib15core2impl8api2.doSomething();
        Lib15Core2Impl8Api3 lib15core2impl8api3;
        lib15core2impl8api3.doSomething();
        visited = 1;
    }
}

