// GENERATED SOURCE FILE

#include "lib11core2_private.h"
#include "lib11core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib11core2impl30api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core2impl30api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core2impl30api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core2impl30api14(int a, int b) {
    return a + b;
}

int Lib11Core2Impl30Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib11Core2Impl30Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib11Core2Impl30Api1" << std::endl;
        Lib11Core2Impl31Api1 lib11core2impl31api1;
        lib11core2impl31api1.doSomething();
        Lib11Core2Impl30Impl lib11core2impl30impl;
        lib11core2impl30impl.doSomething();
        Lib11Core2Impl31Api2 lib11core2impl31api2;
        lib11core2impl31api2.doSomething();
        Lib11Core2Impl31Api3 lib11core2impl31api3;
        lib11core2impl31api3.doSomething();
        visited = 1;
    }
}

