// GENERATED SOURCE FILE

#include "lib3core1_private.h"
#include "lib3core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib3core1impl31api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core1impl31api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core1impl31api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3core1impl31api24(int a, int b) {
    return a + b;
}

int Lib3Core1Impl31Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib3Core1Impl31Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib3Core1Impl31Api2" << std::endl;
        Lib3Core1Impl31Impl lib3core1impl31impl;
        lib3core1impl31impl.doSomething();
        Lib3Core1Impl32Api1 lib3core1impl32api1;
        lib3core1impl32api1.doSomething();
        Lib3Core1Impl32Api2 lib3core1impl32api2;
        lib3core1impl32api2.doSomething();
        Lib3Core1Impl32Api3 lib3core1impl32api3;
        lib3core1impl32api3.doSomething();
        visited = 1;
    }
}

