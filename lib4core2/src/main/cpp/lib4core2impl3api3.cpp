// GENERATED SOURCE FILE

#include "lib4core2_private.h"
#include "lib4core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib4core2impl3api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core2impl3api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core2impl3api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core2impl3api34(int a, int b) {
    return a + b;
}

int Lib4Core2Impl3Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib4Core2Impl3Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib4Core2Impl3Api3" << std::endl;
        Lib4Core2Impl3Impl lib4core2impl3impl;
        lib4core2impl3impl.doSomething();
        Lib4Core2Impl4Api1 lib4core2impl4api1;
        lib4core2impl4api1.doSomething();
        Lib4Core2Impl4Api2 lib4core2impl4api2;
        lib4core2impl4api2.doSomething();
        Lib4Core2Impl4Api3 lib4core2impl4api3;
        lib4core2impl4api3.doSomething();
        visited = 1;
    }
}

