// GENERATED SOURCE FILE

#include "lib10core1_private.h"
#include "lib10core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib10core1impl28api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core1impl28api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core1impl28api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core1impl28api14(int a, int b) {
    return a + b;
}

int Lib10Core1Impl28Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib10Core1Impl28Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib10Core1Impl28Api1" << std::endl;
        Lib10Core1Impl29Api1 lib10core1impl29api1;
        lib10core1impl29api1.doSomething();
        Lib10Core1Impl28Impl lib10core1impl28impl;
        lib10core1impl28impl.doSomething();
        Lib10Core1Impl29Api2 lib10core1impl29api2;
        lib10core1impl29api2.doSomething();
        Lib10Core1Impl29Api3 lib10core1impl29api3;
        lib10core1impl29api3.doSomething();
        visited = 1;
    }
}

