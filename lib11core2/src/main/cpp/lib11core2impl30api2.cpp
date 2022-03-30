// GENERATED SOURCE FILE

#include "lib11core2_private.h"
#include "lib11core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib11core2impl30api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core2impl30api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core2impl30api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core2impl30api24(int a, int b) {
    return a + b;
}

int Lib11Core2Impl30Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib11Core2Impl30Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib11Core2Impl30Api2" << std::endl;
        Lib11Core2Impl30Impl lib11core2impl30impl;
        lib11core2impl30impl.doSomething();
        Lib11Core2Impl31Api1 lib11core2impl31api1;
        lib11core2impl31api1.doSomething();
        Lib11Core2Impl31Api2 lib11core2impl31api2;
        lib11core2impl31api2.doSomething();
        Lib11Core2Impl31Api3 lib11core2impl31api3;
        lib11core2impl31api3.doSomething();
        visited = 1;
    }
}

