// GENERATED SOURCE FILE

#include "lib5core2_private.h"
#include "lib5core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib5core2impl28api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core2impl28api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core2impl28api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core2impl28api34(int a, int b) {
    return a + b;
}

int Lib5Core2Impl28Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib5Core2Impl28Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib5Core2Impl28Api3" << std::endl;
        Lib5Core2Impl28Impl lib5core2impl28impl;
        lib5core2impl28impl.doSomething();
        Lib5Core2Impl29Api1 lib5core2impl29api1;
        lib5core2impl29api1.doSomething();
        Lib5Core2Impl29Api2 lib5core2impl29api2;
        lib5core2impl29api2.doSomething();
        Lib5Core2Impl29Api3 lib5core2impl29api3;
        lib5core2impl29api3.doSomething();
        visited = 1;
    }
}

