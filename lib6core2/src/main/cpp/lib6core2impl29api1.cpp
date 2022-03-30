// GENERATED SOURCE FILE

#include "lib6core2_private.h"
#include "lib6core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib6core2impl29api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6core2impl29api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6core2impl29api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6core2impl29api14(int a, int b) {
    return a + b;
}

int Lib6Core2Impl29Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib6Core2Impl29Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib6Core2Impl29Api1" << std::endl;
        Lib6Core2Impl30Api1 lib6core2impl30api1;
        lib6core2impl30api1.doSomething();
        Lib6Core2Impl29Impl lib6core2impl29impl;
        lib6core2impl29impl.doSomething();
        Lib6Core2Impl30Api2 lib6core2impl30api2;
        lib6core2impl30api2.doSomething();
        Lib6Core2Impl30Api3 lib6core2impl30api3;
        lib6core2impl30api3.doSomething();
        visited = 1;
    }
}

