// GENERATED SOURCE FILE

#include "lib10core2_private.h"
#include "lib10core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib10core2impl3api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core2impl3api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core2impl3api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core2impl3api34(int a, int b) {
    return a + b;
}

int Lib10Core2Impl3Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib10Core2Impl3Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib10Core2Impl3Api3" << std::endl;
        Lib10Core2Impl3Impl lib10core2impl3impl;
        lib10core2impl3impl.doSomething();
        Lib10Core2Impl4Api1 lib10core2impl4api1;
        lib10core2impl4api1.doSomething();
        Lib10Core2Impl4Api2 lib10core2impl4api2;
        lib10core2impl4api2.doSomething();
        Lib10Core2Impl4Api3 lib10core2impl4api3;
        lib10core2impl4api3.doSomething();
        visited = 1;
    }
}

