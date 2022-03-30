// GENERATED SOURCE FILE

#include "lib8core2_private.h"
#include "lib8core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib8core2impl26api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core2impl26api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core2impl26api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core2impl26api14(int a, int b) {
    return a + b;
}

int Lib8Core2Impl26Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib8Core2Impl26Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib8Core2Impl26Api1" << std::endl;
        Lib8Core2Impl27Api1 lib8core2impl27api1;
        lib8core2impl27api1.doSomething();
        Lib8Core2Impl26Impl lib8core2impl26impl;
        lib8core2impl26impl.doSomething();
        Lib8Core2Impl27Api2 lib8core2impl27api2;
        lib8core2impl27api2.doSomething();
        Lib8Core2Impl27Api3 lib8core2impl27api3;
        lib8core2impl27api3.doSomething();
        visited = 1;
    }
}

