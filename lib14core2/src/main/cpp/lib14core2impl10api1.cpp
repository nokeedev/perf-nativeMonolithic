// GENERATED SOURCE FILE

#include "lib14core2_private.h"
#include "lib14core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib14core2impl10api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core2impl10api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core2impl10api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core2impl10api14(int a, int b) {
    return a + b;
}

int Lib14Core2Impl10Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib14Core2Impl10Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib14Core2Impl10Api1" << std::endl;
        Lib14Core2Impl11Api1 lib14core2impl11api1;
        lib14core2impl11api1.doSomething();
        Lib14Core2Impl10Impl lib14core2impl10impl;
        lib14core2impl10impl.doSomething();
        Lib14Core2Impl11Api2 lib14core2impl11api2;
        lib14core2impl11api2.doSomething();
        Lib14Core2Impl11Api3 lib14core2impl11api3;
        lib14core2impl11api3.doSomething();
        visited = 1;
    }
}

