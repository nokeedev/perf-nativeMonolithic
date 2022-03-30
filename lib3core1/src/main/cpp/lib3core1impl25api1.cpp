// GENERATED SOURCE FILE

#include "lib3core1_private.h"
#include "lib3core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib3core1impl25api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core1impl25api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core1impl25api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core1impl25api14(int a, int b) {
    return a + b;
}

int Lib3Core1Impl25Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib3Core1Impl25Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib3Core1Impl25Api1" << std::endl;
        Lib3Core1Impl26Api1 lib3core1impl26api1;
        lib3core1impl26api1.doSomething();
        Lib3Core1Impl25Impl lib3core1impl25impl;
        lib3core1impl25impl.doSomething();
        Lib3Core1Impl26Api2 lib3core1impl26api2;
        lib3core1impl26api2.doSomething();
        Lib3Core1Impl26Api3 lib3core1impl26api3;
        lib3core1impl26api3.doSomething();
        visited = 1;
    }
}

