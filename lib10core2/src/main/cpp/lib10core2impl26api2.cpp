// GENERATED SOURCE FILE

#include "lib10core2_private.h"
#include "lib10core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib10core2impl26api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core2impl26api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core2impl26api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core2impl26api24(int a, int b) {
    return a + b;
}

int Lib10Core2Impl26Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib10Core2Impl26Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib10Core2Impl26Api2" << std::endl;
        Lib10Core2Impl26Impl lib10core2impl26impl;
        lib10core2impl26impl.doSomething();
        Lib10Core2Impl27Api1 lib10core2impl27api1;
        lib10core2impl27api1.doSomething();
        Lib10Core2Impl27Api2 lib10core2impl27api2;
        lib10core2impl27api2.doSomething();
        Lib10Core2Impl27Api3 lib10core2impl27api3;
        lib10core2impl27api3.doSomething();
        visited = 1;
    }
}

