// GENERATED SOURCE FILE

#include "lib15core2_private.h"
#include "lib15core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib15core2impl10api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core2impl10api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core2impl10api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core2impl10api14(int a, int b) {
    return a + b;
}

int Lib15Core2Impl10Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib15Core2Impl10Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib15Core2Impl10Api1" << std::endl;
        Lib15Core2Impl11Api1 lib15core2impl11api1;
        lib15core2impl11api1.doSomething();
        Lib15Core2Impl10Impl lib15core2impl10impl;
        lib15core2impl10impl.doSomething();
        Lib15Core2Impl11Api2 lib15core2impl11api2;
        lib15core2impl11api2.doSomething();
        Lib15Core2Impl11Api3 lib15core2impl11api3;
        lib15core2impl11api3.doSomething();
        visited = 1;
    }
}

