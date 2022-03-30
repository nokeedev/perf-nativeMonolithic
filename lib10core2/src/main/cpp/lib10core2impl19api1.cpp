// GENERATED SOURCE FILE

#include "lib10core2_private.h"
#include "lib10core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib10core2impl19api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core2impl19api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core2impl19api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core2impl19api14(int a, int b) {
    return a + b;
}

int Lib10Core2Impl19Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib10Core2Impl19Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib10Core2Impl19Api1" << std::endl;
        Lib10Core2Impl20Api1 lib10core2impl20api1;
        lib10core2impl20api1.doSomething();
        Lib10Core2Impl19Impl lib10core2impl19impl;
        lib10core2impl19impl.doSomething();
        Lib10Core2Impl20Api2 lib10core2impl20api2;
        lib10core2impl20api2.doSomething();
        Lib10Core2Impl20Api3 lib10core2impl20api3;
        lib10core2impl20api3.doSomething();
        visited = 1;
    }
}

