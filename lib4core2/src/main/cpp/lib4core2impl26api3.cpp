// GENERATED SOURCE FILE

#include "lib4core2_private.h"
#include "lib4core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib4core2impl26api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core2impl26api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core2impl26api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core2impl26api34(int a, int b) {
    return a + b;
}

int Lib4Core2Impl26Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib4Core2Impl26Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib4Core2Impl26Api3" << std::endl;
        Lib4Core2Impl26Impl lib4core2impl26impl;
        lib4core2impl26impl.doSomething();
        Lib4Core2Impl27Api1 lib4core2impl27api1;
        lib4core2impl27api1.doSomething();
        Lib4Core2Impl27Api2 lib4core2impl27api2;
        lib4core2impl27api2.doSomething();
        Lib4Core2Impl27Api3 lib4core2impl27api3;
        lib4core2impl27api3.doSomething();
        visited = 1;
    }
}

