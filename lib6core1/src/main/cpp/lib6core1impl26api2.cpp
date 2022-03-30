// GENERATED SOURCE FILE

#include "lib6core1_private.h"
#include "lib6core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib6core1impl26api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6core1impl26api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6core1impl26api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6core1impl26api24(int a, int b) {
    return a + b;
}

int Lib6Core1Impl26Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib6Core1Impl26Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib6Core1Impl26Api2" << std::endl;
        Lib6Core1Impl26Impl lib6core1impl26impl;
        lib6core1impl26impl.doSomething();
        Lib6Core1Impl27Api1 lib6core1impl27api1;
        lib6core1impl27api1.doSomething();
        Lib6Core1Impl27Api2 lib6core1impl27api2;
        lib6core1impl27api2.doSomething();
        Lib6Core1Impl27Api3 lib6core1impl27api3;
        lib6core1impl27api3.doSomething();
        visited = 1;
    }
}

