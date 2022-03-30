// GENERATED SOURCE FILE

#include "lib5core2_private.h"
#include "lib5core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib5core2impl25api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core2impl25api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core2impl25api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core2impl25api24(int a, int b) {
    return a + b;
}

int Lib5Core2Impl25Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib5Core2Impl25Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib5Core2Impl25Api2" << std::endl;
        Lib5Core2Impl25Impl lib5core2impl25impl;
        lib5core2impl25impl.doSomething();
        Lib5Core2Impl26Api1 lib5core2impl26api1;
        lib5core2impl26api1.doSomething();
        Lib5Core2Impl26Api2 lib5core2impl26api2;
        lib5core2impl26api2.doSomething();
        Lib5Core2Impl26Api3 lib5core2impl26api3;
        lib5core2impl26api3.doSomething();
        visited = 1;
    }
}

