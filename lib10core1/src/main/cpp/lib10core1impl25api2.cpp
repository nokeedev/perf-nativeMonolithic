// GENERATED SOURCE FILE

#include "lib10core1_private.h"
#include "lib10core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib10core1impl25api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core1impl25api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core1impl25api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core1impl25api24(int a, int b) {
    return a + b;
}

int Lib10Core1Impl25Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib10Core1Impl25Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib10Core1Impl25Api2" << std::endl;
        Lib10Core1Impl25Impl lib10core1impl25impl;
        lib10core1impl25impl.doSomething();
        Lib10Core1Impl26Api1 lib10core1impl26api1;
        lib10core1impl26api1.doSomething();
        Lib10Core1Impl26Api2 lib10core1impl26api2;
        lib10core1impl26api2.doSomething();
        Lib10Core1Impl26Api3 lib10core1impl26api3;
        lib10core1impl26api3.doSomething();
        visited = 1;
    }
}

