// GENERATED SOURCE FILE

#include "lib1core1_private.h"
#include "lib1core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib1core1impl7api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core1impl7api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core1impl7api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core1impl7api14(int a, int b) {
    return a + b;
}

int Lib1Core1Impl7Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib1Core1Impl7Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib1Core1Impl7Api1" << std::endl;
        Lib1Core1Impl8Api1 lib1core1impl8api1;
        lib1core1impl8api1.doSomething();
        Lib1Core1Impl7Impl lib1core1impl7impl;
        lib1core1impl7impl.doSomething();
        Lib1Core1Impl8Api2 lib1core1impl8api2;
        lib1core1impl8api2.doSomething();
        Lib1Core1Impl8Api3 lib1core1impl8api3;
        lib1core1impl8api3.doSomething();
        visited = 1;
    }
}

