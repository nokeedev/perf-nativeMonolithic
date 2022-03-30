// GENERATED SOURCE FILE

#include "lib5core2_private.h"
#include "lib5core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib5core2impl9api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core2impl9api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core2impl9api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core2impl9api34(int a, int b) {
    return a + b;
}

int Lib5Core2Impl9Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib5Core2Impl9Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib5Core2Impl9Api3" << std::endl;
        Lib5Core2Impl9Impl lib5core2impl9impl;
        lib5core2impl9impl.doSomething();
        Lib5Core2Impl10Api1 lib5core2impl10api1;
        lib5core2impl10api1.doSomething();
        Lib5Core2Impl10Api2 lib5core2impl10api2;
        lib5core2impl10api2.doSomething();
        Lib5Core2Impl10Api3 lib5core2impl10api3;
        lib5core2impl10api3.doSomething();
        visited = 1;
    }
}

