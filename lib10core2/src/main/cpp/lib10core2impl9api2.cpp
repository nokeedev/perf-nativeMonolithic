// GENERATED SOURCE FILE

#include "lib10core2_private.h"
#include "lib10core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib10core2impl9api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core2impl9api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core2impl9api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core2impl9api24(int a, int b) {
    return a + b;
}

int Lib10Core2Impl9Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib10Core2Impl9Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib10Core2Impl9Api2" << std::endl;
        Lib10Core2Impl9Impl lib10core2impl9impl;
        lib10core2impl9impl.doSomething();
        Lib10Core2Impl10Api1 lib10core2impl10api1;
        lib10core2impl10api1.doSomething();
        Lib10Core2Impl10Api2 lib10core2impl10api2;
        lib10core2impl10api2.doSomething();
        Lib10Core2Impl10Api3 lib10core2impl10api3;
        lib10core2impl10api3.doSomething();
        visited = 1;
    }
}

