// GENERATED SOURCE FILE

#include "lib6core2_private.h"
#include "lib6core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib6core2impl14api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6core2impl14api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6core2impl14api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6core2impl14api34(int a, int b) {
    return a + b;
}

int Lib6Core2Impl14Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib6Core2Impl14Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib6Core2Impl14Api3" << std::endl;
        Lib6Core2Impl14Impl lib6core2impl14impl;
        lib6core2impl14impl.doSomething();
        Lib6Core2Impl15Api1 lib6core2impl15api1;
        lib6core2impl15api1.doSomething();
        Lib6Core2Impl15Api2 lib6core2impl15api2;
        lib6core2impl15api2.doSomething();
        Lib6Core2Impl15Api3 lib6core2impl15api3;
        lib6core2impl15api3.doSomething();
        visited = 1;
    }
}

