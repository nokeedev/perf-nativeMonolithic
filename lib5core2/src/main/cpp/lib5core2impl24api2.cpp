// GENERATED SOURCE FILE

#include "lib5core2_private.h"
#include "lib5core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib5core2impl24api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core2impl24api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core2impl24api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core2impl24api24(int a, int b) {
    return a + b;
}

int Lib5Core2Impl24Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib5Core2Impl24Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib5Core2Impl24Api2" << std::endl;
        Lib5Core2Impl24Impl lib5core2impl24impl;
        lib5core2impl24impl.doSomething();
        Lib5Core2Impl25Api1 lib5core2impl25api1;
        lib5core2impl25api1.doSomething();
        Lib5Core2Impl25Api2 lib5core2impl25api2;
        lib5core2impl25api2.doSomething();
        Lib5Core2Impl25Api3 lib5core2impl25api3;
        lib5core2impl25api3.doSomething();
        visited = 1;
    }
}

