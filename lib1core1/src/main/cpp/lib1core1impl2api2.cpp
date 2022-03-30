// GENERATED SOURCE FILE

#include "lib1core1_private.h"
#include "lib1core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib1core1impl2api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core1impl2api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core1impl2api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core1impl2api24(int a, int b) {
    return a + b;
}

int Lib1Core1Impl2Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib1Core1Impl2Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib1Core1Impl2Api2" << std::endl;
        Lib1Core1Impl2Impl lib1core1impl2impl;
        lib1core1impl2impl.doSomething();
        Lib1Core1Impl3Api1 lib1core1impl3api1;
        lib1core1impl3api1.doSomething();
        Lib1Core1Impl3Api2 lib1core1impl3api2;
        lib1core1impl3api2.doSomething();
        Lib1Core1Impl3Api3 lib1core1impl3api3;
        lib1core1impl3api3.doSomething();
        visited = 1;
    }
}

