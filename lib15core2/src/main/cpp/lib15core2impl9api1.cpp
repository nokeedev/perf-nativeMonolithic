// GENERATED SOURCE FILE

#include "lib15core2_private.h"
#include "lib15core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib15core2impl9api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core2impl9api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core2impl9api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core2impl9api14(int a, int b) {
    return a + b;
}

int Lib15Core2Impl9Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib15Core2Impl9Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib15Core2Impl9Api1" << std::endl;
        Lib15Core2Impl10Api1 lib15core2impl10api1;
        lib15core2impl10api1.doSomething();
        Lib15Core2Impl9Impl lib15core2impl9impl;
        lib15core2impl9impl.doSomething();
        Lib15Core2Impl10Api2 lib15core2impl10api2;
        lib15core2impl10api2.doSomething();
        Lib15Core2Impl10Api3 lib15core2impl10api3;
        lib15core2impl10api3.doSomething();
        visited = 1;
    }
}

