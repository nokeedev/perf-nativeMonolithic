// GENERATED SOURCE FILE

#include "lib15core2_private.h"
#include "lib15core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib15core2impl31api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core2impl31api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core2impl31api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core2impl31api34(int a, int b) {
    return a + b;
}

int Lib15Core2Impl31Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib15Core2Impl31Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib15Core2Impl31Api3" << std::endl;
        Lib15Core2Impl31Impl lib15core2impl31impl;
        lib15core2impl31impl.doSomething();
        Lib15Core2Impl32Api1 lib15core2impl32api1;
        lib15core2impl32api1.doSomething();
        Lib15Core2Impl32Api2 lib15core2impl32api2;
        lib15core2impl32api2.doSomething();
        Lib15Core2Impl32Api3 lib15core2impl32api3;
        lib15core2impl32api3.doSomething();
        visited = 1;
    }
}

