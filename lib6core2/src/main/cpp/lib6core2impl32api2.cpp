// GENERATED SOURCE FILE

#include "lib6core2_private.h"
#include "lib6core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib6core2impl32api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6core2impl32api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6core2impl32api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6core2impl32api24(int a, int b) {
    return a + b;
}

int Lib6Core2Impl32Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib6Core2Impl32Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib6Core2Impl32Api2" << std::endl;
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

