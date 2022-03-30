// GENERATED SOURCE FILE

#include "lib4core2_private.h"
#include "lib4core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib4core2impl10api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core2impl10api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core2impl10api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core2impl10api34(int a, int b) {
    return a + b;
}

int Lib4Core2Impl10Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib4Core2Impl10Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib4Core2Impl10Api3" << std::endl;
        Lib4Core2Impl10Impl lib4core2impl10impl;
        lib4core2impl10impl.doSomething();
        Lib4Core2Impl11Api1 lib4core2impl11api1;
        lib4core2impl11api1.doSomething();
        Lib4Core2Impl11Api2 lib4core2impl11api2;
        lib4core2impl11api2.doSomething();
        Lib4Core2Impl11Api3 lib4core2impl11api3;
        lib4core2impl11api3.doSomething();
        visited = 1;
    }
}

