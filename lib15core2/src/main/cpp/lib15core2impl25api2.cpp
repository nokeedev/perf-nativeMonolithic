// GENERATED SOURCE FILE

#include "lib15core2_private.h"
#include "lib15core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib15core2impl25api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core2impl25api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core2impl25api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core2impl25api24(int a, int b) {
    return a + b;
}

int Lib15Core2Impl25Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib15Core2Impl25Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib15Core2Impl25Api2" << std::endl;
        Lib15Core2Impl25Impl lib15core2impl25impl;
        lib15core2impl25impl.doSomething();
        Lib15Core2Impl26Api1 lib15core2impl26api1;
        lib15core2impl26api1.doSomething();
        Lib15Core2Impl26Api2 lib15core2impl26api2;
        lib15core2impl26api2.doSomething();
        Lib15Core2Impl26Api3 lib15core2impl26api3;
        lib15core2impl26api3.doSomething();
        visited = 1;
    }
}

