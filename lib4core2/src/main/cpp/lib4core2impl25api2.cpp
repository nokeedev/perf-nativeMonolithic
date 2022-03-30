// GENERATED SOURCE FILE

#include "lib4core2_private.h"
#include "lib4core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib4core2impl25api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core2impl25api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core2impl25api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core2impl25api24(int a, int b) {
    return a + b;
}

int Lib4Core2Impl25Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib4Core2Impl25Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib4Core2Impl25Api2" << std::endl;
        Lib4Core2Impl25Impl lib4core2impl25impl;
        lib4core2impl25impl.doSomething();
        Lib4Core2Impl26Api1 lib4core2impl26api1;
        lib4core2impl26api1.doSomething();
        Lib4Core2Impl26Api2 lib4core2impl26api2;
        lib4core2impl26api2.doSomething();
        Lib4Core2Impl26Api3 lib4core2impl26api3;
        lib4core2impl26api3.doSomething();
        visited = 1;
    }
}

