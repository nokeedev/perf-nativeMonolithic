// GENERATED SOURCE FILE

#include "lib3core1_private.h"
#include "lib3core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib3core1impl31api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core1impl31api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core1impl31api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core1impl31api14(int a, int b) {
    return a + b;
}

int Lib3Core1Impl31Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib3Core1Impl31Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib3Core1Impl31Api1" << std::endl;
        Lib3Core1Impl32Api1 lib3core1impl32api1;
        lib3core1impl32api1.doSomething();
        Lib3Core1Impl31Impl lib3core1impl31impl;
        lib3core1impl31impl.doSomething();
        Lib3Core1Impl32Api2 lib3core1impl32api2;
        lib3core1impl32api2.doSomething();
        Lib3Core1Impl32Api3 lib3core1impl32api3;
        lib3core1impl32api3.doSomething();
        visited = 1;
    }
}

