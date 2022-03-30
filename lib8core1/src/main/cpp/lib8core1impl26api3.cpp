// GENERATED SOURCE FILE

#include "lib8core1_private.h"
#include "lib8core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib8core1impl26api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core1impl26api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core1impl26api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core1impl26api34(int a, int b) {
    return a + b;
}

int Lib8Core1Impl26Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib8Core1Impl26Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib8Core1Impl26Api3" << std::endl;
        Lib8Core1Impl26Impl lib8core1impl26impl;
        lib8core1impl26impl.doSomething();
        Lib8Core1Impl27Api1 lib8core1impl27api1;
        lib8core1impl27api1.doSomething();
        Lib8Core1Impl27Api2 lib8core1impl27api2;
        lib8core1impl27api2.doSomething();
        Lib8Core1Impl27Api3 lib8core1impl27api3;
        lib8core1impl27api3.doSomething();
        visited = 1;
    }
}

