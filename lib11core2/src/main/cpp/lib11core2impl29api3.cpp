// GENERATED SOURCE FILE

#include "lib11core2_private.h"
#include "lib11core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib11core2impl29api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core2impl29api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core2impl29api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core2impl29api34(int a, int b) {
    return a + b;
}

int Lib11Core2Impl29Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib11Core2Impl29Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib11Core2Impl29Api3" << std::endl;
        Lib11Core2Impl29Impl lib11core2impl29impl;
        lib11core2impl29impl.doSomething();
        Lib11Core2Impl30Api1 lib11core2impl30api1;
        lib11core2impl30api1.doSomething();
        Lib11Core2Impl30Api2 lib11core2impl30api2;
        lib11core2impl30api2.doSomething();
        Lib11Core2Impl30Api3 lib11core2impl30api3;
        lib11core2impl30api3.doSomething();
        visited = 1;
    }
}

