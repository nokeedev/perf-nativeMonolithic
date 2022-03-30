// GENERATED SOURCE FILE

#include "lib13core2_private.h"
#include "lib13core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib13core2impl18api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core2impl18api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core2impl18api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core2impl18api24(int a, int b) {
    return a + b;
}

int Lib13Core2Impl18Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib13Core2Impl18Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib13Core2Impl18Api2" << std::endl;
        Lib13Core2Impl18Impl lib13core2impl18impl;
        lib13core2impl18impl.doSomething();
        Lib13Core2Impl19Api1 lib13core2impl19api1;
        lib13core2impl19api1.doSomething();
        Lib13Core2Impl19Api2 lib13core2impl19api2;
        lib13core2impl19api2.doSomething();
        Lib13Core2Impl19Api3 lib13core2impl19api3;
        lib13core2impl19api3.doSomething();
        visited = 1;
    }
}

