// GENERATED SOURCE FILE

#include "lib6core2_private.h"
#include "lib6core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib6core2impl32api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6core2impl32api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6core2impl32api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6core2impl32api34(int a, int b) {
    return a + b;
}

int Lib6Core2Impl32Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib6Core2Impl32Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib6Core2Impl32Api3" << std::endl;
        Lib6Core2Impl32Impl lib6core2impl32impl;
        lib6core2impl32impl.doSomething();
        Lib6Core2Impl33Api1 lib6core2impl33api1;
        lib6core2impl33api1.doSomething();
        Lib6Core2Impl33Api2 lib6core2impl33api2;
        lib6core2impl33api2.doSomething();
        Lib6Core2Impl33Api3 lib6core2impl33api3;
        lib6core2impl33api3.doSomething();
        visited = 1;
    }
}

