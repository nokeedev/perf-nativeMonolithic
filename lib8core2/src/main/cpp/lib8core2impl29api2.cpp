// GENERATED SOURCE FILE

#include "lib8core2_private.h"
#include "lib8core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib8core2impl29api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core2impl29api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core2impl29api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core2impl29api24(int a, int b) {
    return a + b;
}

int Lib8Core2Impl29Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib8Core2Impl29Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib8Core2Impl29Api2" << std::endl;
        Lib8Core2Impl29Impl lib8core2impl29impl;
        lib8core2impl29impl.doSomething();
        Lib8Core2Impl30Api1 lib8core2impl30api1;
        lib8core2impl30api1.doSomething();
        Lib8Core2Impl30Api2 lib8core2impl30api2;
        lib8core2impl30api2.doSomething();
        Lib8Core2Impl30Api3 lib8core2impl30api3;
        lib8core2impl30api3.doSomething();
        visited = 1;
    }
}

