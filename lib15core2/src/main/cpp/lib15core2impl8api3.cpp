// GENERATED SOURCE FILE

#include "lib15core2_private.h"
#include "lib15core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib15core2impl8api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core2impl8api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core2impl8api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core2impl8api34(int a, int b) {
    return a + b;
}

int Lib15Core2Impl8Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib15Core2Impl8Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib15Core2Impl8Api3" << std::endl;
        Lib15Core2Impl8Impl lib15core2impl8impl;
        lib15core2impl8impl.doSomething();
        Lib15Core2Impl9Api1 lib15core2impl9api1;
        lib15core2impl9api1.doSomething();
        Lib15Core2Impl9Api2 lib15core2impl9api2;
        lib15core2impl9api2.doSomething();
        Lib15Core2Impl9Api3 lib15core2impl9api3;
        lib15core2impl9api3.doSomething();
        visited = 1;
    }
}

