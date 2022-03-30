// GENERATED SOURCE FILE

#include "lib15core2_private.h"
#include "lib15core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib15core2impl29api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core2impl29api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core2impl29api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core2impl29api14(int a, int b) {
    return a + b;
}

int Lib15Core2Impl29Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib15Core2Impl29Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib15Core2Impl29Api1" << std::endl;
        Lib15Core2Impl30Api1 lib15core2impl30api1;
        lib15core2impl30api1.doSomething();
        Lib15Core2Impl29Impl lib15core2impl29impl;
        lib15core2impl29impl.doSomething();
        Lib15Core2Impl30Api2 lib15core2impl30api2;
        lib15core2impl30api2.doSomething();
        Lib15Core2Impl30Api3 lib15core2impl30api3;
        lib15core2impl30api3.doSomething();
        visited = 1;
    }
}

