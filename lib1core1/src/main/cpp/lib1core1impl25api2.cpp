// GENERATED SOURCE FILE

#include "lib1core1_private.h"
#include "lib1core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib1core1impl25api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core1impl25api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core1impl25api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1core1impl25api24(int a, int b) {
    return a + b;
}

int Lib1Core1Impl25Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib1Core1Impl25Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib1Core1Impl25Api2" << std::endl;
        Lib1Core1Impl25Impl lib1core1impl25impl;
        lib1core1impl25impl.doSomething();
        Lib1Core1Impl26Api1 lib1core1impl26api1;
        lib1core1impl26api1.doSomething();
        Lib1Core1Impl26Api2 lib1core1impl26api2;
        lib1core1impl26api2.doSomething();
        Lib1Core1Impl26Api3 lib1core1impl26api3;
        lib1core1impl26api3.doSomething();
        visited = 1;
    }
}

