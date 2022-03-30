// GENERATED SOURCE FILE

#include "lib15core2_private.h"
#include "lib15core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib15core2impl19api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core2impl19api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core2impl19api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core2impl19api24(int a, int b) {
    return a + b;
}

int Lib15Core2Impl19Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib15Core2Impl19Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib15Core2Impl19Api2" << std::endl;
        Lib15Core2Impl19Impl lib15core2impl19impl;
        lib15core2impl19impl.doSomething();
        Lib15Core2Impl20Api1 lib15core2impl20api1;
        lib15core2impl20api1.doSomething();
        Lib15Core2Impl20Api2 lib15core2impl20api2;
        lib15core2impl20api2.doSomething();
        Lib15Core2Impl20Api3 lib15core2impl20api3;
        lib15core2impl20api3.doSomething();
        visited = 1;
    }
}

