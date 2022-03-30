// GENERATED SOURCE FILE

#include "lib16core2_private.h"
#include "lib16core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib16core2impl28api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core2impl28api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core2impl28api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core2impl28api34(int a, int b) {
    return a + b;
}

int Lib16Core2Impl28Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib16Core2Impl28Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib16Core2Impl28Api3" << std::endl;
        Lib16Core2Impl28Impl lib16core2impl28impl;
        lib16core2impl28impl.doSomething();
        Lib16Core2Impl29Api1 lib16core2impl29api1;
        lib16core2impl29api1.doSomething();
        Lib16Core2Impl29Api2 lib16core2impl29api2;
        lib16core2impl29api2.doSomething();
        Lib16Core2Impl29Api3 lib16core2impl29api3;
        lib16core2impl29api3.doSomething();
        visited = 1;
    }
}

