// GENERATED SOURCE FILE

#include "lib10core2_private.h"
#include "lib10core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib10core2impl28api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core2impl28api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core2impl28api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core2impl28api34(int a, int b) {
    return a + b;
}

int Lib10Core2Impl28Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib10Core2Impl28Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib10Core2Impl28Api3" << std::endl;
        Lib10Core2Impl28Impl lib10core2impl28impl;
        lib10core2impl28impl.doSomething();
        Lib10Core2Impl29Api1 lib10core2impl29api1;
        lib10core2impl29api1.doSomething();
        Lib10Core2Impl29Api2 lib10core2impl29api2;
        lib10core2impl29api2.doSomething();
        Lib10Core2Impl29Api3 lib10core2impl29api3;
        lib10core2impl29api3.doSomething();
        visited = 1;
    }
}

