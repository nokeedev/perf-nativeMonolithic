// GENERATED SOURCE FILE

#include "lib7core2_private.h"
#include "lib7core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib7core2impl19api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core2impl19api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core2impl19api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core2impl19api14(int a, int b) {
    return a + b;
}

int Lib7Core2Impl19Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib7Core2Impl19Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib7Core2Impl19Api1" << std::endl;
        Lib7Core2Impl20Api1 lib7core2impl20api1;
        lib7core2impl20api1.doSomething();
        Lib7Core2Impl19Impl lib7core2impl19impl;
        lib7core2impl19impl.doSomething();
        Lib7Core2Impl20Api2 lib7core2impl20api2;
        lib7core2impl20api2.doSomething();
        Lib7Core2Impl20Api3 lib7core2impl20api3;
        lib7core2impl20api3.doSomething();
        visited = 1;
    }
}

