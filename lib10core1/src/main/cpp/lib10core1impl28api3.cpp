// GENERATED SOURCE FILE

#include "lib10core1_private.h"
#include "lib10core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib10core1impl28api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core1impl28api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core1impl28api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core1impl28api34(int a, int b) {
    return a + b;
}

int Lib10Core1Impl28Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib10Core1Impl28Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib10Core1Impl28Api3" << std::endl;
        Lib10Core1Impl28Impl lib10core1impl28impl;
        lib10core1impl28impl.doSomething();
        Lib10Core1Impl29Api1 lib10core1impl29api1;
        lib10core1impl29api1.doSomething();
        Lib10Core1Impl29Api2 lib10core1impl29api2;
        lib10core1impl29api2.doSomething();
        Lib10Core1Impl29Api3 lib10core1impl29api3;
        lib10core1impl29api3.doSomething();
        visited = 1;
    }
}

