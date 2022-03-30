// GENERATED SOURCE FILE

#include "lib13core2_private.h"
#include "lib13core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib13core2impl25api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core2impl25api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core2impl25api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core2impl25api34(int a, int b) {
    return a + b;
}

int Lib13Core2Impl25Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib13Core2Impl25Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib13Core2Impl25Api3" << std::endl;
        Lib13Core2Impl25Impl lib13core2impl25impl;
        lib13core2impl25impl.doSomething();
        Lib13Core2Impl26Api1 lib13core2impl26api1;
        lib13core2impl26api1.doSomething();
        Lib13Core2Impl26Api2 lib13core2impl26api2;
        lib13core2impl26api2.doSomething();
        Lib13Core2Impl26Api3 lib13core2impl26api3;
        lib13core2impl26api3.doSomething();
        visited = 1;
    }
}

