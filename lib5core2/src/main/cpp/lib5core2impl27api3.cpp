// GENERATED SOURCE FILE

#include "lib5core2_private.h"
#include "lib5core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib5core2impl27api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core2impl27api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core2impl27api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core2impl27api34(int a, int b) {
    return a + b;
}

int Lib5Core2Impl27Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib5Core2Impl27Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib5Core2Impl27Api3" << std::endl;
        Lib5Core2Impl27Impl lib5core2impl27impl;
        lib5core2impl27impl.doSomething();
        Lib5Core2Impl28Api1 lib5core2impl28api1;
        lib5core2impl28api1.doSomething();
        Lib5Core2Impl28Api2 lib5core2impl28api2;
        lib5core2impl28api2.doSomething();
        Lib5Core2Impl28Api3 lib5core2impl28api3;
        lib5core2impl28api3.doSomething();
        visited = 1;
    }
}

