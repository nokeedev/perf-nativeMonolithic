// GENERATED SOURCE FILE

#include "lib2core1_private.h"
#include "lib2core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib2core1impl26api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core1impl26api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core1impl26api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core1impl26api24(int a, int b) {
    return a + b;
}

int Lib2Core1Impl26Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib2Core1Impl26Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib2Core1Impl26Api2" << std::endl;
        Lib2Core1Impl26Impl lib2core1impl26impl;
        lib2core1impl26impl.doSomething();
        Lib2Core1Impl27Api1 lib2core1impl27api1;
        lib2core1impl27api1.doSomething();
        Lib2Core1Impl27Api2 lib2core1impl27api2;
        lib2core1impl27api2.doSomething();
        Lib2Core1Impl27Api3 lib2core1impl27api3;
        lib2core1impl27api3.doSomething();
        visited = 1;
    }
}

