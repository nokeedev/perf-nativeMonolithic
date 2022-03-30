// GENERATED SOURCE FILE

#include "lib11core2_private.h"
#include "lib11core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib11core2impl10api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core2impl10api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core2impl10api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core2impl10api34(int a, int b) {
    return a + b;
}

int Lib11Core2Impl10Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib11Core2Impl10Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib11Core2Impl10Api3" << std::endl;
        Lib11Core2Impl10Impl lib11core2impl10impl;
        lib11core2impl10impl.doSomething();
        Lib11Core2Impl11Api1 lib11core2impl11api1;
        lib11core2impl11api1.doSomething();
        Lib11Core2Impl11Api2 lib11core2impl11api2;
        lib11core2impl11api2.doSomething();
        Lib11Core2Impl11Api3 lib11core2impl11api3;
        lib11core2impl11api3.doSomething();
        visited = 1;
    }
}

