// GENERATED SOURCE FILE

#include "lib16core2_private.h"
#include "lib16core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib16core2impl10api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core2impl10api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core2impl10api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core2impl10api24(int a, int b) {
    return a + b;
}

int Lib16Core2Impl10Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib16Core2Impl10Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib16Core2Impl10Api2" << std::endl;
        Lib16Core2Impl10Impl lib16core2impl10impl;
        lib16core2impl10impl.doSomething();
        Lib16Core2Impl11Api1 lib16core2impl11api1;
        lib16core2impl11api1.doSomething();
        Lib16Core2Impl11Api2 lib16core2impl11api2;
        lib16core2impl11api2.doSomething();
        Lib16Core2Impl11Api3 lib16core2impl11api3;
        lib16core2impl11api3.doSomething();
        visited = 1;
    }
}

