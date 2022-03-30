// GENERATED SOURCE FILE

#include "lib5core2_private.h"
#include "lib5core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib5core2impl19api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core2impl19api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core2impl19api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core2impl19api24(int a, int b) {
    return a + b;
}

int Lib5Core2Impl19Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib5Core2Impl19Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib5Core2Impl19Api2" << std::endl;
        Lib5Core2Impl19Impl lib5core2impl19impl;
        lib5core2impl19impl.doSomething();
        Lib5Core2Impl20Api1 lib5core2impl20api1;
        lib5core2impl20api1.doSomething();
        Lib5Core2Impl20Api2 lib5core2impl20api2;
        lib5core2impl20api2.doSomething();
        Lib5Core2Impl20Api3 lib5core2impl20api3;
        lib5core2impl20api3.doSomething();
        visited = 1;
    }
}

