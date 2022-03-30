// GENERATED SOURCE FILE

#include "lib13core2_private.h"
#include "lib13core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib13core2impl19api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core2impl19api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core2impl19api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core2impl19api34(int a, int b) {
    return a + b;
}

int Lib13Core2Impl19Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib13Core2Impl19Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib13Core2Impl19Api3" << std::endl;
        Lib13Core2Impl19Impl lib13core2impl19impl;
        lib13core2impl19impl.doSomething();
        Lib13Core2Impl20Api1 lib13core2impl20api1;
        lib13core2impl20api1.doSomething();
        Lib13Core2Impl20Api2 lib13core2impl20api2;
        lib13core2impl20api2.doSomething();
        Lib13Core2Impl20Api3 lib13core2impl20api3;
        lib13core2impl20api3.doSomething();
        visited = 1;
    }
}

