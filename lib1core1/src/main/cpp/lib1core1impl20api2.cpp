// GENERATED SOURCE FILE

#include "lib1core1_private.h"
#include "lib1core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib1core1impl20api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core1impl20api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core1impl20api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core1impl20api24(int a, int b) {
    return a + b;
}

int Lib1Core1Impl20Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib1Core1Impl20Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib1Core1Impl20Api2" << std::endl;
        Lib1Core1Impl20Impl lib1core1impl20impl;
        lib1core1impl20impl.doSomething();
        Lib1Core1Impl21Api1 lib1core1impl21api1;
        lib1core1impl21api1.doSomething();
        Lib1Core1Impl21Api2 lib1core1impl21api2;
        lib1core1impl21api2.doSomething();
        Lib1Core1Impl21Api3 lib1core1impl21api3;
        lib1core1impl21api3.doSomething();
        visited = 1;
    }
}

