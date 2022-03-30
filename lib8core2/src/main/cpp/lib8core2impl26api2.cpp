// GENERATED SOURCE FILE

#include "lib8core2_private.h"
#include "lib8core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib8core2impl26api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core2impl26api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core2impl26api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core2impl26api24(int a, int b) {
    return a + b;
}

int Lib8Core2Impl26Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib8Core2Impl26Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib8Core2Impl26Api2" << std::endl;
        Lib8Core2Impl26Impl lib8core2impl26impl;
        lib8core2impl26impl.doSomething();
        Lib8Core2Impl27Api1 lib8core2impl27api1;
        lib8core2impl27api1.doSomething();
        Lib8Core2Impl27Api2 lib8core2impl27api2;
        lib8core2impl27api2.doSomething();
        Lib8Core2Impl27Api3 lib8core2impl27api3;
        lib8core2impl27api3.doSomething();
        visited = 1;
    }
}

