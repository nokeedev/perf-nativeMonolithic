// GENERATED SOURCE FILE

#include "lib11core1_private.h"
#include "lib11core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib11core1impl27api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core1impl27api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core1impl27api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core1impl27api24(int a, int b) {
    return a + b;
}

int Lib11Core1Impl27Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib11Core1Impl27Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib11Core1Impl27Api2" << std::endl;
        Lib11Core1Impl27Impl lib11core1impl27impl;
        lib11core1impl27impl.doSomething();
        Lib11Core1Impl28Api1 lib11core1impl28api1;
        lib11core1impl28api1.doSomething();
        Lib11Core1Impl28Api2 lib11core1impl28api2;
        lib11core1impl28api2.doSomething();
        Lib11Core1Impl28Api3 lib11core1impl28api3;
        lib11core1impl28api3.doSomething();
        visited = 1;
    }
}

