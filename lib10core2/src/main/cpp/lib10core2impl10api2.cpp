// GENERATED SOURCE FILE

#include "lib10core2_private.h"
#include "lib10core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib10core2impl10api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core2impl10api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core2impl10api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core2impl10api24(int a, int b) {
    return a + b;
}

int Lib10Core2Impl10Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib10Core2Impl10Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib10Core2Impl10Api2" << std::endl;
        Lib10Core2Impl10Impl lib10core2impl10impl;
        lib10core2impl10impl.doSomething();
        Lib10Core2Impl11Api1 lib10core2impl11api1;
        lib10core2impl11api1.doSomething();
        Lib10Core2Impl11Api2 lib10core2impl11api2;
        lib10core2impl11api2.doSomething();
        Lib10Core2Impl11Api3 lib10core2impl11api3;
        lib10core2impl11api3.doSomething();
        visited = 1;
    }
}

