// GENERATED SOURCE FILE

#include "lib7core1_private.h"
#include "lib7core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib7core1impl28api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core1impl28api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core1impl28api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core1impl28api24(int a, int b) {
    return a + b;
}

int Lib7Core1Impl28Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib7Core1Impl28Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib7Core1Impl28Api2" << std::endl;
        Lib7Core1Impl28Impl lib7core1impl28impl;
        lib7core1impl28impl.doSomething();
        Lib7Core1Impl29Api1 lib7core1impl29api1;
        lib7core1impl29api1.doSomething();
        Lib7Core1Impl29Api2 lib7core1impl29api2;
        lib7core1impl29api2.doSomething();
        Lib7Core1Impl29Api3 lib7core1impl29api3;
        lib7core1impl29api3.doSomething();
        visited = 1;
    }
}

