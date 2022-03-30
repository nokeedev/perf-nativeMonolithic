// GENERATED SOURCE FILE

#include "lib7core2_private.h"
#include "lib7core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib7core2impl8api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core2impl8api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core2impl8api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core2impl8api14(int a, int b) {
    return a + b;
}

int Lib7Core2Impl8Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib7Core2Impl8Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib7Core2Impl8Api1" << std::endl;
        Lib7Core2Impl9Api1 lib7core2impl9api1;
        lib7core2impl9api1.doSomething();
        Lib7Core2Impl8Impl lib7core2impl8impl;
        lib7core2impl8impl.doSomething();
        Lib7Core2Impl9Api2 lib7core2impl9api2;
        lib7core2impl9api2.doSomething();
        Lib7Core2Impl9Api3 lib7core2impl9api3;
        lib7core2impl9api3.doSomething();
        visited = 1;
    }
}

