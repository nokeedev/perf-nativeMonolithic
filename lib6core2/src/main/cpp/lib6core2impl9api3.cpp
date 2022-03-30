// GENERATED SOURCE FILE

#include "lib6core2_private.h"
#include "lib6core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib6core2impl9api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6core2impl9api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6core2impl9api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6core2impl9api34(int a, int b) {
    return a + b;
}

int Lib6Core2Impl9Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib6Core2Impl9Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib6Core2Impl9Api3" << std::endl;
        Lib6Core2Impl9Impl lib6core2impl9impl;
        lib6core2impl9impl.doSomething();
        Lib6Core2Impl10Api1 lib6core2impl10api1;
        lib6core2impl10api1.doSomething();
        Lib6Core2Impl10Api2 lib6core2impl10api2;
        lib6core2impl10api2.doSomething();
        Lib6Core2Impl10Api3 lib6core2impl10api3;
        lib6core2impl10api3.doSomething();
        visited = 1;
    }
}

