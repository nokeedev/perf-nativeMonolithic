// GENERATED SOURCE FILE

#include "lib1core1_private.h"
#include "lib1core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib1core1impl28api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core1impl28api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core1impl28api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core1impl28api24(int a, int b) {
    return a + b;
}

int Lib1Core1Impl28Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib1Core1Impl28Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib1Core1Impl28Api2" << std::endl;
        Lib1Core1Impl28Impl lib1core1impl28impl;
        lib1core1impl28impl.doSomething();
        Lib1Core1Impl29Api1 lib1core1impl29api1;
        lib1core1impl29api1.doSomething();
        Lib1Core1Impl29Api2 lib1core1impl29api2;
        lib1core1impl29api2.doSomething();
        Lib1Core1Impl29Api3 lib1core1impl29api3;
        lib1core1impl29api3.doSomething();
        visited = 1;
    }
}

