// GENERATED SOURCE FILE

#include "lib7core2_private.h"
#include "lib7core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib7core2impl10api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core2impl10api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core2impl10api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core2impl10api34(int a, int b) {
    return a + b;
}

int Lib7Core2Impl10Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib7Core2Impl10Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib7Core2Impl10Api3" << std::endl;
        Lib7Core2Impl10Impl lib7core2impl10impl;
        lib7core2impl10impl.doSomething();
        Lib7Core2Impl11Api1 lib7core2impl11api1;
        lib7core2impl11api1.doSomething();
        Lib7Core2Impl11Api2 lib7core2impl11api2;
        lib7core2impl11api2.doSomething();
        Lib7Core2Impl11Api3 lib7core2impl11api3;
        lib7core2impl11api3.doSomething();
        visited = 1;
    }
}

