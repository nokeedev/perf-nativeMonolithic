// GENERATED SOURCE FILE

#include "lib16core2_private.h"
#include "lib16core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib16core2impl31api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core2impl31api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core2impl31api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core2impl31api24(int a, int b) {
    return a + b;
}

int Lib16Core2Impl31Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib16Core2Impl31Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib16Core2Impl31Api2" << std::endl;
        Lib16Core2Impl31Impl lib16core2impl31impl;
        lib16core2impl31impl.doSomething();
        Lib16Core2Impl32Api1 lib16core2impl32api1;
        lib16core2impl32api1.doSomething();
        Lib16Core2Impl32Api2 lib16core2impl32api2;
        lib16core2impl32api2.doSomething();
        Lib16Core2Impl32Api3 lib16core2impl32api3;
        lib16core2impl32api3.doSomething();
        visited = 1;
    }
}

