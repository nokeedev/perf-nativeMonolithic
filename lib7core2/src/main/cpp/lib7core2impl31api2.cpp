// GENERATED SOURCE FILE

#include "lib7core2_private.h"
#include "lib7core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib7core2impl31api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core2impl31api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core2impl31api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core2impl31api24(int a, int b) {
    return a + b;
}

int Lib7Core2Impl31Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib7Core2Impl31Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib7Core2Impl31Api2" << std::endl;
        Lib7Core2Impl31Impl lib7core2impl31impl;
        lib7core2impl31impl.doSomething();
        Lib7Core2Impl32Api1 lib7core2impl32api1;
        lib7core2impl32api1.doSomething();
        Lib7Core2Impl32Api2 lib7core2impl32api2;
        lib7core2impl32api2.doSomething();
        Lib7Core2Impl32Api3 lib7core2impl32api3;
        lib7core2impl32api3.doSomething();
        visited = 1;
    }
}

