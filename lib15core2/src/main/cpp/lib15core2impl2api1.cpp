// GENERATED SOURCE FILE

#include "lib15core2_private.h"
#include "lib15core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib15core2impl2api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core2impl2api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core2impl2api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core2impl2api14(int a, int b) {
    return a + b;
}

int Lib15Core2Impl2Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib15Core2Impl2Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib15Core2Impl2Api1" << std::endl;
        Lib15Core2Impl3Api1 lib15core2impl3api1;
        lib15core2impl3api1.doSomething();
        Lib15Core2Impl2Impl lib15core2impl2impl;
        lib15core2impl2impl.doSomething();
        Lib15Core2Impl3Api2 lib15core2impl3api2;
        lib15core2impl3api2.doSomething();
        Lib15Core2Impl3Api3 lib15core2impl3api3;
        lib15core2impl3api3.doSomething();
        visited = 1;
    }
}

