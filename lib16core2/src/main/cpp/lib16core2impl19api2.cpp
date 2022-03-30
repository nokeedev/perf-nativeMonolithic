// GENERATED SOURCE FILE

#include "lib16core2_private.h"
#include "lib16core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib16core2impl19api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core2impl19api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core2impl19api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core2impl19api24(int a, int b) {
    return a + b;
}

int Lib16Core2Impl19Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib16Core2Impl19Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib16Core2Impl19Api2" << std::endl;
        Lib16Core2Impl19Impl lib16core2impl19impl;
        lib16core2impl19impl.doSomething();
        Lib16Core2Impl20Api1 lib16core2impl20api1;
        lib16core2impl20api1.doSomething();
        Lib16Core2Impl20Api2 lib16core2impl20api2;
        lib16core2impl20api2.doSomething();
        Lib16Core2Impl20Api3 lib16core2impl20api3;
        lib16core2impl20api3.doSomething();
        visited = 1;
    }
}

