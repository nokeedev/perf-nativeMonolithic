// GENERATED SOURCE FILE

#include "lib7core2_private.h"
#include "lib7core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib7core2impl30api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core2impl30api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core2impl30api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core2impl30api34(int a, int b) {
    return a + b;
}

int Lib7Core2Impl30Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib7Core2Impl30Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib7Core2Impl30Api3" << std::endl;
        Lib7Core2Impl30Impl lib7core2impl30impl;
        lib7core2impl30impl.doSomething();
        Lib7Core2Impl31Api1 lib7core2impl31api1;
        lib7core2impl31api1.doSomething();
        Lib7Core2Impl31Api2 lib7core2impl31api2;
        lib7core2impl31api2.doSomething();
        Lib7Core2Impl31Api3 lib7core2impl31api3;
        lib7core2impl31api3.doSomething();
        visited = 1;
    }
}

