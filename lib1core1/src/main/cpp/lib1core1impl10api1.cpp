// GENERATED SOURCE FILE

#include "lib1core1_private.h"
#include "lib1core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib1core1impl10api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core1impl10api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core1impl10api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core1impl10api14(int a, int b) {
    return a + b;
}

int Lib1Core1Impl10Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib1Core1Impl10Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib1Core1Impl10Api1" << std::endl;
        Lib1Core1Impl11Api1 lib1core1impl11api1;
        lib1core1impl11api1.doSomething();
        Lib1Core1Impl10Impl lib1core1impl10impl;
        lib1core1impl10impl.doSomething();
        Lib1Core1Impl11Api2 lib1core1impl11api2;
        lib1core1impl11api2.doSomething();
        Lib1Core1Impl11Api3 lib1core1impl11api3;
        lib1core1impl11api3.doSomething();
        visited = 1;
    }
}

