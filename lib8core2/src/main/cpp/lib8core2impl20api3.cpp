// GENERATED SOURCE FILE

#include "lib8core2_private.h"
#include "lib8core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib8core2impl20api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core2impl20api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core2impl20api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core2impl20api34(int a, int b) {
    return a + b;
}

int Lib8Core2Impl20Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib8Core2Impl20Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib8Core2Impl20Api3" << std::endl;
        Lib8Core2Impl20Impl lib8core2impl20impl;
        lib8core2impl20impl.doSomething();
        Lib8Core2Impl21Api1 lib8core2impl21api1;
        lib8core2impl21api1.doSomething();
        Lib8Core2Impl21Api2 lib8core2impl21api2;
        lib8core2impl21api2.doSomething();
        Lib8Core2Impl21Api3 lib8core2impl21api3;
        lib8core2impl21api3.doSomething();
        visited = 1;
    }
}

