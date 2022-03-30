// GENERATED SOURCE FILE

#include "lib14core2_private.h"
#include "lib14core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib14core2impl25api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core2impl25api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core2impl25api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core2impl25api34(int a, int b) {
    return a + b;
}

int Lib14Core2Impl25Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib14Core2Impl25Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib14Core2Impl25Api3" << std::endl;
        Lib14Core2Impl25Impl lib14core2impl25impl;
        lib14core2impl25impl.doSomething();
        Lib14Core2Impl26Api1 lib14core2impl26api1;
        lib14core2impl26api1.doSomething();
        Lib14Core2Impl26Api2 lib14core2impl26api2;
        lib14core2impl26api2.doSomething();
        Lib14Core2Impl26Api3 lib14core2impl26api3;
        lib14core2impl26api3.doSomething();
        visited = 1;
    }
}

