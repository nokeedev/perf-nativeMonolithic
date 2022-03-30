// GENERATED SOURCE FILE

#include "lib15core2_private.h"
#include "lib15core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib15core2impl30api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core2impl30api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core2impl30api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core2impl30api24(int a, int b) {
    return a + b;
}

int Lib15Core2Impl30Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib15Core2Impl30Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib15Core2Impl30Api2" << std::endl;
        Lib15Core2Impl30Impl lib15core2impl30impl;
        lib15core2impl30impl.doSomething();
        Lib15Core2Impl31Api1 lib15core2impl31api1;
        lib15core2impl31api1.doSomething();
        Lib15Core2Impl31Api2 lib15core2impl31api2;
        lib15core2impl31api2.doSomething();
        Lib15Core2Impl31Api3 lib15core2impl31api3;
        lib15core2impl31api3.doSomething();
        visited = 1;
    }
}

