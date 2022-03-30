// GENERATED SOURCE FILE

#include "lib7core2_private.h"
#include "lib7core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib7core2impl32api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core2impl32api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core2impl32api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core2impl32api14(int a, int b) {
    return a + b;
}

int Lib7Core2Impl32Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib7Core2Impl32Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib7Core2Impl32Api1" << std::endl;
        Lib7Core2Impl33Api1 lib7core2impl33api1;
        lib7core2impl33api1.doSomething();
        Lib7Core2Impl32Impl lib7core2impl32impl;
        lib7core2impl32impl.doSomething();
        Lib7Core2Impl33Api2 lib7core2impl33api2;
        lib7core2impl33api2.doSomething();
        Lib7Core2Impl33Api3 lib7core2impl33api3;
        lib7core2impl33api3.doSomething();
        visited = 1;
    }
}

