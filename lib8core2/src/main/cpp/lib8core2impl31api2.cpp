// GENERATED SOURCE FILE

#include "lib8core2_private.h"
#include "lib8core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib8core2impl31api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core2impl31api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core2impl31api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core2impl31api24(int a, int b) {
    return a + b;
}

int Lib8Core2Impl31Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib8Core2Impl31Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib8Core2Impl31Api2" << std::endl;
        Lib8Core2Impl31Impl lib8core2impl31impl;
        lib8core2impl31impl.doSomething();
        Lib8Core2Impl32Api1 lib8core2impl32api1;
        lib8core2impl32api1.doSomething();
        Lib8Core2Impl32Api2 lib8core2impl32api2;
        lib8core2impl32api2.doSomething();
        Lib8Core2Impl32Api3 lib8core2impl32api3;
        lib8core2impl32api3.doSomething();
        visited = 1;
    }
}

