// GENERATED SOURCE FILE

#include "lib11core2_private.h"
#include "lib11core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib11core2impl9api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core2impl9api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core2impl9api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core2impl9api24(int a, int b) {
    return a + b;
}

int Lib11Core2Impl9Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib11Core2Impl9Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib11Core2Impl9Api2" << std::endl;
        Lib11Core2Impl9Impl lib11core2impl9impl;
        lib11core2impl9impl.doSomething();
        Lib11Core2Impl10Api1 lib11core2impl10api1;
        lib11core2impl10api1.doSomething();
        Lib11Core2Impl10Api2 lib11core2impl10api2;
        lib11core2impl10api2.doSomething();
        Lib11Core2Impl10Api3 lib11core2impl10api3;
        lib11core2impl10api3.doSomething();
        visited = 1;
    }
}

