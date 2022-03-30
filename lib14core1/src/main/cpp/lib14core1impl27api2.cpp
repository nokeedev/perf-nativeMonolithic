// GENERATED SOURCE FILE

#include "lib14core1_private.h"
#include "lib14core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib14core1impl27api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core1impl27api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core1impl27api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core1impl27api24(int a, int b) {
    return a + b;
}

int Lib14Core1Impl27Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib14Core1Impl27Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib14Core1Impl27Api2" << std::endl;
        Lib14Core1Impl27Impl lib14core1impl27impl;
        lib14core1impl27impl.doSomething();
        Lib14Core1Impl28Api1 lib14core1impl28api1;
        lib14core1impl28api1.doSomething();
        Lib14Core1Impl28Api2 lib14core1impl28api2;
        lib14core1impl28api2.doSomething();
        Lib14Core1Impl28Api3 lib14core1impl28api3;
        lib14core1impl28api3.doSomething();
        visited = 1;
    }
}

