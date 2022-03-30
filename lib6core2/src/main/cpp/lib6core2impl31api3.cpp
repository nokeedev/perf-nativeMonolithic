// GENERATED SOURCE FILE

#include "lib6core2_private.h"
#include "lib6core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib6core2impl31api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6core2impl31api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6core2impl31api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6core2impl31api34(int a, int b) {
    return a + b;
}

int Lib6Core2Impl31Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib6Core2Impl31Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib6Core2Impl31Api3" << std::endl;
        Lib6Core2Impl31Impl lib6core2impl31impl;
        lib6core2impl31impl.doSomething();
        Lib6Core2Impl32Api1 lib6core2impl32api1;
        lib6core2impl32api1.doSomething();
        Lib6Core2Impl32Api2 lib6core2impl32api2;
        lib6core2impl32api2.doSomething();
        Lib6Core2Impl32Api3 lib6core2impl32api3;
        lib6core2impl32api3.doSomething();
        visited = 1;
    }
}

