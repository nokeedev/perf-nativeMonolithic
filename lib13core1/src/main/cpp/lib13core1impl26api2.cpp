// GENERATED SOURCE FILE

#include "lib13core1_private.h"
#include "lib13core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib13core1impl26api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core1impl26api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core1impl26api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core1impl26api24(int a, int b) {
    return a + b;
}

int Lib13Core1Impl26Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib13Core1Impl26Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib13Core1Impl26Api2" << std::endl;
        Lib13Core1Impl26Impl lib13core1impl26impl;
        lib13core1impl26impl.doSomething();
        Lib13Core1Impl27Api1 lib13core1impl27api1;
        lib13core1impl27api1.doSomething();
        Lib13Core1Impl27Api2 lib13core1impl27api2;
        lib13core1impl27api2.doSomething();
        Lib13Core1Impl27Api3 lib13core1impl27api3;
        lib13core1impl27api3.doSomething();
        visited = 1;
    }
}

