// GENERATED SOURCE FILE

#include "lib7core2_private.h"
#include "lib7core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib7core2impl29api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core2impl29api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core2impl29api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core2impl29api24(int a, int b) {
    return a + b;
}

int Lib7Core2Impl29Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib7Core2Impl29Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib7Core2Impl29Api2" << std::endl;
        Lib7Core2Impl29Impl lib7core2impl29impl;
        lib7core2impl29impl.doSomething();
        Lib7Core2Impl30Api1 lib7core2impl30api1;
        lib7core2impl30api1.doSomething();
        Lib7Core2Impl30Api2 lib7core2impl30api2;
        lib7core2impl30api2.doSomething();
        Lib7Core2Impl30Api3 lib7core2impl30api3;
        lib7core2impl30api3.doSomething();
        visited = 1;
    }
}

