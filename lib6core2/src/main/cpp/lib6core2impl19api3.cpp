// GENERATED SOURCE FILE

#include "lib6core2_private.h"
#include "lib6core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib6core2impl19api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6core2impl19api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6core2impl19api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6core2impl19api34(int a, int b) {
    return a + b;
}

int Lib6Core2Impl19Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib6Core2Impl19Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib6Core2Impl19Api3" << std::endl;
        Lib6Core2Impl19Impl lib6core2impl19impl;
        lib6core2impl19impl.doSomething();
        Lib6Core2Impl20Api1 lib6core2impl20api1;
        lib6core2impl20api1.doSomething();
        Lib6Core2Impl20Api2 lib6core2impl20api2;
        lib6core2impl20api2.doSomething();
        Lib6Core2Impl20Api3 lib6core2impl20api3;
        lib6core2impl20api3.doSomething();
        visited = 1;
    }
}

