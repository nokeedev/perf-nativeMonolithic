// GENERATED SOURCE FILE

#include "lib13core1_private.h"
#include "lib13core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib13core1impl28api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core1impl28api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core1impl28api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core1impl28api34(int a, int b) {
    return a + b;
}

int Lib13Core1Impl28Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib13Core1Impl28Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib13Core1Impl28Api3" << std::endl;
        Lib13Core1Impl28Impl lib13core1impl28impl;
        lib13core1impl28impl.doSomething();
        Lib13Core1Impl29Api1 lib13core1impl29api1;
        lib13core1impl29api1.doSomething();
        Lib13Core1Impl29Api2 lib13core1impl29api2;
        lib13core1impl29api2.doSomething();
        Lib13Core1Impl29Api3 lib13core1impl29api3;
        lib13core1impl29api3.doSomething();
        visited = 1;
    }
}

