// GENERATED SOURCE FILE

#include "lib16core2_private.h"
#include "lib16core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib16core2impl18api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core2impl18api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core2impl18api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core2impl18api24(int a, int b) {
    return a + b;
}

int Lib16Core2Impl18Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib16Core2Impl18Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib16Core2Impl18Api2" << std::endl;
        Lib16Core2Impl18Impl lib16core2impl18impl;
        lib16core2impl18impl.doSomething();
        Lib16Core2Impl19Api1 lib16core2impl19api1;
        lib16core2impl19api1.doSomething();
        Lib16Core2Impl19Api2 lib16core2impl19api2;
        lib16core2impl19api2.doSomething();
        Lib16Core2Impl19Api3 lib16core2impl19api3;
        lib16core2impl19api3.doSomething();
        visited = 1;
    }
}

