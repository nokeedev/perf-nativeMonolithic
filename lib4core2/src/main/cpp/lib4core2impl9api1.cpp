// GENERATED SOURCE FILE

#include "lib4core2_private.h"
#include "lib4core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib4core2impl9api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core2impl9api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core2impl9api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core2impl9api14(int a, int b) {
    return a + b;
}

int Lib4Core2Impl9Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib4Core2Impl9Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib4Core2Impl9Api1" << std::endl;
        Lib4Core2Impl10Api1 lib4core2impl10api1;
        lib4core2impl10api1.doSomething();
        Lib4Core2Impl9Impl lib4core2impl9impl;
        lib4core2impl9impl.doSomething();
        Lib4Core2Impl10Api2 lib4core2impl10api2;
        lib4core2impl10api2.doSomething();
        Lib4Core2Impl10Api3 lib4core2impl10api3;
        lib4core2impl10api3.doSomething();
        visited = 1;
    }
}

