// GENERATED SOURCE FILE

#include "lib8core1_private.h"
#include "lib8core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib8core1impl28api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core1impl28api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core1impl28api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core1impl28api24(int a, int b) {
    return a + b;
}

int Lib8Core1Impl28Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib8Core1Impl28Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib8Core1Impl28Api2" << std::endl;
        Lib8Core1Impl28Impl lib8core1impl28impl;
        lib8core1impl28impl.doSomething();
        Lib8Core1Impl29Api1 lib8core1impl29api1;
        lib8core1impl29api1.doSomething();
        Lib8Core1Impl29Api2 lib8core1impl29api2;
        lib8core1impl29api2.doSomething();
        Lib8Core1Impl29Api3 lib8core1impl29api3;
        lib8core1impl29api3.doSomething();
        visited = 1;
    }
}

