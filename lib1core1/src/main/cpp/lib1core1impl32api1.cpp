// GENERATED SOURCE FILE

#include "lib1core1_private.h"
#include "lib1core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib1core1impl32api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core1impl32api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core1impl32api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core1impl32api14(int a, int b) {
    return a + b;
}

int Lib1Core1Impl32Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib1Core1Impl32Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib1Core1Impl32Api1" << std::endl;
        Lib1Core1Impl33Api1 lib1core1impl33api1;
        lib1core1impl33api1.doSomething();
        Lib1Core1Impl32Impl lib1core1impl32impl;
        lib1core1impl32impl.doSomething();
        Lib1Core1Impl33Api2 lib1core1impl33api2;
        lib1core1impl33api2.doSomething();
        Lib1Core1Impl33Api3 lib1core1impl33api3;
        lib1core1impl33api3.doSomething();
        visited = 1;
    }
}

